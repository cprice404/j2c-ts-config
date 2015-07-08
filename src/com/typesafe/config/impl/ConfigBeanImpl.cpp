// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigBeanImpl.java
#include <com/typesafe/config/impl/ConfigBeanImpl.hpp>

#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/ConfigException_BadBean.hpp>
#include <com/typesafe/config/ConfigException_NotResolved.hpp>
#include <com/typesafe/config/ConfigException_ValidationFailed.hpp>
#include <com/typesafe/config/ConfigList.hpp>
#include <com/typesafe/config/ConfigMemorySize.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SimpleConfig.hpp>
#include <java/beans/BeanInfo.hpp>
#include <java/beans/FeatureDescriptor.hpp>
#include <java/beans/IntrospectionException.hpp>
#include <java/beans/Introspector.hpp>
#include <java/beans/PropertyDescriptor.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalAccessException.hpp>
#include <java/lang/InstantiationException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>
#include <java/lang/reflect/InvocationTargetException.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/lang/reflect/ParameterizedType.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/time/Duration.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace beans {
typedef ::SubArray< ::java::beans::FeatureDescriptor, ::java::lang::ObjectArray > FeatureDescriptorArray;
typedef ::SubArray< ::java::beans::PropertyDescriptor, FeatureDescriptorArray > PropertyDescriptorArray;
}  // namespace beans

namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
}  // namespace reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
}  // namespace lang
}  // namespace java

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::ConfigBeanImpl::ConfigBeanImpl(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigBeanImpl::ConfigBeanImpl()
    : ConfigBeanImpl(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

/* <T> */java::lang::Object* com::typesafe::config::impl::ConfigBeanImpl::createInternal(::com::typesafe::config::Config* config, ::java::lang::Class* clazz)
{
    clinit();
    if(npc(java_cast< AbstractConfigObject* >(npc((java_cast< SimpleConfig* >(config)))->root()))->resolveStatus() != ResolveStatus::RESOLVED)
        throw new ::com::typesafe::config::ConfigException_NotResolved(u"need to Config#resolve() a config before using it to initialize a bean, see the API docs for Config#resolve()"_j);

    ::java::util::Map* configProps = new ::java::util::HashMap();
    ::java::util::Map* originalNames = new ::java::util::HashMap();
    for (auto _i = npc(npc(npc(config)->root())->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* configProp = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto originalName = java_cast< ::java::lang::String* >(npc(configProp)->getKey());
            auto camelName = ConfigImplUtil::toCamelCase(originalName);
            if(npc(originalNames)->containsKey(camelName) && !npc(originalName)->equals(camelName)) {
            } else {
                npc(configProps)->put(camelName, java_cast< AbstractConfigValue* >(java_cast< ::com::typesafe::config::ConfigValue* >(npc(configProp)->getValue())));
                npc(originalNames)->put(camelName, originalName);
            }
        }
    }
    ::java::beans::BeanInfo* beanInfo = nullptr;
    try {
        beanInfo = ::java::beans::Introspector::getBeanInfo(clazz);
    } catch (::java::beans::IntrospectionException* e) {
        throw new ::com::typesafe::config::ConfigException_BadBean(::java::lang::StringBuilder().append(u"Could not get bean information for class "_j)->append(npc(clazz)->getName())->toString(), e);
    }
    try {
        ::java::util::List* beanProps = new ::java::util::ArrayList();
        for(auto beanProp : *npc(npc(beanInfo)->getPropertyDescriptors())) {
            if(npc(beanProp)->getReadMethod() == nullptr || npc(beanProp)->getWriteMethod() == nullptr) {
                continue;
            }
            npc(beanProps)->add(beanProp);
        }
        ::java::util::List* problems = new ::java::util::ArrayList();
        for (auto _i = npc(beanProps)->iterator(); _i->hasNext(); ) {
            ::java::beans::PropertyDescriptor* beanProp = java_cast< ::java::beans::PropertyDescriptor* >(_i->next());
            {
                auto setter = npc(beanProp)->getWriteMethod();
                auto parameterClass = (*npc(setter)->getParameterTypes())[int32_t(0)];
                auto expectedType = getValueTypeOrNull(parameterClass);
                if(expectedType != nullptr) {
                    auto name = java_cast< ::java::lang::String* >(npc(originalNames)->get(npc(beanProp)->getName()));
                    if(name == nullptr)
                        name = npc(beanProp)->getName();

                    auto path = Path::newKey(name);
                    auto configValue = java_cast< AbstractConfigValue* >(npc(configProps)->get(npc(beanProp)->getName()));
                    if(configValue != nullptr) {
                        SimpleConfig::checkValid(path, expectedType, configValue, problems);
                    } else {
                        SimpleConfig::addMissing(problems, expectedType, path, npc(config)->origin());
                    }
                }
            }
        }
        if(!npc(problems)->isEmpty()) {
            throw new ::com::typesafe::config::ConfigException_ValidationFailed(problems);
        }
        auto bean = java_cast< ::java::lang::Object* >(npc(clazz)->newInstance());
        for (auto _i = npc(beanProps)->iterator(); _i->hasNext(); ) {
            ::java::beans::PropertyDescriptor* beanProp = java_cast< ::java::beans::PropertyDescriptor* >(_i->next());
            {
                auto setter = npc(beanProp)->getWriteMethod();
                auto parameterType = (*npc(setter)->getGenericParameterTypes())[int32_t(0)];
                auto parameterClass = (*npc(setter)->getParameterTypes())[int32_t(0)];
                auto unwrapped = getValue(clazz, parameterType, parameterClass, config, java_cast< ::java::lang::String* >(npc(originalNames)->get(npc(beanProp)->getName())));
                npc(setter)->invoke(bean, new ::java::lang::ObjectArray({unwrapped}));
            }
        }
        return bean;
    } catch (::java::lang::InstantiationException* e) {
        throw new ::com::typesafe::config::ConfigException_BadBean(::java::lang::StringBuilder().append(npc(clazz)->getName())->append(u" needs a public no-args constructor to be used as a bean"_j)->toString(), e);
    } catch (::java::lang::IllegalAccessException* e) {
        throw new ::com::typesafe::config::ConfigException_BadBean(::java::lang::StringBuilder().append(npc(clazz)->getName())->append(u" getters and setters are not accessible, they must be for use as a bean"_j)->toString(), e);
    } catch (::java::lang::reflect::InvocationTargetException* e) {
        throw new ::com::typesafe::config::ConfigException_BadBean(::java::lang::StringBuilder().append(u"Calling bean method on "_j)->append(npc(clazz)->getName())
            ->append(u" caused an exception"_j)->toString(), e);
    }
}

java::lang::Object* com::typesafe::config::impl::ConfigBeanImpl::getValue(::java::lang::Class* beanClass, ::java::lang::reflect::Type* parameterType, ::java::lang::Class* parameterClass, ::com::typesafe::config::Config* config, ::java::lang::String* configPropName)
{
    clinit();
    if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Boolean::class_()) || static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Boolean::TYPE())) {
        return ::java::lang::Boolean::valueOf(npc(config)->getBoolean(configPropName));
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Integer::class_()) || static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Integer::TYPE())) {
        return ::java::lang::Integer::valueOf(npc(config)->getInt(configPropName));
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Double::class_()) || static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Double::TYPE())) {
        return ::java::lang::Double::valueOf(npc(config)->getDouble(configPropName));
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Long::class_()) || static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Long::TYPE())) {
        return ::java::lang::Long::valueOf(npc(config)->getLong(configPropName));
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::String::class_())) {
        return npc(config)->getString(configPropName);
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::time::Duration::class_())) {
        return npc(config)->getDuration(configPropName);
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::com::typesafe::config::ConfigMemorySize::class_())) {
        return npc(config)->getMemorySize(configPropName);
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Object::class_())) {
        return npc(config)->getAnyRef(configPropName);
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::util::List::class_())) {
        return getListValue(beanClass, parameterType, parameterClass, config, configPropName);
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::util::Map::class_())) {
        auto typeArgs = npc((java_cast< ::java::lang::reflect::ParameterizedType* >(parameterType)))->getActualTypeArguments();
        if((*typeArgs)[int32_t(0)] != static_cast< ::java::lang::reflect::Type* >(::java::lang::String::class_()) || (*typeArgs)[int32_t(1)] != static_cast< ::java::lang::reflect::Type* >(::java::lang::Object::class_())) {
            throw new ::com::typesafe::config::ConfigException_BadBean(::java::lang::StringBuilder().append(u"Bean property '"_j)->append(configPropName)
                ->append(u"' of class "_j)
                ->append(npc(beanClass)->getName())
                ->append(u" has unsupported Map<"_j)
                ->append(static_cast< ::java::lang::Object* >((*typeArgs)[int32_t(0)]))
                ->append(u","_j)
                ->append(static_cast< ::java::lang::Object* >((*typeArgs)[int32_t(1)]))
                ->append(u">, only Map<String,Object> is supported right now"_j)->toString());
        }
        return npc(npc(config)->getObject(configPropName))->unwrapped();
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::com::typesafe::config::Config::class_())) {
        return npc(config)->getConfig(configPropName);
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::com::typesafe::config::ConfigObject::class_())) {
        return npc(config)->getObject(configPropName);
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::com::typesafe::config::ConfigValue::class_())) {
        return npc(config)->getValue(configPropName);
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::com::typesafe::config::ConfigList::class_())) {
        return npc(config)->getList(configPropName);
    } else if(hasAtLeastOneBeanProperty(parameterClass)) {
        return java_cast< ::java::lang::Object* >(createInternal(npc(config)->getConfig(configPropName), parameterClass));
    } else {
        throw new ::com::typesafe::config::ConfigException_BadBean(::java::lang::StringBuilder().append(u"Bean property "_j)->append(configPropName)
            ->append(u" of class "_j)
            ->append(npc(beanClass)->getName())
            ->append(u" has unsupported type "_j)
            ->append(static_cast< ::java::lang::Object* >(parameterType))->toString());
    }
}

