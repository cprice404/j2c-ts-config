// Generated from /config/src/main/java/com/typesafe/config/ConfigUtil.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

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

class com::typesafe::config::ConfigUtil final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static ::java::lang::String* quoteString(::java::lang::String* s);
    static ::java::lang::String* joinPath(::java::lang::StringArray*/*...*/ elements);
    static ::java::lang::String* joinPath(::java::util::List* elements);
    static ::java::util::List* splitPath(::java::lang::String* path);

    // Generated

private:
    ConfigUtil();
protected:
    ConfigUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
