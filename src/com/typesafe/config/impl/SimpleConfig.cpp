// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfig.java
#include <com/typesafe/config/impl/SimpleConfig.hpp>

#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/ConfigException_BadValue.hpp>
#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_Missing.hpp>
#include <com/typesafe/config/ConfigException_NotResolved.hpp>
#include <com/typesafe/config/ConfigException_Null.hpp>
#include <com/typesafe/config/ConfigException_ValidationFailed.hpp>
#include <com/typesafe/config/ConfigException_ValidationProblem.hpp>
#include <com/typesafe/config/ConfigException_WrongType.hpp>
#include <com/typesafe/config/ConfigList.hpp>
#include <com/typesafe/config/ConfigMemorySize.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/ConfigResolveOptions.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/ConfigNull.hpp>
#include <com/typesafe/config/impl/ConfigNumber.hpp>
#include <com/typesafe/config/impl/ConfigString.hpp>
#include <com/typesafe/config/impl/DefaultTransformer.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/ResolveContext.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfig_MemoryUnit.hpp>
#include <com/typesafe/config/impl/SimpleConfigList.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/math/BigInteger.hpp>
#include <java/time/Duration.hpp>
#include <java/util/AbstractMap_SimpleImmutableEntry.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Set.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
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
com::typesafe::config::impl::SimpleConfig::SimpleConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleConfig::SimpleConfig(AbstractConfigObject* object) 
    : SimpleConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor(object);
}

constexpr int64_t com::typesafe::config::impl::SimpleConfig::serialVersionUID;

