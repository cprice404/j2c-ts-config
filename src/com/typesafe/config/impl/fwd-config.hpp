// Forward declarations for com.typesafe.config.impl
#pragma once


namespace com {
namespace typesafe {
namespace config {
namespace impl {
                class AbstractConfigNode;
                class AbstractConfigNodeValue;
                class AbstractConfigObject;
                class AbstractConfigValue;
                struct AbstractConfigValue_Modifier;
                class AbstractConfigValue_NoExceptionsModifier;
                class AbstractConfigValue_NotPossibleToResolve;
                class ConfigBeanImpl;
                class ConfigBoolean;
                class ConfigConcatenation;
                class ConfigDelayedMerge;
                class ConfigDelayedMergeObject;
                class ConfigDocumentParser;
                class ConfigDocumentParser_ParseContext;
                class ConfigDouble;
                class ConfigImpl;
                class ConfigImplUtil;
                class ConfigImpl_ClasspathNameSource;
                class ConfigImpl_ClasspathNameSourceWithClass;
                class ConfigImpl_DebugHolder;
                class ConfigImpl_DefaultIncluderHolder;
                class ConfigImpl_EnvVariablesHolder;
                class ConfigImpl_FileNameSource;
                class ConfigImpl_LoaderCache;
                class ConfigImpl_LoaderCacheHolder;
                class ConfigImpl_SystemPropertiesHolder;
                class ConfigImpl_defaultReference_1;
                class ConfigIncludeKind;
                class ConfigInt;
                class ConfigLong;
                class ConfigNodeArray_;
                class ConfigNodeComment;
                class ConfigNodeComplexValue;
                class ConfigNodeConcatenation;
                class ConfigNodeField;
                class ConfigNodeInclude;
                class ConfigNodeObject;
                class ConfigNodePath;
                class ConfigNodeRoot;
                class ConfigNodeSimpleValue;
                class ConfigNodeSingleToken;
                class ConfigNull;
                class ConfigNumber;
                class ConfigParser;
                class ConfigParser_ParseContext;
                class ConfigReference;
                class ConfigString;
                class ConfigString_Quoted;
                class ConfigString_Unquoted;
                struct Container;
                class DefaultTransformer;
                class DefaultTransformer_transform_1;
                class FromMapMode;
                struct FullIncluder;
                class MemoKey;
                struct MergeableValue;
                class OriginType;
                class Parseable;
                class Parseable_1;
                class Parseable_ParseableFile;
                class Parseable_ParseableNotFound;
                class Parseable_ParseableProperties;
                class Parseable_ParseableReader;
                class Parseable_ParseableResourceURL;
                class Parseable_ParseableResources;
                class Parseable_ParseableString;
                class Parseable_ParseableURL;
                struct Parseable_Relativizer;
                class Parseable_doNotClose_2;
                class Path;
                class PathBuilder;
                class PathParser;
                class PathParser_Element;
                class PropertiesParser;
                class PropertiesParser_fromPathMap_1;
                struct ReplaceableMergeStack;
                class ResolveContext;
                class ResolveMemos;
                class ResolveResult;
                class ResolveSource;
                class ResolveSource_Node;
                class ResolveSource_ResultWithPath;
                class ResolveSource_ValueWithPath;
                class ResolveStatus;
                class SerializedConfigValue;
                class SerializedConfigValue_FieldOut;
                class SerializedConfigValue_SerializedField;
                class SerializedConfigValue_SerializedValueType;
                class SimpleConfig;
                class SimpleConfigDocument;
                class SimpleConfigList;
                class SimpleConfigList_ResolveModifier;
                class SimpleConfigList_iterator_2;
                class SimpleConfigList_relativized_1;
                class SimpleConfigList_wrapListIterator_3;
                class SimpleConfigObject;
                class SimpleConfigObject_RenderComparator;
                class SimpleConfigObject_ResolveModifier;
                class SimpleConfigObject_relativized_1;
                class SimpleConfigOrigin;
                class SimpleConfig_MemoryUnit;
                class SimpleIncludeContext;
                class SimpleIncluder;
                struct SimpleIncluder_NameSource;
                class SimpleIncluder_Proxy;
                class SimpleIncluder_RelativeNameSource;
                class SubstitutionExpression;
                class Token;
                class TokenType;
                class Tokenizer;
                class Tokenizer_ProblemException;
                class Tokenizer_TokenIterator;
                class Tokenizer_TokenIterator_WhitespaceSaver;
                class Tokens;
                class Tokens_Comment;
                class Tokens_Comment_DoubleSlashComment;
                class Tokens_Comment_HashComment;
                class Tokens_IgnoredWhitespace;
                class Tokens_Line;
                class Tokens_Problem;
                class Tokens_Substitution;
                class Tokens_UnquotedText;
                class Tokens_Value;
                struct Unmergeable;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com