java::lang::Object* com::typesafe::config::impl::ConfigBeanImpl::getListValue(::java::lang::Class* beanClass, ::java::lang::reflect::Type* parameterType, ::java::lang::Class* parameterClass, ::com::typesafe::config::Config* config, ::java::lang::String* configPropName)
{
    clinit();
    auto elementType = (*npc((java_cast< ::java::lang::reflect::ParameterizedType* >(parameterType)))->getActualTypeArguments())[int32_t(0)];
    if(elementType == static_cast< ::java::lang::reflect::Type* >(::java::lang::Boolean::class_())) {
        return npc(config)->getBooleanList(configPropName);
    } else if(elementType == static_cast< ::java::lang::reflect::Type* >(::java::lang::Integer::class_())) {
        return npc(config)->getIntList(configPropName);
    } else if(elementType == static_cast< ::java::lang::reflect::Type* >(::java::lang::Double::class_())) {
        return npc(config)->getDoubleList(configPropName);
    } else if(elementType == static_cast< ::java::lang::reflect::Type* >(::java::lang::Long::class_())) {
        return npc(config)->getLongList(configPropName);
    } else if(elementType == static_cast< ::java::lang::reflect::Type* >(::java::lang::String::class_())) {
        return npc(config)->getStringList(configPropName);
    } else if(elementType == static_cast< ::java::lang::reflect::Type* >(::java::time::Duration::class_())) {
        return npc(config)->getDurationList(configPropName);
    } else if(elementType == static_cast< ::java::lang::reflect::Type* >(::com::typesafe::config::ConfigMemorySize::class_())) {
        return npc(config)->getMemorySizeList(configPropName);
    } else if(elementType == static_cast< ::java::lang::reflect::Type* >(::java::lang::Object::class_())) {
        return npc(config)->getAnyRefList(configPropName);
    } else if(elementType == static_cast< ::java::lang::reflect::Type* >(::com::typesafe::config::Config::class_())) {
        return npc(config)->getConfigList(configPropName);
    } else if(elementType == static_cast< ::java::lang::reflect::Type* >(::com::typesafe::config::ConfigObject::class_())) {
        return npc(config)->getObjectList(configPropName);
    } else if(elementType == static_cast< ::java::lang::reflect::Type* >(::com::typesafe::config::ConfigValue::class_())) {
        return npc(config)->getList(configPropName);
    } else if(hasAtLeastOneBeanProperty(java_cast< ::java::lang::Class* >(elementType))) {
        ::java::util::List* beanList = new ::java::util::ArrayList();
        auto configList = npc(config)->getConfigList(configPropName);
        for (auto _i = npc(configList)->iterator(); _i->hasNext(); ) {
            ::com::typesafe::config::Config* listMember = java_cast< ::com::typesafe::config::Config* >(_i->next());
            {
                npc(beanList)->add(java_cast< ::java::lang::Object* >(createInternal(listMember, java_cast< ::java::lang::Class* >(elementType))));
            }
        }
        return beanList;
    } else {
        throw new ::com::typesafe::config::ConfigException_BadBean(::java::lang::StringBuilder().append(u"Bean property '"_j)->append(configPropName)
            ->append(u"' of class "_j)
            ->append(npc(beanClass)->getName())
            ->append(u" has unsupported list element type "_j)
            ->append(static_cast< ::java::lang::Object* >(elementType))->toString());
    }
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::ConfigBeanImpl::getValueTypeOrNull(::java::lang::Class* parameterClass)
{
    clinit();
    if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Boolean::class_()) || static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Boolean::TYPE())) {
        return ::com::typesafe::config::ConfigValueType::BOOLEAN;
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Integer::class_()) || static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Integer::TYPE())) {
        return ::com::typesafe::config::ConfigValueType::NUMBER;
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Double::class_()) || static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Double::TYPE())) {
        return ::com::typesafe::config::ConfigValueType::NUMBER;
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Long::class_()) || static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::Long::TYPE())) {
        return ::com::typesafe::config::ConfigValueType::NUMBER;
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::lang::String::class_())) {
        return ::com::typesafe::config::ConfigValueType::STRING;
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::time::Duration::class_())) {
        return nullptr;
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::com::typesafe::config::ConfigMemorySize::class_())) {
        return nullptr;
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::util::List::class_())) {
        return ::com::typesafe::config::ConfigValueType::LIST;
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::java::util::Map::class_())) {
        return ::com::typesafe::config::ConfigValueType::OBJECT;
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::com::typesafe::config::Config::class_())) {
        return ::com::typesafe::config::ConfigValueType::OBJECT;
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::com::typesafe::config::ConfigObject::class_())) {
        return ::com::typesafe::config::ConfigValueType::OBJECT;
    } else if(static_cast< ::java::lang::Object* >(parameterClass) == static_cast< ::java::lang::Object* >(::com::typesafe::config::ConfigList::class_())) {
        return ::com::typesafe::config::ConfigValueType::LIST;
    } else {
        return nullptr;
    }
}

bool com::typesafe::config::impl::ConfigBeanImpl::hasAtLeastOneBeanProperty(::java::lang::Class* clazz)
{
    clinit();
    ::java::beans::BeanInfo* beanInfo = nullptr;
    try {
        beanInfo = ::java::beans::Introspector::getBeanInfo(clazz);
    } catch (::java::beans::IntrospectionException* e) {
        return false;
    }
    for(auto beanProp : *npc(npc(beanInfo)->getPropertyDescriptors())) {
        if(npc(beanProp)->getReadMethod() != nullptr && npc(beanProp)->getWriteMethod() != nullptr) {
            return true;
        }
    }
    return false;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigBeanImpl::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigBeanImpl", 39);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigBeanImpl::getClass0()
{
    return class_();
}

