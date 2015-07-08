// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfig.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/time/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/concurrent/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/impl/MergeableValue.hpp>
#include <java/io/Serializable.hpp>

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

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfig final
    : public virtual ::java::lang::Object
    , public ::com::typesafe::config::Config
    , public MergeableValue
    , public ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1LL) };
    AbstractConfigObject* object {  };
protected:
    void ctor(AbstractConfigObject* object);

public:
    ::com::typesafe::config::ConfigObject* root() override;
    ::com::typesafe::config::ConfigOrigin* origin() override;
    SimpleConfig* resolve() override;
    SimpleConfig* resolve(::com::typesafe::config::ConfigResolveOptions* options) override;
    SimpleConfig* resolveWith(::com::typesafe::config::Config* source) override;
    SimpleConfig* resolveWith(::com::typesafe::config::Config* source, ::com::typesafe::config::ConfigResolveOptions* options) override;

private:
    ::com::typesafe::config::ConfigValue* hasPathPeek(::java::lang::String* pathExpression);

public:
    bool hasPath(::java::lang::String* pathExpression) override;
    bool hasPathOrNull(::java::lang::String* path) override;
    bool isEmpty() override;

private:
    static void findPaths(::java::util::Set* entries, Path* parent, AbstractConfigObject* obj);

public:
    ::java::util::Set* entrySet() override;

private:
    static AbstractConfigValue* throwIfNull(AbstractConfigValue* v, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath);
    static AbstractConfigValue* findKey(AbstractConfigObject* self, ::java::lang::String* key, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath);
    static AbstractConfigValue* findKeyOrNull(AbstractConfigObject* self, ::java::lang::String* key, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath);
    static AbstractConfigValue* findOrNull(AbstractConfigObject* self, Path* path, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath);

public: /* package */
    AbstractConfigValue* find(Path* pathExpression, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath);
    AbstractConfigValue* find(::java::lang::String* pathExpression, ::com::typesafe::config::ConfigValueType* expected);

private:
    AbstractConfigValue* findOrNull(Path* pathExpression, ::com::typesafe::config::ConfigValueType* expected, Path* originalPath);
    AbstractConfigValue* findOrNull(::java::lang::String* pathExpression, ::com::typesafe::config::ConfigValueType* expected);

public:
    ::com::typesafe::config::ConfigValue* getValue(::java::lang::String* path) override;
    bool getIsNull(::java::lang::String* path) override;
    bool getBoolean(::java::lang::String* path) override;

private:
    ConfigNumber* getConfigNumber(::java::lang::String* path);

public:
    ::java::lang::Number* getNumber(::java::lang::String* path) override;
    int32_t getInt(::java::lang::String* path) override;
    int64_t getLong(::java::lang::String* path) override;
    double getDouble(::java::lang::String* path) override;
    ::java::lang::String* getString(::java::lang::String* path) override;
    ::com::typesafe::config::ConfigList* getList(::java::lang::String* path) override;
    ::com::typesafe::config::ConfigObject* getObject(::java::lang::String* path) override;
    SimpleConfig* getConfig(::java::lang::String* path) override;
    ::java::lang::Object* getAnyRef(::java::lang::String* path) override;
    ::java::lang::Long* getBytes(::java::lang::String* path) override;
    ::com::typesafe::config::ConfigMemorySize* getMemorySize(::java::lang::String* path) override;
    ::java::lang::Long* getMilliseconds(::java::lang::String* path) override;
    ::java::lang::Long* getNanoseconds(::java::lang::String* path) override;
    int64_t getDuration(::java::lang::String* path, ::java::util::concurrent::TimeUnit* unit) override;
    ::java::time::Duration* getDuration(::java::lang::String* path) override;

private:
    /* <T> */::java::util::List* getHomogeneousUnwrappedList(::java::lang::String* path, ::com::typesafe::config::ConfigValueType* expected);

public:
    ::java::util::List* getBooleanList(::java::lang::String* path) override;
    ::java::util::List* getNumberList(::java::lang::String* path) override;
    ::java::util::List* getIntList(::java::lang::String* path) override;
    ::java::util::List* getLongList(::java::lang::String* path) override;
    ::java::util::List* getDoubleList(::java::lang::String* path) override;
    ::java::util::List* getStringList(::java::lang::String* path) override;

private:
    /* <T extends ConfigValue> */::java::util::List* getHomogeneousWrappedList(::java::lang::String* path, ::com::typesafe::config::ConfigValueType* expected);

