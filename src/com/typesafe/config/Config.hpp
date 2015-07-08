// Generated from /config/src/main/java/com/typesafe/config/Config.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/time/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/concurrent/fwd-config.hpp>
#include <com/typesafe/config/ConfigMergeable.hpp>

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

struct com::typesafe::config::Config
    : public virtual ConfigMergeable
{
    virtual ConfigObject* root() = 0;
    virtual ConfigOrigin* origin() = 0;
    Config* withFallback(ConfigMergeable* other) = 0;
    virtual Config* resolve() = 0;
    virtual Config* resolve(ConfigResolveOptions* options) = 0;
    virtual bool isResolved() = 0;
    virtual Config* resolveWith(Config* source) = 0;
    virtual Config* resolveWith(Config* source, ConfigResolveOptions* options) = 0;
    virtual void checkValid(Config* reference, ::java::lang::StringArray*/*...*/ restrictToPaths) = 0;
    virtual bool hasPath(::java::lang::String* path) = 0;
    virtual bool hasPathOrNull(::java::lang::String* path) = 0;
    virtual bool isEmpty() = 0;
    virtual ::java::util::Set* entrySet() = 0;
    virtual bool getIsNull(::java::lang::String* path) = 0;
    virtual bool getBoolean(::java::lang::String* path) = 0;
    virtual ::java::lang::Number* getNumber(::java::lang::String* path) = 0;
    virtual int32_t getInt(::java::lang::String* path) = 0;
    virtual int64_t getLong(::java::lang::String* path) = 0;
    virtual double getDouble(::java::lang::String* path) = 0;
    virtual ::java::lang::String* getString(::java::lang::String* path) = 0;
    virtual ConfigObject* getObject(::java::lang::String* path) = 0;
    virtual Config* getConfig(::java::lang::String* path) = 0;
    virtual ::java::lang::Object* getAnyRef(::java::lang::String* path) = 0;
    virtual ConfigValue* getValue(::java::lang::String* path) = 0;
    virtual ::java::lang::Long* getBytes(::java::lang::String* path) = 0;
    virtual ConfigMemorySize* getMemorySize(::java::lang::String* path) = 0;
    virtual ::java::lang::Long* getMilliseconds(::java::lang::String* path) = 0;
    virtual ::java::lang::Long* getNanoseconds(::java::lang::String* path) = 0;
    virtual int64_t getDuration(::java::lang::String* path, ::java::util::concurrent::TimeUnit* unit) = 0;
    virtual ::java::time::Duration* getDuration(::java::lang::String* path) = 0;
    virtual ConfigList* getList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getBooleanList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getNumberList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getIntList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getLongList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getDoubleList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getStringList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getObjectList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getConfigList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getAnyRefList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getBytesList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getMemorySizeList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getMillisecondsList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getNanosecondsList(::java::lang::String* path) = 0;
    virtual ::java::util::List* getDurationList(::java::lang::String* path, ::java::util::concurrent::TimeUnit* unit) = 0;
    virtual ::java::util::List* getDurationList(::java::lang::String* path) = 0;
    virtual Config* withOnlyPath(::java::lang::String* path) = 0;
    virtual Config* withoutPath(::java::lang::String* path) = 0;
    virtual Config* atPath(::java::lang::String* path) = 0;
    virtual Config* atKey(::java::lang::String* key) = 0;
    virtual Config* withValue(::java::lang::String* path, ConfigValue* value) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
