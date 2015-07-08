INCLUDES := $(INCLUDES) -Isrc -Iext/src
EXTRA_LIBS ?= -l$(NAME)-ext

CPPFLAGS := $(CPPFLAGS) $(INCLUDES)
CFLAGS := $(CFLAGS) -g -pipe -MMD -MP
CXXFLAGS := $(CFLAGS) -std=gnu++11

BIN := bin
OBJ := obj

NAME := config

LIB = lib$(NAME).a
EXT_LIB = lib$(NAME)-ext.a

LIBS = $(BIN)/$(LIB) $(BIN)/$(EXT_LIB)

SRC = src
STUB = stub
NATIVE = native

SRCS = \
	src/beanconfig/ArraysConfig.cpp \
	src/beanconfig/BooleansConfig.cpp \
	src/beanconfig/BytesConfig.cpp \
	src/beanconfig/DurationsConfig.cpp \
	src/beanconfig/NotABeanFieldConfig.cpp \
	src/beanconfig/NotABeanFieldConfig_NotABean.cpp \
	src/beanconfig/NumbersConfig.cpp \
	src/beanconfig/PreferCamelNamesConfig.cpp \
	src/beanconfig/StringsConfig.cpp \
	src/beanconfig/TestBeanConfig.cpp \
	src/beanconfig/UnsupportedListElementConfig.cpp \
	src/beanconfig/UnsupportedMapKeyConfig.cpp \
	src/beanconfig/UnsupportedMapValueConfig.cpp \
	src/beanconfig/ValidationBeanConfig.cpp \
	src/beanconfig/ValuesConfig.cpp \
	src/com/typesafe/config/Config.cpp \
	src/com/typesafe/config/ConfigBeanFactory.cpp \
	src/com/typesafe/config/ConfigException.cpp \
	src/com/typesafe/config/ConfigException_BadBean.cpp \
	src/com/typesafe/config/ConfigException_BadPath.cpp \
	src/com/typesafe/config/ConfigException_BadValue.cpp \
	src/com/typesafe/config/ConfigException_BugOrBroken.cpp \
	src/com/typesafe/config/ConfigException_Generic.cpp \
	src/com/typesafe/config/ConfigException_IO.cpp \
	src/com/typesafe/config/ConfigException_Missing.cpp \
	src/com/typesafe/config/ConfigException_NotResolved.cpp \
	src/com/typesafe/config/ConfigException_Null.cpp \
	src/com/typesafe/config/ConfigException_Parse.cpp \
	src/com/typesafe/config/ConfigException_UnresolvedSubstitution.cpp \
	src/com/typesafe/config/ConfigException_ValidationFailed.cpp \
	src/com/typesafe/config/ConfigException_ValidationProblem.cpp \
	src/com/typesafe/config/ConfigException_WrongType.cpp \
	src/com/typesafe/config/ConfigFactory.cpp \
	src/com/typesafe/config/ConfigFactory_load_1.cpp \
	src/com/typesafe/config/ConfigIncludeContext.cpp \
	src/com/typesafe/config/ConfigIncluder.cpp \
	src/com/typesafe/config/ConfigIncluderClasspath.cpp \
	src/com/typesafe/config/ConfigIncluderFile.cpp \
	src/com/typesafe/config/ConfigIncluderURL.cpp \
	src/com/typesafe/config/ConfigList.cpp \
	src/com/typesafe/config/ConfigMemorySize.cpp \
	src/com/typesafe/config/ConfigMergeable.cpp \
	src/com/typesafe/config/ConfigObject.cpp \
	src/com/typesafe/config/ConfigOrigin.cpp \
	src/com/typesafe/config/ConfigOriginFactory.cpp \
	src/com/typesafe/config/ConfigParseOptions.cpp \
	src/com/typesafe/config/ConfigParseable.cpp \
	src/com/typesafe/config/ConfigRenderOptions.cpp \
	src/com/typesafe/config/ConfigResolveOptions.cpp \
	src/com/typesafe/config/ConfigSyntax.cpp \
	src/com/typesafe/config/ConfigUtil.cpp \
	src/com/typesafe/config/ConfigValue.cpp \
	src/com/typesafe/config/ConfigValueFactory.cpp \
	src/com/typesafe/config/ConfigValueType.cpp \
	src/com/typesafe/config/impl/AbstractConfigNode.cpp \
	src/com/typesafe/config/impl/AbstractConfigNodeValue.cpp \
	src/com/typesafe/config/impl/AbstractConfigObject.cpp \
	src/com/typesafe/config/impl/AbstractConfigValue.cpp \
	src/com/typesafe/config/impl/AbstractConfigValue_Modifier.cpp \
	src/com/typesafe/config/impl/AbstractConfigValue_NoExceptionsModifier.cpp \
	src/com/typesafe/config/impl/AbstractConfigValue_NotPossibleToResolve.cpp \
	src/com/typesafe/config/impl/ConfigBeanImpl.cpp \
	src/com/typesafe/config/impl/ConfigBoolean.cpp \
	src/com/typesafe/config/impl/ConfigConcatenation.cpp \
	src/com/typesafe/config/impl/ConfigDelayedMerge.cpp \
	src/com/typesafe/config/impl/ConfigDelayedMergeObject.cpp \
	src/com/typesafe/config/impl/ConfigDocumentParser.cpp \
	src/com/typesafe/config/impl/ConfigDocumentParser_ParseContext.cpp \
	src/com/typesafe/config/impl/ConfigDouble.cpp \
	src/com/typesafe/config/impl/ConfigImpl.cpp \
	src/com/typesafe/config/impl/ConfigImplUtil.cpp \
	src/com/typesafe/config/impl/ConfigImpl_ClasspathNameSource.cpp \
	src/com/typesafe/config/impl/ConfigImpl_ClasspathNameSourceWithClass.cpp \
	src/com/typesafe/config/impl/ConfigImpl_DebugHolder.cpp \
	src/com/typesafe/config/impl/ConfigImpl_DefaultIncluderHolder.cpp \
	src/com/typesafe/config/impl/ConfigImpl_EnvVariablesHolder.cpp \
	src/com/typesafe/config/impl/ConfigImpl_FileNameSource.cpp \
	src/com/typesafe/config/impl/ConfigImpl_LoaderCache.cpp \
	src/com/typesafe/config/impl/ConfigImpl_LoaderCacheHolder.cpp \
	src/com/typesafe/config/impl/ConfigImpl_SystemPropertiesHolder.cpp \
	src/com/typesafe/config/impl/ConfigImpl_defaultReference_1.cpp \
	src/com/typesafe/config/impl/ConfigIncludeKind.cpp \
	src/com/typesafe/config/impl/ConfigInt.cpp \
	src/com/typesafe/config/impl/ConfigLong.cpp \
	src/com/typesafe/config/impl/ConfigNodeArray_.cpp \
	src/com/typesafe/config/impl/ConfigNodeComment.cpp \
	src/com/typesafe/config/impl/ConfigNodeComplexValue.cpp \
	src/com/typesafe/config/impl/ConfigNodeConcatenation.cpp \
	src/com/typesafe/config/impl/ConfigNodeField.cpp \
	src/com/typesafe/config/impl/ConfigNodeInclude.cpp \
	src/com/typesafe/config/impl/ConfigNodeObject.cpp \
	src/com/typesafe/config/impl/ConfigNodePath.cpp \
	src/com/typesafe/config/impl/ConfigNodeRoot.cpp \
	src/com/typesafe/config/impl/ConfigNodeSimpleValue.cpp \
	src/com/typesafe/config/impl/ConfigNodeSingleToken.cpp \
	src/com/typesafe/config/impl/ConfigNull.cpp \
	src/com/typesafe/config/impl/ConfigNumber.cpp \
	src/com/typesafe/config/impl/ConfigParser.cpp \
	src/com/typesafe/config/impl/ConfigParser_ParseContext.cpp \
	src/com/typesafe/config/impl/ConfigReference.cpp \
	src/com/typesafe/config/impl/ConfigString.cpp \
	src/com/typesafe/config/impl/ConfigString_Quoted.cpp \
	src/com/typesafe/config/impl/ConfigString_Unquoted.cpp \
	src/com/typesafe/config/impl/Container.cpp \
	src/com/typesafe/config/impl/DefaultTransformer.cpp \
	src/com/typesafe/config/impl/DefaultTransformer_transform_1.cpp \
	src/com/typesafe/config/impl/FromMapMode.cpp \
	src/com/typesafe/config/impl/FullIncluder.cpp \
	src/com/typesafe/config/impl/MemoKey.cpp \
	src/com/typesafe/config/impl/MergeableValue.cpp \
	src/com/typesafe/config/impl/OriginType.cpp \
	src/com/typesafe/config/impl/Parseable.cpp \
	src/com/typesafe/config/impl/Parseable_1.cpp \
	src/com/typesafe/config/impl/Parseable_ParseableFile.cpp \
	src/com/typesafe/config/impl/Parseable_ParseableNotFound.cpp \
	src/com/typesafe/config/impl/Parseable_ParseableProperties.cpp \
	src/com/typesafe/config/impl/Parseable_ParseableReader.cpp \
	src/com/typesafe/config/impl/Parseable_ParseableResourceURL.cpp \
	src/com/typesafe/config/impl/Parseable_ParseableResources.cpp \
	src/com/typesafe/config/impl/Parseable_ParseableString.cpp \
	src/com/typesafe/config/impl/Parseable_ParseableURL.cpp \
	src/com/typesafe/config/impl/Parseable_Relativizer.cpp \
	src/com/typesafe/config/impl/Parseable_doNotClose_2.cpp \
	src/com/typesafe/config/impl/Path.cpp \
	src/com/typesafe/config/impl/PathBuilder.cpp \
	src/com/typesafe/config/impl/PathParser.cpp \
	src/com/typesafe/config/impl/PathParser_Element.cpp \
	src/com/typesafe/config/impl/PropertiesParser.cpp \
	src/com/typesafe/config/impl/PropertiesParser_fromPathMap_1.cpp \
	src/com/typesafe/config/impl/ReplaceableMergeStack.cpp \
	src/com/typesafe/config/impl/ResolveContext.cpp \
	src/com/typesafe/config/impl/ResolveMemos.cpp \
	src/com/typesafe/config/impl/ResolveResult.cpp \
	src/com/typesafe/config/impl/ResolveSource.cpp \
	src/com/typesafe/config/impl/ResolveSource_Node.cpp \
	src/com/typesafe/config/impl/ResolveSource_ResultWithPath.cpp \
	src/com/typesafe/config/impl/ResolveSource_ValueWithPath.cpp \
	src/com/typesafe/config/impl/ResolveStatus.cpp \
	src/com/typesafe/config/impl/SerializedConfigValue.cpp \
	src/com/typesafe/config/impl/SerializedConfigValue_FieldOut.cpp \
	src/com/typesafe/config/impl/SerializedConfigValue_SerializedField.cpp \
	src/com/typesafe/config/impl/SerializedConfigValue_SerializedValueType.cpp \
	src/com/typesafe/config/impl/SimpleConfig.cpp \
	src/com/typesafe/config/impl/SimpleConfigDocument.cpp \
	src/com/typesafe/config/impl/SimpleConfigList.cpp \
	src/com/typesafe/config/impl/SimpleConfigList_ResolveModifier.cpp \
	src/com/typesafe/config/impl/SimpleConfigList_iterator_2.cpp \
	src/com/typesafe/config/impl/SimpleConfigList_relativized_1.cpp \
	src/com/typesafe/config/impl/SimpleConfigList_wrapListIterator_3.cpp \
	src/com/typesafe/config/impl/SimpleConfigObject.cpp \
	src/com/typesafe/config/impl/SimpleConfigObject_RenderComparator.cpp \
	src/com/typesafe/config/impl/SimpleConfigObject_ResolveModifier.cpp \
	src/com/typesafe/config/impl/SimpleConfigObject_relativized_1.cpp \
	src/com/typesafe/config/impl/SimpleConfigOrigin.cpp \
	src/com/typesafe/config/impl/SimpleConfig_MemoryUnit.cpp \
	src/com/typesafe/config/impl/SimpleIncludeContext.cpp \
	src/com/typesafe/config/impl/SimpleIncluder.cpp \
	src/com/typesafe/config/impl/SimpleIncluder_NameSource.cpp \
	src/com/typesafe/config/impl/SimpleIncluder_Proxy.cpp \
	src/com/typesafe/config/impl/SimpleIncluder_RelativeNameSource.cpp \
	src/com/typesafe/config/impl/SubstitutionExpression.cpp \
	src/com/typesafe/config/impl/Token.cpp \
	src/com/typesafe/config/impl/TokenType.cpp \
	src/com/typesafe/config/impl/Tokenizer.cpp \
	src/com/typesafe/config/impl/Tokenizer_ProblemException.cpp \
	src/com/typesafe/config/impl/Tokenizer_TokenIterator.cpp \
	src/com/typesafe/config/impl/Tokenizer_TokenIterator_WhitespaceSaver.cpp \
	src/com/typesafe/config/impl/Tokens.cpp \
	src/com/typesafe/config/impl/Tokens_Comment.cpp \
	src/com/typesafe/config/impl/Tokens_Comment_DoubleSlashComment.cpp \
	src/com/typesafe/config/impl/Tokens_Comment_HashComment.cpp \
	src/com/typesafe/config/impl/Tokens_IgnoredWhitespace.cpp \
	src/com/typesafe/config/impl/Tokens_Line.cpp \
	src/com/typesafe/config/impl/Tokens_Problem.cpp \
	src/com/typesafe/config/impl/Tokens_Substitution.cpp \
	src/com/typesafe/config/impl/Tokens_UnquotedText.cpp \
	src/com/typesafe/config/impl/Tokens_Value.cpp \
	src/com/typesafe/config/impl/Unmergeable.cpp \
	src/com/typesafe/config/parser/ConfigDocument.cpp \
	src/com/typesafe/config/parser/ConfigDocumentFactory.cpp \
	src/com/typesafe/config/parser/ConfigNode.cpp \
	src/equiv03/SomethingInEquiv03.cpp \