public:
    ::java::util::List* getObjectList(::java::lang::String* path) override;
    ::java::util::List* getConfigList(::java::lang::String* path) override;
    ::java::util::List* getAnyRefList(::java::lang::String* path) override;
    ::java::util::List* getBytesList(::java::lang::String* path) override;
    ::java::util::List* getMemorySizeList(::java::lang::String* path) override;
    ::java::util::List* getDurationList(::java::lang::String* path, ::java::util::concurrent::TimeUnit* unit) override;
    ::java::util::List* getDurationList(::java::lang::String* path) override;
    ::java::util::List* getMillisecondsList(::java::lang::String* path) override;
    ::java::util::List* getNanosecondsList(::java::lang::String* path) override;
    ::com::typesafe::config::ConfigValue* toFallbackValue() override;
    SimpleConfig* withFallback(::com::typesafe::config::ConfigMergeable* other) override;
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;

private:
    static ::java::lang::String* getUnits(::java::lang::String* s);

public:
    static int64_t parseDuration(::java::lang::String* input, ::com::typesafe::config::ConfigOrigin* originForException, ::java::lang::String* pathForException);
    static int64_t parseBytes(::java::lang::String* input, ::com::typesafe::config::ConfigOrigin* originForException, ::java::lang::String* pathForException);

private:
    AbstractConfigValue* peekPath(Path* path);
    static void addProblem(::java::util::List* accumulator, Path* path, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* problem);
    static ::java::lang::String* getDesc(::com::typesafe::config::ConfigValueType* type);
    static ::java::lang::String* getDesc(::com::typesafe::config::ConfigValue* refValue);
    static void addMissing(::java::util::List* accumulator, ::java::lang::String* refDesc, Path* path, ::com::typesafe::config::ConfigOrigin* origin);
    static void addMissing(::java::util::List* accumulator, ::com::typesafe::config::ConfigValue* refValue, Path* path, ::com::typesafe::config::ConfigOrigin* origin);

public: /* package */
    static void addMissing(::java::util::List* accumulator, ::com::typesafe::config::ConfigValueType* refType, Path* path, ::com::typesafe::config::ConfigOrigin* origin);

private:
    static void addWrongType(::java::util::List* accumulator, ::java::lang::String* refDesc, AbstractConfigValue* actual, Path* path);
    static void addWrongType(::java::util::List* accumulator, ::com::typesafe::config::ConfigValue* refValue, AbstractConfigValue* actual, Path* path);
    static void addWrongType(::java::util::List* accumulator, ::com::typesafe::config::ConfigValueType* refType, AbstractConfigValue* actual, Path* path);
    static bool couldBeNull(AbstractConfigValue* v);
    static bool haveCompatibleTypes(::com::typesafe::config::ConfigValue* reference, AbstractConfigValue* value);
    static bool haveCompatibleTypes(::com::typesafe::config::ConfigValueType* referenceType, AbstractConfigValue* value);
    static void checkValidObject(Path* path, AbstractConfigObject* reference, AbstractConfigObject* value, ::java::util::List* accumulator);
    static void checkListCompatibility(Path* path, SimpleConfigList* listRef, SimpleConfigList* listValue, ::java::util::List* accumulator);

public: /* package */
    static void checkValid(Path* path, ::com::typesafe::config::ConfigValueType* referenceType, AbstractConfigValue* value, ::java::util::List* accumulator);

private:
    static void checkValid(Path* path, ::com::typesafe::config::ConfigValue* reference, AbstractConfigValue* value, ::java::util::List* accumulator);

public:
    bool isResolved() override;
    void checkValid(::com::typesafe::config::Config* reference, ::java::lang::StringArray*/*...*/ restrictToPaths) override;
    SimpleConfig* withOnlyPath(::java::lang::String* pathExpression) override;
    SimpleConfig* withoutPath(::java::lang::String* pathExpression) override;
    SimpleConfig* withValue(::java::lang::String* pathExpression, ::com::typesafe::config::ConfigValue* v) override;

public: /* package */
    SimpleConfig* atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key);

public:
    SimpleConfig* atKey(::java::lang::String* key) override;
    ::com::typesafe::config::Config* atPath(::java::lang::String* path) override;

private:
    ::java::lang::Object* writeReplace() /* throws(ObjectStreamException) */;

    // Generated

public: /* package */
    SimpleConfig(AbstractConfigObject* object);
protected:
    SimpleConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleConfig_MemoryUnit;
};