void com::typesafe::config::impl::SimpleConfig::ctor(AbstractConfigObject* object)
{
    super::ctor();
    this->object = object;
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleConfig::root()
{
    return object;
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::SimpleConfig::origin()
{
    return npc(object)->origin();
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfig::resolve()
{
    return resolve(::com::typesafe::config::ConfigResolveOptions::defaults());
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfig::resolve(::com::typesafe::config::ConfigResolveOptions* options)
{
    return resolveWith(this, options);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfig::resolveWith(::com::typesafe::config::Config* source)
{
    return resolveWith(source, ::com::typesafe::config::ConfigResolveOptions::defaults());
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfig::resolveWith(::com::typesafe::config::Config* source, ::com::typesafe::config::ConfigResolveOptions* options)
{
    auto resolved = ResolveContext::resolve(object, npc((java_cast< SimpleConfig* >(source)))->object, options);
    if(resolved == static_cast< AbstractConfigValue* >(object))
        return this;
    else
        return new SimpleConfig(java_cast< AbstractConfigObject* >(resolved));
}

com::typesafe::config::ConfigValue* com::typesafe::config::impl::SimpleConfig::hasPathPeek(::java::lang::String* pathExpression)
{
    auto path = Path::newPath(pathExpression);
    ::com::typesafe::config::ConfigValue* peeked;
    try {
        peeked = npc(object)->peekPath(path);
    } catch (::com::typesafe::config::ConfigException_NotResolved* e) {
        throw ConfigImpl::improveNotResolved(path, e);
    }
    return peeked;
}

bool com::typesafe::config::impl::SimpleConfig::hasPath(::java::lang::String* pathExpression)
{
    auto peeked = hasPathPeek(pathExpression);
    return peeked != nullptr && npc(peeked)->valueType() != ::com::typesafe::config::ConfigValueType::NULL_;
}

bool com::typesafe::config::impl::SimpleConfig::hasPathOrNull(::java::lang::String* path)
{
    auto peeked = hasPathPeek(path);
    return peeked != nullptr;
}

bool com::typesafe::config::impl::SimpleConfig::isEmpty()
{
    return npc(object)->isEmpty();
}

void com::typesafe::config::impl::SimpleConfig::findPaths(::java::util::Set* entries, Path* parent, AbstractConfigObject* obj)
{
    clinit();
    for (auto _i = npc(npc(obj)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto elem = java_cast< ::java::lang::String* >(npc(entry)->getKey());
            auto v = java_cast< ::com::typesafe::config::ConfigValue* >(npc(entry)->getValue());
            auto path = Path::newKey(elem);
            if(parent != nullptr)
                path = npc(path)->prepend(parent);

            if(dynamic_cast< AbstractConfigObject* >(v) != nullptr) {
                findPaths(entries, path, java_cast< AbstractConfigObject* >(v));
            } else if(dynamic_cast< ConfigNull* >(v) != nullptr) {
            } else {
                npc(entries)->add(new ::java::util::AbstractMap_SimpleImmutableEntry(npc(path)->render(), v));
            }
        }
    }
}

java::util::Set* com::typesafe::config::impl::SimpleConfig::entrySet()
{
    ::java::util::Set* entries = new ::java::util::HashSet();
    findPaths(entries, nullptr, object);
    return entries;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfig::throwIfNull(AbstractConfigValue* v, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath)
{
    clinit();
    if(npc(v)->valueType() == ::com::typesafe::config::ConfigValueType::NULL_)
        throw new ::com::typesafe::config::ConfigException_Null(npc(v)->origin(), npc(originalPath)->render(), expected != nullptr ? npc(expected)->name() : static_cast< ::java::lang::String* >(nullptr));
    else
        return v;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfig::findKey(AbstractConfigObject* self, ::java::lang::String* key, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath)
{
    clinit();
    return throwIfNull(findKeyOrNull(self, key, expected, originalPath), expected, originalPath);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfig::findKeyOrNull(AbstractConfigObject* self, ::java::lang::String* key, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath)
{
    clinit();
    auto v = npc(self)->peekAssumingResolved(key, originalPath);
    if(v == nullptr)
        throw new ::com::typesafe::config::ConfigException_Missing(npc(originalPath)->render());

    if(expected != nullptr)
        v = DefaultTransformer::transform(v, expected);

    if(expected != nullptr && (npc(v)->valueType() != expected && npc(v)->valueType() != ::com::typesafe::config::ConfigValueType::NULL_))
        throw new ::com::typesafe::config::ConfigException_WrongType(npc(v)->origin(), npc(originalPath)->render(), npc(expected)->name(), npc(npc(v)->valueType())->name());
    else
        return v;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfig::findOrNull(AbstractConfigObject* self, Path* path, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath)
{
    clinit();
    try {
        auto key = npc(path)->first();
        auto next = npc(path)->remainder();
        if(next == nullptr) {
            return findKeyOrNull(self, key, expected, originalPath);
        } else {
            auto o = java_cast< AbstractConfigObject* >(findKey(self, key, ::com::typesafe::config::ConfigValueType::OBJECT, npc(originalPath)->subPath(0, npc(originalPath)->length() - npc(next)->length())));
            /* assert((o != nullptr)) */ ;
            return findOrNull(o, next, expected, originalPath);
        }
    } catch (::com::typesafe::config::ConfigException_NotResolved* e) {
        throw ConfigImpl::improveNotResolved(path, e);
    }
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfig::find(Path* pathExpression, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath)
{
    return throwIfNull(findOrNull(object, pathExpression, expected, originalPath), expected, originalPath);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfig::find(::java::lang::String* pathExpression, ::com::typesafe::config::ConfigValueType* expected)
{
    auto path = Path::newPath(pathExpression);
    return find(path, expected, path);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfig::findOrNull(Path* pathExpression, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath)
{
    return findOrNull(object, pathExpression, expected, originalPath);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfig::findOrNull(::java::lang::String* pathExpression, ::com::typesafe::config::ConfigValueType* expected)
{
    auto path = Path::newPath(pathExpression);
    return findOrNull(path, expected, path);
}

com::typesafe::config::ConfigValue* com::typesafe::config::impl::SimpleConfig::getValue(::java::lang::String* path)
{
    return find(path, nullptr);
}

bool com::typesafe::config::impl::SimpleConfig::getIsNull(::java::lang::String* path)
{
    auto v = findOrNull(path, nullptr);
    return (npc(v)->valueType() == ::com::typesafe::config::ConfigValueType::NULL_);
}

bool com::typesafe::config::impl::SimpleConfig::getBoolean(::java::lang::String* path)
{
    ::com::typesafe::config::ConfigValue* v = find(path, ::com::typesafe::config::ConfigValueType::BOOLEAN);
    return (npc(java_cast< ::java::lang::Boolean* >(npc(v)->unwrapped())))->booleanValue();
}

com::typesafe::config::impl::ConfigNumber* com::typesafe::config::impl::SimpleConfig::getConfigNumber(::java::lang::String* path)
{
    ::com::typesafe::config::ConfigValue* v = find(path, ::com::typesafe::config::ConfigValueType::NUMBER);
    return java_cast< ConfigNumber* >(v);
}

java::lang::Number* com::typesafe::config::impl::SimpleConfig::getNumber(::java::lang::String* path)
{
    return npc(getConfigNumber(path))->unwrapped();
}

int32_t com::typesafe::config::impl::SimpleConfig::getInt(::java::lang::String* path)
{
    auto n = getConfigNumber(path);
    return npc(n)->intValueRangeChecked(path);
}

int64_t com::typesafe::config::impl::SimpleConfig::getLong(::java::lang::String* path)
{
    return npc(getNumber(path))->longValue();
}

double com::typesafe::config::impl::SimpleConfig::getDouble(::java::lang::String* path)
{
    return npc(getNumber(path))->doubleValue();
}

java::lang::String* com::typesafe::config::impl::SimpleConfig::getString(::java::lang::String* path)
{
    ::com::typesafe::config::ConfigValue* v = find(path, ::com::typesafe::config::ConfigValueType::STRING);
    return java_cast< ::java::lang::String* >(npc(v)->unwrapped());
}

com::typesafe::config::ConfigList* com::typesafe::config::impl::SimpleConfig::getList(::java::lang::String* path)
{
    auto v = find(path, ::com::typesafe::config::ConfigValueType::LIST);
    return java_cast< ::com::typesafe::config::ConfigList* >(v);
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleConfig::getObject(::java::lang::String* path)
{
    auto obj = java_cast< AbstractConfigObject* >(find(path, ::com::typesafe::config::ConfigValueType::OBJECT));
    return obj;
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfig::getConfig(::java::lang::String* path)
{
    return java_cast< SimpleConfig* >(npc(java_cast< AbstractConfigObject* >(getObject(path)))->toConfig());
}

java::lang::Object* com::typesafe::config::impl::SimpleConfig::getAnyRef(::java::lang::String* path)
{
    ::com::typesafe::config::ConfigValue* v = find(path, nullptr);
    return npc(v)->unwrapped();
}

java::lang::Long* com::typesafe::config::impl::SimpleConfig::getBytes(::java::lang::String* path)
{
    ::java::lang::Long* size = nullptr;
    try {
        size = ::java::lang::Long::valueOf(getLong(path));
    } catch (::com::typesafe::config::ConfigException_WrongType* e) {
        ::com::typesafe::config::ConfigValue* v = find(path, ::com::typesafe::config::ConfigValueType::STRING);
        size = ::java::lang::Long::valueOf(parseBytes(java_cast< ::java::lang::String* >(npc(v)->unwrapped()), npc(v)->origin(), path));
    }
    return size;
}

com::typesafe::config::ConfigMemorySize* com::typesafe::config::impl::SimpleConfig::getMemorySize(::java::lang::String* path)
{
    return ::com::typesafe::config::ConfigMemorySize::ofBytes((npc(getBytes(path)))->longValue());
}

java::lang::Long* com::typesafe::config::impl::SimpleConfig::getMilliseconds(::java::lang::String* path)
{
    return ::java::lang::Long::valueOf(getDuration(path, ::java::util::concurrent::TimeUnit::MILLISECONDS));
}

java::lang::Long* com::typesafe::config::impl::SimpleConfig::getNanoseconds(::java::lang::String* path)
{
    return ::java::lang::Long::valueOf(getDuration(path, ::java::util::concurrent::TimeUnit::NANOSECONDS));
}

int64_t com::typesafe::config::impl::SimpleConfig::getDuration(::java::lang::String* path, ::java::util::concurrent::TimeUnit* unit)
{
    ::com::typesafe::config::ConfigValue* v = find(path, ::com::typesafe::config::ConfigValueType::STRING);
    auto result = npc(unit)->convert(parseDuration(java_cast< ::java::lang::String* >(npc(v)->unwrapped()), npc(v)->origin(), path), ::java::util::concurrent::TimeUnit::NANOSECONDS);
    return result;
}

java::time::Duration* com::typesafe::config::impl::SimpleConfig::getDuration(::java::lang::String* path)
{
    ::com::typesafe::config::ConfigValue* v = find(path, ::com::typesafe::config::ConfigValueType::STRING);
    auto nanos = parseDuration(java_cast< ::java::lang::String* >(npc(v)->unwrapped()), npc(v)->origin(), path);
    return ::java::time::Duration::ofNanos(nanos);
}

/* <T> */java::util::List* com::typesafe::config::impl::SimpleConfig::getHomogeneousUnwrappedList(::java::lang::String* path, ::com::typesafe::config::ConfigValueType* expected)
{
    ::java::util::List* l = new ::java::util::ArrayList();
    ::java::util::List* list = getList(path);
    for (auto _i = npc(list)->iterator(); _i->hasNext(); ) {
        ::com::typesafe::config::ConfigValue* cv = java_cast< ::com::typesafe::config::ConfigValue* >(_i->next());
        {
            auto v = java_cast< AbstractConfigValue* >(cv);
            if(expected != nullptr) {
                v = DefaultTransformer::transform(v, expected);
            }
            if(npc(v)->valueType() != expected)
                throw new ::com::typesafe::config::ConfigException_WrongType(npc(v)->origin(), path, ::java::lang::StringBuilder().append(u"list of "_j)->append(npc(expected)->name())->toString(), ::java::lang::StringBuilder().append(u"list of "_j)->append(npc(npc(v)->valueType())->name())->toString());

            npc(l)->add(java_cast< ::java::lang::Object* >(npc(v)->unwrapped()));
        }
    }
    return l;
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getBooleanList(::java::lang::String* path)
{
    return getHomogeneousUnwrappedList(path, ::com::typesafe::config::ConfigValueType::BOOLEAN);
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getNumberList(::java::lang::String* path)
{
    return getHomogeneousUnwrappedList(path, ::com::typesafe::config::ConfigValueType::NUMBER);
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getIntList(::java::lang::String* path)
{
    ::java::util::List* l = new ::java::util::ArrayList();
    auto numbers = getHomogeneousWrappedList(path, ::com::typesafe::config::ConfigValueType::NUMBER);
    for (auto _i = npc(numbers)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            npc(l)->add(::java::lang::Integer::valueOf(npc((java_cast< ConfigNumber* >(v)))->intValueRangeChecked(path)));
        }
    }
    return l;
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getLongList(::java::lang::String* path)
{
    ::java::util::List* l = new ::java::util::ArrayList();
    auto numbers = getNumberList(path);
    for (auto _i = npc(numbers)->iterator(); _i->hasNext(); ) {
        ::java::lang::Number* n = java_cast< ::java::lang::Number* >(_i->next());
        {
            npc(l)->add(::java::lang::Long::valueOf(npc(n)->longValue()));
        }
    }
    return l;
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getDoubleList(::java::lang::String* path)
{
    ::java::util::List* l = new ::java::util::ArrayList();
    auto numbers = getNumberList(path);
    for (auto _i = npc(numbers)->iterator(); _i->hasNext(); ) {
        ::java::lang::Number* n = java_cast< ::java::lang::Number* >(_i->next());
        {
            npc(l)->add(::java::lang::Double::valueOf(npc(n)->doubleValue()));
        }
    }
    return l;
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getStringList(::java::lang::String* path)
{
    return getHomogeneousUnwrappedList(path, ::com::typesafe::config::ConfigValueType::STRING);
}

/* <T extends ConfigValue> */java::util::List* com::typesafe::config::impl::SimpleConfig::getHomogeneousWrappedList(::java::lang::String* path, ::com::typesafe::config::ConfigValueType* expected)
{
    ::java::util::List* l = new ::java::util::ArrayList();
    ::java::util::List* list = getList(path);
    for (auto _i = npc(list)->iterator(); _i->hasNext(); ) {
        ::com::typesafe::config::ConfigValue* cv = java_cast< ::com::typesafe::config::ConfigValue* >(_i->next());
        {
            auto v = java_cast< AbstractConfigValue* >(cv);
            if(expected != nullptr) {
                v = DefaultTransformer::transform(v, expected);
            }
            if(npc(v)->valueType() != expected)
                throw new ::com::typesafe::config::ConfigException_WrongType(npc(v)->origin(), path, ::java::lang::StringBuilder().append(u"list of "_j)->append(npc(expected)->name())->toString(), ::java::lang::StringBuilder().append(u"list of "_j)->append(npc(npc(v)->valueType())->name())->toString());

            npc(l)->add(java_cast< ::com::typesafe::config::ConfigValue* >(v));
        }
    }
    return l;
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getObjectList(::java::lang::String* path)
{
    return getHomogeneousWrappedList(path, ::com::typesafe::config::ConfigValueType::OBJECT);
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getConfigList(::java::lang::String* path)
{
    auto objects = getObjectList(path);
    ::java::util::List* l = new ::java::util::ArrayList();
    for (auto _i = npc(objects)->iterator(); _i->hasNext(); ) {
        ::com::typesafe::config::ConfigObject* o = java_cast< ::com::typesafe::config::ConfigObject* >(_i->next());
        {
            npc(l)->add(npc(o)->toConfig());
        }
    }
    return l;
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getAnyRefList(::java::lang::String* path)
{
    ::java::util::List* l = new ::java::util::ArrayList();
    ::java::util::List* list = getList(path);
    for (auto _i = npc(list)->iterator(); _i->hasNext(); ) {
        ::com::typesafe::config::ConfigValue* v = java_cast< ::com::typesafe::config::ConfigValue* >(_i->next());
        {
            npc(l)->add(npc(v)->unwrapped());
        }
    }
    return l;
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getBytesList(::java::lang::String* path)
{
    ::java::util::List* l = new ::java::util::ArrayList();
    ::java::util::List* list = getList(path);
    for (auto _i = npc(list)->iterator(); _i->hasNext(); ) {
        ::com::typesafe::config::ConfigValue* v = java_cast< ::com::typesafe::config::ConfigValue* >(_i->next());
        {
            if(npc(v)->valueType() == ::com::typesafe::config::ConfigValueType::NUMBER) {
                npc(l)->add(::java::lang::Long::valueOf(npc((java_cast< ::java::lang::Number* >(npc(v)->unwrapped())))->longValue()));
            } else if(npc(v)->valueType() == ::com::typesafe::config::ConfigValueType::STRING) {
                auto s = java_cast< ::java::lang::String* >(npc(v)->unwrapped());
                ::java::lang::Long* n = ::java::lang::Long::valueOf(parseBytes(s, npc(v)->origin(), path));
                npc(l)->add(n);
            } else {
                throw new ::com::typesafe::config::ConfigException_WrongType(npc(v)->origin(), path, u"memory size string or number of bytes"_j, npc(npc(v)->valueType())->name());
            }
        }
    }
    return l;
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getMemorySizeList(::java::lang::String* path)
{
    auto list = getBytesList(path);
    ::java::util::List* builder = new ::java::util::ArrayList();
    for (auto _i = npc(list)->iterator(); _i->hasNext(); ) {
        ::java::lang::Long* v = java_cast< ::java::lang::Long* >(_i->next());
        {
            npc(builder)->add(::com::typesafe::config::ConfigMemorySize::ofBytes((npc(v))->longValue()));
        }
    }
    return builder;
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getDurationList(::java::lang::String* path, ::java::util::concurrent::TimeUnit* unit)
{
    ::java::util::List* l = new ::java::util::ArrayList();
    ::java::util::List* list = getList(path);
    for (auto _i = npc(list)->iterator(); _i->hasNext(); ) {
        ::com::typesafe::config::ConfigValue* v = java_cast< ::com::typesafe::config::ConfigValue* >(_i->next());
        {
            if(npc(v)->valueType() == ::com::typesafe::config::ConfigValueType::NUMBER) {
                ::java::lang::Long* n = ::java::lang::Long::valueOf(npc(unit)->convert(npc((java_cast< ::java::lang::Number* >(npc(v)->unwrapped())))->longValue(), ::java::util::concurrent::TimeUnit::MILLISECONDS));
                npc(l)->add(n);
            } else if(npc(v)->valueType() == ::com::typesafe::config::ConfigValueType::STRING) {
                auto s = java_cast< ::java::lang::String* >(npc(v)->unwrapped());
                ::java::lang::Long* n = ::java::lang::Long::valueOf(npc(unit)->convert(parseDuration(s, npc(v)->origin(), path), ::java::util::concurrent::TimeUnit::NANOSECONDS));
                npc(l)->add(n);
            } else {
                throw new ::com::typesafe::config::ConfigException_WrongType(npc(v)->origin(), path, u"duration string or number of milliseconds"_j, npc(npc(v)->valueType())->name());
            }
        }
    }
    return l;
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getDurationList(::java::lang::String* path)
{
    auto l = getDurationList(path, ::java::util::concurrent::TimeUnit::NANOSECONDS);
    ::java::util::List* builder = new ::java::util::ArrayList(npc(l)->size());
    for (auto _i = npc(l)->iterator(); _i->hasNext(); ) {
        ::java::lang::Long* value = java_cast< ::java::lang::Long* >(_i->next());
        {
            npc(builder)->add(::java::time::Duration::ofNanos((npc(value))->longValue()));
        }
    }
    return builder;
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getMillisecondsList(::java::lang::String* path)
{
    return getDurationList(path, ::java::util::concurrent::TimeUnit::MILLISECONDS);
}

java::util::List* com::typesafe::config::impl::SimpleConfig::getNanosecondsList(::java::lang::String* path)
{
    return getDurationList(path, ::java::util::concurrent::TimeUnit::NANOSECONDS);
}

com::typesafe::config::ConfigValue* com::typesafe::config::impl::SimpleConfig::toFallbackValue()
{
    return object;
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfig::withFallback(::com::typesafe::config::ConfigMergeable* other)
{
    return java_cast< SimpleConfig* >(npc(npc(object)->withFallback(other))->toConfig());
}

bool com::typesafe::config::impl::SimpleConfig::equals(::java::lang::Object* other)
{
    if(dynamic_cast< SimpleConfig* >(other) != nullptr) {
        return npc(object)->equals(npc((java_cast< SimpleConfig* >(other)))->object);
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::SimpleConfig::hashCode()
{
    return int32_t(41) * npc(object)->hashCode();
}

java::lang::String* com::typesafe::config::impl::SimpleConfig::toString()
{
    return ::java::lang::StringBuilder().append(u"Config("_j)->append(npc(object)->toString())
        ->append(u")"_j)->toString();
}

java::lang::String* com::typesafe::config::impl::SimpleConfig::getUnits(::java::lang::String* s)
{
    clinit();
    auto i = npc(s)->length() - int32_t(1);
    while (i >= 0) {
        auto c = npc(s)->charAt(i);
        if(!::java::lang::Character::isLetter(c))
            break;

        i -= 1;
    }
    return npc(s)->substring(i + int32_t(1));
}

int64_t com::typesafe::config::impl::SimpleConfig::parseDuration(::java::lang::String* input, ::com::typesafe::config::ConfigOrigin* originForException, ::java::lang::String* pathForException)
{
    clinit();
    auto s = ConfigImplUtil::unicodeTrim(input);
    auto originalUnitString = getUnits(s);
    auto unitString = originalUnitString;
    auto numberString = ConfigImplUtil::unicodeTrim(npc(s)->substring(0, npc(s)->length() - npc(unitString)->length()));
    ::java::util::concurrent::TimeUnit* units = nullptr;
    if(npc(numberString)->length() == 0)
        throw new ::com::typesafe::config::ConfigException_BadValue(originForException, pathForException, ::java::lang::StringBuilder().append(u"No number in duration value '"_j)->append(input)
            ->append(u"'"_j)->toString());

    if(npc(unitString)->length() > 2 && !npc(unitString)->endsWith(u"s"_j))
        unitString = ::java::lang::StringBuilder().append(unitString)->append(u"s"_j)->toString();

    if(npc(unitString)->equals(u""_j) || npc(unitString)->equals(u"ms"_j) || npc(unitString)->equals(u"millis"_j)|| npc(unitString)->equals(u"milliseconds"_j)) {
        units = ::java::util::concurrent::TimeUnit::MILLISECONDS;
    } else if(npc(unitString)->equals(u"us"_j) || npc(unitString)->equals(u"micros"_j) || npc(unitString)->equals(u"microseconds"_j)) {
        units = ::java::util::concurrent::TimeUnit::MICROSECONDS;
    } else if(npc(unitString)->equals(u"ns"_j) || npc(unitString)->equals(u"nanos"_j) || npc(unitString)->equals(u"nanoseconds"_j)) {
        units = ::java::util::concurrent::TimeUnit::NANOSECONDS;
    } else if(npc(unitString)->equals(u"d"_j) || npc(unitString)->equals(u"days"_j)) {
        units = ::java::util::concurrent::TimeUnit::DAYS;
    } else if(npc(unitString)->equals(u"h"_j) || npc(unitString)->equals(u"hours"_j)) {
        units = ::java::util::concurrent::TimeUnit::HOURS;
    } else if(npc(unitString)->equals(u"s"_j) || npc(unitString)->equals(u"seconds"_j)) {
        units = ::java::util::concurrent::TimeUnit::SECONDS;
    } else if(npc(unitString)->equals(u"m"_j) || npc(unitString)->equals(u"minutes"_j)) {
        units = ::java::util::concurrent::TimeUnit::MINUTES;
    } else {
        throw new ::com::typesafe::config::ConfigException_BadValue(originForException, pathForException, ::java::lang::StringBuilder().append(u"Could not parse time unit '"_j)->append(originalUnitString)
            ->append(u"' (try ns, us, ms, s, m, h, d)"_j)->toString());
    }
    try {
        if(npc(numberString)->matches(u"[0-9]+"_j)) {
            return npc(units)->toNanos(::java::lang::Long::parseLong(numberString));
        } else {
            auto nanosInUnit = npc(units)->toNanos(1);
            return static_cast< int64_t >((::java::lang::Double::parseDouble(numberString) * nanosInUnit));
        }
    } catch (::java::lang::NumberFormatException* e) {
        throw new ::com::typesafe::config::ConfigException_BadValue(originForException, pathForException, ::java::lang::StringBuilder().append(u"Could not parse duration number '"_j)->append(numberString)
            ->append(u"'"_j)->toString());
    }
}

int64_t com::typesafe::config::impl::SimpleConfig::parseBytes(::java::lang::String* input, ::com::typesafe::config::ConfigOrigin* originForException, ::java::lang::String* pathForException)
{
    clinit();
    auto s = ConfigImplUtil::unicodeTrim(input);
    auto unitString = getUnits(s);
    auto numberString = ConfigImplUtil::unicodeTrim(npc(s)->substring(0, npc(s)->length() - npc(unitString)->length()));
    if(npc(numberString)->length() == 0)
        throw new ::com::typesafe::config::ConfigException_BadValue(originForException, pathForException, ::java::lang::StringBuilder().append(u"No number in size-in-bytes value '"_j)->append(input)
            ->append(u"'"_j)->toString());

    auto units = SimpleConfig_MemoryUnit::parseUnit(unitString);
    if(units == nullptr) {
        throw new ::com::typesafe::config::ConfigException_BadValue(originForException, pathForException, ::java::lang::StringBuilder().append(u"Could not parse size-in-bytes unit '"_j)->append(unitString)
            ->append(u"' (try k, K, kB, KiB, kilobytes, kibibytes)"_j)->toString());
    }
    try {
        ::java::math::BigInteger* result;
        if(npc(numberString)->matches(u"[0-9]+"_j)) {
            result = npc(npc(units)->bytes)->multiply(new ::java::math::BigInteger(numberString));
        } else {
            auto resultDecimal = (new ::java::math::BigDecimal(npc(units)->bytes))->multiply(new ::java::math::BigDecimal(numberString));
            result = npc(resultDecimal)->toBigInteger();
        }
        if(npc(result)->bitLength() < 64)
            return npc(result)->longValue();
        else
            throw new ::com::typesafe::config::ConfigException_BadValue(originForException, pathForException, ::java::lang::StringBuilder().append(u"size-in-bytes value is out of range for a 64-bit long: '"_j)->append(input)
                ->append(u"'"_j)->toString());
    } catch (::java::lang::NumberFormatException* e) {
        throw new ::com::typesafe::config::ConfigException_BadValue(originForException, pathForException, ::java::lang::StringBuilder().append(u"Could not parse size-in-bytes number '"_j)->append(numberString)
            ->append(u"'"_j)->toString());
    }
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfig::peekPath(Path* path)
{
    return npc(java_cast< AbstractConfigObject* >(root()))->peekPath(path);
}

void com::typesafe::config::impl::SimpleConfig::addProblem(::java::util::List* accumulator, Path* path, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* problem)
{
    clinit();
    npc(accumulator)->add(new ::com::typesafe::config::ConfigException_ValidationProblem(npc(path)->render(), origin, problem));
}

java::lang::String* com::typesafe::config::impl::SimpleConfig::getDesc(::com::typesafe::config::ConfigValueType* type)
{
    clinit();
    return npc(npc(type)->name())->toLowerCase();
}

java::lang::String* com::typesafe::config::impl::SimpleConfig::getDesc(::com::typesafe::config::ConfigValue* refValue)
{
    clinit();
    if(dynamic_cast< AbstractConfigObject* >(refValue) != nullptr) {
        auto obj = java_cast< AbstractConfigObject* >(refValue);
        if(!npc(obj)->isEmpty())
            return ::java::lang::StringBuilder().append(u"object with keys "_j)->append(static_cast< ::java::lang::Object* >(npc(obj)->keySet()))->toString();
        else
            return getDesc(npc(refValue)->valueType());
    } else {
        return getDesc(npc(refValue)->valueType());
    }
}

void com::typesafe::config::impl::SimpleConfig::addMissing(::java::util::List* accumulator, ::java::lang::String* refDesc, Path* path, ::com::typesafe::config::ConfigOrigin* origin)
{
    clinit();
    addProblem(accumulator, path, origin, ::java::lang::StringBuilder().append(u"No setting at '"_j)->append(npc(path)->render())
        ->append(u"', expecting: "_j)
        ->append(refDesc)->toString());
}

void com::typesafe::config::impl::SimpleConfig::addMissing(::java::util::List* accumulator, ::com::typesafe::config::ConfigValue* refValue, Path* path, ::com::typesafe::config::ConfigOrigin* origin)
{
    clinit();
    addMissing(accumulator, getDesc(refValue), path, origin);
}

void com::typesafe::config::impl::SimpleConfig::addMissing(::java::util::List* accumulator, ::com::typesafe::config::ConfigValueType* refType, Path* path, ::com::typesafe::config::ConfigOrigin* origin)
{
    clinit();
    addMissing(accumulator, getDesc(refType), path, origin);
}

void com::typesafe::config::impl::SimpleConfig::addWrongType(::java::util::List* accumulator, ::java::lang::String* refDesc, AbstractConfigValue* actual, Path* path)
{
    clinit();
    addProblem(accumulator, path, npc(actual)->origin(), ::java::lang::StringBuilder().append(u"Wrong value type at '"_j)->append(npc(path)->render())
        ->append(u"', expecting: "_j)
        ->append(refDesc)
        ->append(u" but got: "_j)
        ->append(getDesc(static_cast< ::com::typesafe::config::ConfigValue* >(actual)))->toString());
}

void com::typesafe::config::impl::SimpleConfig::addWrongType(::java::util::List* accumulator, ::com::typesafe::config::ConfigValue* refValue, AbstractConfigValue* actual, Path* path)
{
    clinit();
    addWrongType(accumulator, getDesc(refValue), actual, path);
}

void com::typesafe::config::impl::SimpleConfig::addWrongType(::java::util::List* accumulator, ::com::typesafe::config::ConfigValueType* refType, AbstractConfigValue* actual, Path* path)
{
    clinit();
    addWrongType(accumulator, getDesc(refType), actual, path);
}

bool com::typesafe::config::impl::SimpleConfig::couldBeNull(AbstractConfigValue* v)
{
    clinit();
    return npc(DefaultTransformer::transform(v, ::com::typesafe::config::ConfigValueType::NULL_))->valueType() == ::com::typesafe::config::ConfigValueType::NULL_;
}

bool com::typesafe::config::impl::SimpleConfig::haveCompatibleTypes(::com::typesafe::config::ConfigValue* reference, AbstractConfigValue* value)
{
    clinit();
    if(couldBeNull(java_cast< AbstractConfigValue* >(reference))) {
        return true;
    } else {
        return haveCompatibleTypes(npc(reference)->valueType(), value);
    }
}

bool com::typesafe::config::impl::SimpleConfig::haveCompatibleTypes(::com::typesafe::config::ConfigValueType* referenceType, AbstractConfigValue* value)
{
    clinit();
    if(referenceType == ::com::typesafe::config::ConfigValueType::NULL_ || couldBeNull(value)) {
        return true;
    } else if(referenceType == ::com::typesafe::config::ConfigValueType::OBJECT) {
        if(dynamic_cast< AbstractConfigObject* >(value) != nullptr) {
            return true;
        } else {
            return false;
        }
    } else if(referenceType == ::com::typesafe::config::ConfigValueType::LIST) {
        if(dynamic_cast< SimpleConfigList* >(value) != nullptr || dynamic_cast< SimpleConfigObject* >(value) != nullptr) {
            return true;
        } else {
            return false;
        }
    } else if(referenceType == ::com::typesafe::config::ConfigValueType::STRING) {
        return true;
    } else if(dynamic_cast< ConfigString* >(value) != nullptr) {
        return true;
    } else {
        if(referenceType == npc(value)->valueType()) {
            return true;
        } else {
            return false;
        }
    }
}

void com::typesafe::config::impl::SimpleConfig::checkValidObject(Path* path, AbstractConfigObject* reference, AbstractConfigObject* value, ::java::util::List* accumulator)
{
    clinit();
    for (auto _i = npc(npc(reference)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto key = java_cast< ::java::lang::String* >(npc(entry)->getKey());
            Path* childPath;
            if(path != nullptr)
                childPath = npc(Path::newKey(key))->prepend(path);
            else
                childPath = Path::newKey(key);
            auto v = npc(value)->get(key);
            if(v == nullptr) {
                addMissing(accumulator, java_cast< ::com::typesafe::config::ConfigValue* >(npc(entry)->getValue()), childPath, static_cast< ::com::typesafe::config::ConfigOrigin* >(npc(value)->origin()));
            } else {
                checkValid(childPath, java_cast< ::com::typesafe::config::ConfigValue* >(npc(entry)->getValue()), v, accumulator);
            }
        }
    }
}

void com::typesafe::config::impl::SimpleConfig::checkListCompatibility(Path* path, SimpleConfigList* listRef, SimpleConfigList* listValue, ::java::util::List* accumulator)
{
    clinit();
    if(npc(listRef)->isEmpty() || npc(listValue)->isEmpty()) {
    } else {
        auto refElement = npc(listRef)->get(0);
        for (auto _i = npc(listValue)->iterator(); _i->hasNext(); ) {
            ::com::typesafe::config::ConfigValue* elem = java_cast< ::com::typesafe::config::ConfigValue* >(_i->next());
            {
                auto e = java_cast< AbstractConfigValue* >(elem);
                if(!haveCompatibleTypes(static_cast< ::com::typesafe::config::ConfigValue* >(refElement), e)) {
                    addProblem(accumulator, path, npc(e)->origin(), ::java::lang::StringBuilder().append(u"List at '"_j)->append(npc(path)->render())
                        ->append(u"' contains wrong value type, expecting list of "_j)
                        ->append(getDesc(static_cast< ::com::typesafe::config::ConfigValue* >(refElement)))
                        ->append(u" but got element of type "_j)
                        ->append(getDesc(static_cast< ::com::typesafe::config::ConfigValue* >(e)))->toString());
                    break;
                }
            }
        }
    }
}

void com::typesafe::config::impl::SimpleConfig::checkValid(Path* path, ::com::typesafe::config::ConfigValueType* referenceType, AbstractConfigValue* value, ::java::util::List* accumulator)
{
    clinit();
    if(haveCompatibleTypes(referenceType, value)) {
        if(referenceType == ::com::typesafe::config::ConfigValueType::LIST && dynamic_cast< SimpleConfigObject* >(value) != nullptr) {
            auto listValue = DefaultTransformer::transform(value, ::com::typesafe::config::ConfigValueType::LIST);
            if(!(dynamic_cast< SimpleConfigList* >(listValue) != nullptr))
                addWrongType(accumulator, referenceType, value, path);

        }
    } else {
        addWrongType(accumulator, referenceType, value, path);
    }
}

void com::typesafe::config::impl::SimpleConfig::checkValid(Path* path, ::com::typesafe::config::ConfigValue* reference, AbstractConfigValue* value, ::java::util::List* accumulator)
{
    clinit();
    if(haveCompatibleTypes(reference, value)) {
        if(dynamic_cast< AbstractConfigObject* >(reference) != nullptr && dynamic_cast< AbstractConfigObject* >(value) != nullptr) {
            checkValidObject(path, java_cast< AbstractConfigObject* >(reference), java_cast< AbstractConfigObject* >(value), accumulator);
        } else if(dynamic_cast< SimpleConfigList* >(reference) != nullptr && dynamic_cast< SimpleConfigList* >(value) != nullptr) {
            auto listRef = java_cast< SimpleConfigList* >(reference);
            auto listValue = java_cast< SimpleConfigList* >(value);
            checkListCompatibility(path, listRef, listValue, accumulator);
        } else if(dynamic_cast< SimpleConfigList* >(reference) != nullptr && dynamic_cast< SimpleConfigObject* >(value) != nullptr) {
            auto listRef = java_cast< SimpleConfigList* >(reference);
            auto listValue = DefaultTransformer::transform(value, ::com::typesafe::config::ConfigValueType::LIST);
            if(dynamic_cast< SimpleConfigList* >(listValue) != nullptr)
                checkListCompatibility(path, listRef, java_cast< SimpleConfigList* >(listValue), accumulator);
            else
                addWrongType(accumulator, reference, value, path);
        }
    } else {
        addWrongType(accumulator, reference, value, path);
    }
}

bool com::typesafe::config::impl::SimpleConfig::isResolved()
{
    return npc(java_cast< AbstractConfigObject* >(root()))->resolveStatus() == ResolveStatus::RESOLVED;
}

void com::typesafe::config::impl::SimpleConfig::checkValid(::com::typesafe::config::Config* reference, ::java::lang::StringArray*/*...*/ restrictToPaths)
{
    auto ref = java_cast< SimpleConfig* >(reference);
    if(npc(java_cast< AbstractConfigObject* >(npc(ref)->root()))->resolveStatus() != ResolveStatus::RESOLVED)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"do not call checkValid() with an unresolved reference config, call Config#resolve(), see Config#resolve() API docs"_j);

    if(npc(java_cast< AbstractConfigObject* >(root()))->resolveStatus() != ResolveStatus::RESOLVED)
        throw new ::com::typesafe::config::ConfigException_NotResolved(u"need to Config#resolve() each config before using it, see the API docs for Config#resolve()"_j);

    ::java::util::List* problems = new ::java::util::ArrayList();
    if(npc(restrictToPaths)->length == 0) {
        checkValidObject(nullptr, java_cast< AbstractConfigObject* >(npc(ref)->root()), java_cast< AbstractConfigObject* >(root()), problems);
    } else {
        for(auto p : *npc(restrictToPaths)) {
            auto path = Path::newPath(p);
            auto refValue = npc(ref)->peekPath(path);
            if(refValue != nullptr) {
                auto child = peekPath(path);
                if(child != nullptr) {
                    checkValid(path, static_cast< ::com::typesafe::config::ConfigValue* >(refValue), child, problems);
                } else {
                    addMissing(problems, static_cast< ::com::typesafe::config::ConfigValue* >(refValue), path, origin());
                }
            }
        }
    }
    if(!npc(problems)->isEmpty()) {
        throw new ::com::typesafe::config::ConfigException_ValidationFailed(problems);
    }
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfig::withOnlyPath(::java::lang::String* pathExpression)
{
    auto path = Path::newPath(pathExpression);
    return new SimpleConfig(npc(java_cast< AbstractConfigObject* >(root()))->withOnlyPath(path));
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfig::withoutPath(::java::lang::String* pathExpression)
{
    auto path = Path::newPath(pathExpression);
    return new SimpleConfig(npc(java_cast< AbstractConfigObject* >(root()))->withoutPath(path));
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfig::withValue(::java::lang::String* pathExpression, ::com::typesafe::config::ConfigValue* v)
{
    auto path = Path::newPath(pathExpression);
    return new SimpleConfig(npc(java_cast< AbstractConfigObject* >(root()))->withValue(path, v));
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfig::atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key)
{
    return npc(java_cast< AbstractConfigObject* >(root()))->atKey(origin, key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfig::atKey(::java::lang::String* key)
{
    return java_cast< SimpleConfig* >(npc(java_cast< AbstractConfigObject* >(root()))->atKey(key));
}

com::typesafe::config::Config* com::typesafe::config::impl::SimpleConfig::atPath(::java::lang::String* path)
{
    return java_cast< SimpleConfig* >(npc(java_cast< AbstractConfigObject* >(root()))->atPath(path));
}

java::lang::Object* com::typesafe::config::impl::SimpleConfig::writeReplace() /* throws(ObjectStreamException) */
{
    return new SerializedConfigValue(static_cast< ::com::typesafe::config::Config* >(this));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleConfig", 37);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleConfig::getClass0()
{
    return class_();
}