STUB_SRCS = \


NATIVE_SRCS = \


EXT_SRCS = \


EXT_STUB_SRCS = \
	ext/stub/java/beans/FeatureDescriptor-stub.cpp \
	ext/stub/java/beans/IntrospectionException-stub.cpp \
	ext/stub/java/beans/Introspector-stub.cpp \
	ext/stub/java/beans/PropertyDescriptor-stub.cpp \
	ext/stub/java/io/BufferedReader-stub.cpp \
	ext/stub/java/io/ByteArrayOutputStream-stub.cpp \
	ext/stub/java/io/DataOutputStream-stub.cpp \
	ext/stub/java/io/File-stub.cpp \
	ext/stub/java/io/FileInputStream-stub.cpp \
	ext/stub/java/io/FileNotFoundException-stub.cpp \
	ext/stub/java/io/File_PathStatus-stub.cpp \
	ext/stub/java/io/File_TempDirectory-stub.cpp \
	ext/stub/java/io/FilterOutputStream-stub.cpp \
	ext/stub/java/io/FilterReader-stub.cpp \
	ext/stub/java/io/IOException-stub.cpp \
	ext/stub/java/io/InputStream-stub.cpp \
	ext/stub/java/io/InputStreamReader-stub.cpp \
	ext/stub/java/io/NotSerializableException-stub.cpp \
	ext/stub/java/io/ObjectInputStream-stub.cpp \
	ext/stub/java/io/ObjectInputStream_BlockDataInputStream-stub.cpp \
	ext/stub/java/io/ObjectInputStream_Caches-stub.cpp \
	ext/stub/java/io/ObjectInputStream_GetField-stub.cpp \
	ext/stub/java/io/ObjectInputStream_GetFieldImpl-stub.cpp \
	ext/stub/java/io/ObjectInputStream_HandleTable-stub.cpp \
	ext/stub/java/io/ObjectInputStream_HandleTable_HandleList-stub.cpp \
	ext/stub/java/io/ObjectInputStream_PeekInputStream-stub.cpp \
	ext/stub/java/io/ObjectInputStream_ValidationList-stub.cpp \
	ext/stub/java/io/ObjectInputStream_ValidationList_Callback-stub.cpp \
	ext/stub/java/io/ObjectOutputStream-stub.cpp \
	ext/stub/java/io/ObjectOutputStream_BlockDataOutputStream-stub.cpp \
	ext/stub/java/io/ObjectOutputStream_Caches-stub.cpp \
	ext/stub/java/io/ObjectOutputStream_DebugTraceInfoStack-stub.cpp \
	ext/stub/java/io/ObjectOutputStream_HandleTable-stub.cpp \
	ext/stub/java/io/ObjectOutputStream_PutField-stub.cpp \
	ext/stub/java/io/ObjectOutputStream_PutFieldImpl-stub.cpp \
	ext/stub/java/io/ObjectOutputStream_ReplaceTable-stub.cpp \
	ext/stub/java/io/ObjectStreamException-stub.cpp \
	ext/stub/java/io/OutputStream-stub.cpp \
	ext/stub/java/io/PrintStream-stub.cpp \
	ext/stub/java/io/Reader-stub.cpp \
	ext/stub/java/io/StringReader-stub.cpp \
	ext/stub/java/io/UnsupportedEncodingException-stub.cpp \
	ext/stub/java/lang/AbstractStringBuilder-stub.cpp \
	ext/stub/java/lang/ArrayStoreException-stub.cpp \
	ext/stub/java/lang/Boolean-stub.cpp \
	ext/stub/java/lang/Character-stub.cpp \
	ext/stub/java/lang/Character_CharacterCache-stub.cpp \
	ext/stub/java/lang/Character_Subset-stub.cpp \
	ext/stub/java/lang/Character_UnicodeBlock-stub.cpp \
	ext/stub/java/lang/Character_UnicodeScript-stub.cpp \
	ext/stub/java/lang/Class-stub.cpp \
	ext/stub/java/lang/ClassCastException-stub.cpp \
	ext/stub/java/lang/ClassLoader-stub.cpp \
	ext/stub/java/lang/ClassLoader_NativeLibrary-stub.cpp \
	ext/stub/java/lang/ClassLoader_ParallelLoaders-stub.cpp \
	ext/stub/java/lang/Class_AnnotationData-stub.cpp \
	ext/stub/java/lang/Class_Atomic-stub.cpp \
	ext/stub/java/lang/Class_EnclosingMethodInfo-stub.cpp \
	ext/stub/java/lang/Class_MethodArray-stub.cpp \
	ext/stub/java/lang/Class_ReflectionData-stub.cpp \
	ext/stub/java/lang/Double-stub.cpp \
	ext/stub/java/lang/Enum-stub.cpp \
	ext/stub/java/lang/Error-stub.cpp \
	ext/stub/java/lang/Exception-stub.cpp \
	ext/stub/java/lang/ExceptionInInitializerError-stub.cpp \
	ext/stub/java/lang/IllegalAccessException-stub.cpp \
	ext/stub/java/lang/IllegalArgumentException-stub.cpp \
	ext/stub/java/lang/InstantiationException-stub.cpp \
	ext/stub/java/lang/Integer-stub.cpp \
	ext/stub/java/lang/Integer_IntegerCache-stub.cpp \
	ext/stub/java/lang/LinkageError-stub.cpp \
	ext/stub/java/lang/Long-stub.cpp \
	ext/stub/java/lang/Long_LongCache-stub.cpp \
	ext/stub/java/lang/Math-stub.cpp \
	ext/stub/java/lang/Math_RandomNumberGeneratorHolder-stub.cpp \
	ext/stub/java/lang/NoSuchFieldException-stub.cpp \
	ext/stub/java/lang/NullPointerException-stub.cpp \
	ext/stub/java/lang/Number-stub.cpp \
	ext/stub/java/lang/NumberFormatException-stub.cpp \
	ext/stub/java/lang/Object-stub.cpp \
	ext/stub/java/lang/ReflectiveOperationException-stub.cpp \
	ext/stub/java/lang/RuntimeException-stub.cpp \
	ext/stub/java/lang/SecurityException-stub.cpp \
	ext/stub/java/lang/String-stub.cpp \
	ext/stub/java/lang/StringBuffer-stub.cpp \
	ext/stub/java/lang/StringBuilder-stub.cpp \
	ext/stub/java/lang/String_CaseInsensitiveComparator-stub.cpp \
	ext/stub/java/lang/System-stub.cpp \
	ext/stub/java/lang/Thread-stub.cpp \
	ext/stub/java/lang/ThreadLocal-stub.cpp \
	ext/stub/java/lang/ThreadLocal_SuppliedThreadLocal-stub.cpp \
	ext/stub/java/lang/ThreadLocal_ThreadLocalMap-stub.cpp \
	ext/stub/java/lang/ThreadLocal_ThreadLocalMap_Entry-stub.cpp \
	ext/stub/java/lang/Thread_Caches-stub.cpp \
	ext/stub/java/lang/Thread_State-stub.cpp \
	ext/stub/java/lang/Thread_WeakClassKey-stub.cpp \
	ext/stub/java/lang/Throwable-stub.cpp \
	ext/stub/java/lang/Throwable_PrintStreamOrWriter-stub.cpp \
	ext/stub/java/lang/Throwable_SentinelHolder-stub.cpp \
	ext/stub/java/lang/Throwable_WrappedPrintStream-stub.cpp \
	ext/stub/java/lang/Throwable_WrappedPrintWriter-stub.cpp \
	ext/stub/java/lang/UnsupportedOperationException-stub.cpp \
	ext/stub/java/lang/ref/Reference-stub.cpp \
	ext/stub/java/lang/ref/Reference_Lock-stub.cpp \
	ext/stub/java/lang/ref/Reference_ReferenceHandler-stub.cpp \
	ext/stub/java/lang/ref/WeakReference-stub.cpp \
	ext/stub/java/lang/reflect/AccessibleObject-stub.cpp \
	ext/stub/java/lang/reflect/Executable-stub.cpp \
	ext/stub/java/lang/reflect/Field-stub.cpp \
	ext/stub/java/lang/reflect/InvocationTargetException-stub.cpp \
	ext/stub/java/lang/reflect/Method-stub.cpp \
	ext/stub/java/math/BigDecimal-stub.cpp \
	ext/stub/java/math/BigDecimal_LongOverflow-stub.cpp \
	ext/stub/java/math/BigDecimal_StringBuilderHelper-stub.cpp \
	ext/stub/java/math/BigDecimal_UnsafeHolder-stub.cpp \
	ext/stub/java/math/BigInteger-stub.cpp \
	ext/stub/java/math/BigInteger_UnsafeHolder-stub.cpp \
	ext/stub/java/net/MalformedURLException-stub.cpp \
	ext/stub/java/net/URI-stub.cpp \
	ext/stub/java/net/URISyntaxException-stub.cpp \
	ext/stub/java/net/URI_Parser-stub.cpp \
	ext/stub/java/net/URL-stub.cpp \
	ext/stub/java/net/URLConnection-stub.cpp \
	ext/stub/java/time/Duration-stub.cpp \
	ext/stub/java/time/Duration_DurationUnits-stub.cpp \
	ext/stub/java/util/AbstractCollection-stub.cpp \
	ext/stub/java/util/AbstractList-stub.cpp \
	ext/stub/java/util/AbstractList_Itr-stub.cpp \
	ext/stub/java/util/AbstractList_ListItr-stub.cpp \
	ext/stub/java/util/AbstractMap-stub.cpp \
	ext/stub/java/util/AbstractMap_SimpleEntry-stub.cpp \
	ext/stub/java/util/AbstractMap_SimpleImmutableEntry-stub.cpp \
	ext/stub/java/util/AbstractQueue-stub.cpp \
	ext/stub/java/util/AbstractSequentialList-stub.cpp \
	ext/stub/java/util/AbstractSet-stub.cpp \
	ext/stub/java/util/ArrayList-stub.cpp \
	ext/stub/java/util/ArrayList_ArrayListSpliterator-stub.cpp \
	ext/stub/java/util/ArrayList_Itr-stub.cpp \
	ext/stub/java/util/ArrayList_ListItr-stub.cpp \
	ext/stub/java/util/ArrayList_SubList-stub.cpp \
	ext/stub/java/util/Arrays-stub.cpp \
	ext/stub/java/util/Arrays_ArrayList-stub.cpp \
	ext/stub/java/util/Arrays_LegacyMergeSort-stub.cpp \
	ext/stub/java/util/Arrays_NaturalOrder-stub.cpp \
	ext/stub/java/util/Collections-stub.cpp \
	ext/stub/java/util/Collections_AsLIFOQueue-stub.cpp \
	ext/stub/java/util/Collections_CheckedCollection-stub.cpp \
	ext/stub/java/util/Collections_CheckedList-stub.cpp \
	ext/stub/java/util/Collections_CheckedMap-stub.cpp \
	ext/stub/java/util/Collections_CheckedMap_CheckedEntrySet-stub.cpp \
	ext/stub/java/util/Collections_CheckedMap_CheckedEntrySet_CheckedEntry-stub.cpp \
	ext/stub/java/util/Collections_CheckedNavigableMap-stub.cpp \
	ext/stub/java/util/Collections_CheckedNavigableSet-stub.cpp \
	ext/stub/java/util/Collections_CheckedQueue-stub.cpp \
	ext/stub/java/util/Collections_CheckedRandomAccessList-stub.cpp \
	ext/stub/java/util/Collections_CheckedSet-stub.cpp \
	ext/stub/java/util/Collections_CheckedSortedMap-stub.cpp \
	ext/stub/java/util/Collections_CheckedSortedSet-stub.cpp \
	ext/stub/java/util/Collections_CopiesList-stub.cpp \
	ext/stub/java/util/Collections_EmptyEnumeration-stub.cpp \
	ext/stub/java/util/Collections_EmptyIterator-stub.cpp \
	ext/stub/java/util/Collections_EmptyList-stub.cpp \
	ext/stub/java/util/Collections_EmptyListIterator-stub.cpp \
	ext/stub/java/util/Collections_EmptyMap-stub.cpp \
	ext/stub/java/util/Collections_EmptySet-stub.cpp \
	ext/stub/java/util/Collections_ReverseComparator-stub.cpp \
	ext/stub/java/util/Collections_ReverseComparator2-stub.cpp \
	ext/stub/java/util/Collections_SetFromMap-stub.cpp \
	ext/stub/java/util/Collections_SingletonList-stub.cpp \
	ext/stub/java/util/Collections_SingletonMap-stub.cpp \
	ext/stub/java/util/Collections_SingletonSet-stub.cpp \
	ext/stub/java/util/Collections_SynchronizedCollection-stub.cpp \
	ext/stub/java/util/Collections_SynchronizedList-stub.cpp \
	ext/stub/java/util/Collections_SynchronizedMap-stub.cpp \
	ext/stub/java/util/Collections_SynchronizedNavigableMap-stub.cpp \
	ext/stub/java/util/Collections_SynchronizedNavigableSet-stub.cpp \
	ext/stub/java/util/Collections_SynchronizedRandomAccessList-stub.cpp \
	ext/stub/java/util/Collections_SynchronizedSet-stub.cpp \
	ext/stub/java/util/Collections_SynchronizedSortedMap-stub.cpp \
	ext/stub/java/util/Collections_SynchronizedSortedSet-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableCollection-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableList-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableMap-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableMap_UnmodifiableEntrySet-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntry-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntrySetSpliterator-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableNavigableMap-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableNavigableMap_EmptyNavigableMap-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableNavigableSet-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableNavigableSet_EmptyNavigableSet-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableRandomAccessList-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableSet-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableSortedMap-stub.cpp \
	ext/stub/java/util/Collections_UnmodifiableSortedSet-stub.cpp \
	ext/stub/java/util/Dictionary-stub.cpp \
	ext/stub/java/util/EnumMap-stub.cpp \
	ext/stub/java/util/EnumMap_EntryIterator-stub.cpp \
	ext/stub/java/util/EnumMap_EntryIterator_Entry-stub.cpp \
	ext/stub/java/util/EnumMap_EntrySet-stub.cpp \
	ext/stub/java/util/EnumMap_EnumMapIterator-stub.cpp \
	ext/stub/java/util/EnumMap_KeyIterator-stub.cpp \
	ext/stub/java/util/EnumMap_KeySet-stub.cpp \
	ext/stub/java/util/EnumMap_ValueIterator-stub.cpp \
	ext/stub/java/util/EnumMap_Values-stub.cpp \
	ext/stub/java/util/HashMap-stub.cpp \
	ext/stub/java/util/HashMap_EntryIterator-stub.cpp \
	ext/stub/java/util/HashMap_EntrySet-stub.cpp \
	ext/stub/java/util/HashMap_EntrySpliterator-stub.cpp \
	ext/stub/java/util/HashMap_HashIterator-stub.cpp \
	ext/stub/java/util/HashMap_HashMapSpliterator-stub.cpp \
	ext/stub/java/util/HashMap_KeyIterator-stub.cpp \
	ext/stub/java/util/HashMap_KeySet-stub.cpp \
	ext/stub/java/util/HashMap_KeySpliterator-stub.cpp \
	ext/stub/java/util/HashMap_Node-stub.cpp \
	ext/stub/java/util/HashMap_TreeNode-stub.cpp \
	ext/stub/java/util/HashMap_ValueIterator-stub.cpp \
	ext/stub/java/util/HashMap_ValueSpliterator-stub.cpp \
	ext/stub/java/util/HashMap_Values-stub.cpp \
	ext/stub/java/util/HashSet-stub.cpp \
	ext/stub/java/util/Hashtable-stub.cpp \
	ext/stub/java/util/Hashtable_Entry-stub.cpp \
	ext/stub/java/util/Hashtable_EntrySet-stub.cpp \
	ext/stub/java/util/Hashtable_Enumerator-stub.cpp \
	ext/stub/java/util/Hashtable_KeySet-stub.cpp \
	ext/stub/java/util/Hashtable_ValueCollection-stub.cpp \
	ext/stub/java/util/IdentityHashMap-stub.cpp \
	ext/stub/java/util/IdentityHashMap_EntryIterator-stub.cpp \
	ext/stub/java/util/IdentityHashMap_EntryIterator_Entry-stub.cpp \
	ext/stub/java/util/IdentityHashMap_EntrySet-stub.cpp \
	ext/stub/java/util/IdentityHashMap_EntrySpliterator-stub.cpp \
	ext/stub/java/util/IdentityHashMap_IdentityHashMapIterator-stub.cpp \
	ext/stub/java/util/IdentityHashMap_IdentityHashMapSpliterator-stub.cpp \
	ext/stub/java/util/IdentityHashMap_KeyIterator-stub.cpp \
	ext/stub/java/util/IdentityHashMap_KeySet-stub.cpp \
	ext/stub/java/util/IdentityHashMap_KeySpliterator-stub.cpp \
	ext/stub/java/util/IdentityHashMap_ValueIterator-stub.cpp \
	ext/stub/java/util/IdentityHashMap_ValueSpliterator-stub.cpp \
	ext/stub/java/util/IdentityHashMap_Values-stub.cpp \
	ext/stub/java/util/LinkedHashMap_Entry-stub.cpp \
	ext/stub/java/util/LinkedList-stub.cpp \
	ext/stub/java/util/LinkedList_DescendingIterator-stub.cpp \
	ext/stub/java/util/LinkedList_LLSpliterator-stub.cpp \
	ext/stub/java/util/LinkedList_ListItr-stub.cpp \
	ext/stub/java/util/LinkedList_Node-stub.cpp \
	ext/stub/java/util/Properties-stub.cpp \
	ext/stub/java/util/Properties_LineReader-stub.cpp \
	ext/stub/java/util/Properties_XmlSupport-stub.cpp \
	ext/stub/java/util/Stack-stub.cpp \
	ext/stub/java/util/Vector-stub.cpp \
	ext/stub/java/util/Vector_Itr-stub.cpp \
	ext/stub/java/util/Vector_ListItr-stub.cpp \
	ext/stub/java/util/Vector_VectorSpliterator-stub.cpp \
	ext/stub/java/util/concurrent/TimeUnit-stub.cpp \
	ext/stub/sun/reflect/generics/repository/AbstractRepository-stub.cpp \
	ext/stub/sun/reflect/generics/repository/ConstructorRepository-stub.cpp \
	ext/stub/sun/reflect/generics/repository/GenericDeclRepository-stub.cpp \
	ext/stub/sun/reflect/generics/repository/MethodRepository-stub.cpp \
	ext/stub/sun/reflect/generics/tree/MethodTypeSignature-stub.cpp \


EXT_NATIVE_SRCS = \
	ext/native/java/io/FileInputStream-native.cpp \
	ext/native/java/io/ObjectInputStream-native.cpp \
	ext/native/java/io/ObjectOutputStream-native.cpp \
	ext/native/java/lang/Class-native.cpp \
	ext/native/java/lang/ClassLoader-native.cpp \
	ext/native/java/lang/ClassLoader_NativeLibrary-native.cpp \
	ext/native/java/lang/Double-native.cpp \
	ext/native/java/lang/Object-native.cpp \
	ext/native/java/lang/String-native.cpp \
	ext/native/java/lang/System-native.cpp \
	ext/native/java/lang/Thread-native.cpp \
	ext/native/java/lang/Throwable-native.cpp \
	ext/native/java/lang/reflect/Executable-native.cpp \
	ext/native/java/lang/reflect/Field-native.cpp \


MAIN_SRCS = \


MAINS = $(MAIN_SRCS:$(SRC)/%-main.cpp=$(BIN)/%)
OBJS = $(SRCS:$(SRC)/%.cpp=$(OBJ)/%.o)
STUB_OBJS = $(STUB_SRCS:$(STUB)/%.cpp=$(OBJ)/%.o)
NATIVE_OBJS = $(NATIVE_SRCS:$(NATIVE)/%.cpp=$(OBJ)/%.o)

EXT_OBJS = $(EXT_SRCS:ext/$(SRC)/%.cpp=$(OBJ)/%.o)
EXT_STUB_OBJS = $(EXT_STUB_SRCS:ext/$(STUB)/%.cpp=$(OBJ)/%.o)
EXT_NATIVE_OBJS = $(EXT_NATIVE_SRCS:ext/$(NATIVE)/%.cpp=$(OBJ)/%.o)

all: $(LIBS)

define cc-command
@mkdir -p $(dir $@); 
@echo Compile $<; $(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<
endef

$(OBJS):$(OBJ)/%.o: $(SRC)/%.cpp | print-opts
	$(cc-command)
	
$(STUB_OBJS):$(OBJ)/%.o: $(STUB)/%.cpp | print-opts
	$(cc-command)

$(NATIVE_OBJS):$(OBJ)/%.o: $(NATIVE)/%.cpp | print-opts
	$(cc-command)

$(EXT_OBJS):$(OBJ)/%.o: ext/$(SRC)/%.cpp | print-opts
	$(cc-command)

$(EXT_STUB_OBJS):$(OBJ)/%.o: ext/$(STUB)/%.cpp | print-opts
	$(cc-command)

$(EXT_NATIVE_OBJS):$(OBJ)/%.o: ext/$(NATIVE)/%.cpp | print-opts
	$(cc-command)

%.a:
	@echo Archive $@
	@mkdir -p $(dir $@)
	@rm -f $@
	@ar rcs $@ $^

$(BIN)/$(LIB): $(OBJS) $(STUB_OBJS) $(NATIVE_OBJS)

$(BIN)/$(EXT_LIB): $(EXT_OBJS) $(EXT_STUB_OBJS) $(EXT_NATIVE_OBJS)

$(MAINS):$(BIN)/%:$(SRC)/%-main.cpp $(LIBS)
	@mkdir -p $(dir $@); 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -L$(BIN) -o $@ $< -l$(NAME) $(EXTRA_LIBS)

mains: $(MAINS)

clean:
	rm -rf $(OBJ) $(BIN)

print-opts:
	@echo Building with \"$(CXX) $(CPPFLAGS) $(CXXFLAGS)\"
	
.PHONY: all mains clean print-opts

-include $(OBJS:%.o=%.d)
