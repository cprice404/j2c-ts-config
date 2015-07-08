// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImplUtil.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
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

class com::typesafe::config::impl::ConfigImplUtil final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static bool equalsHandlingNull(::java::lang::Object* a, ::java::lang::Object* b);

public:
    static ::java::lang::String* renderJsonString(::java::lang::String* s);

public: /* package */
    static ::java::lang::String* renderStringUnquotedIfPossible(::java::lang::String* s);
    static bool isWhitespace(int32_t codepoint);

public:
    static ::java::lang::String* unicodeTrim(::java::lang::String* s);
    static ::com::typesafe::config::ConfigException* extractInitializerError(::java::lang::ExceptionInInitializerError* e);

public: /* package */
    static ::java::io::File* urlToFile(::java::net::URL* url);

public:
    static ::java::lang::String* joinPath(::java::lang::StringArray*/*...*/ elements);
    static ::java::lang::String* joinPath(::java::util::List* elements);
    static ::java::util::List* splitPath(::java::lang::String* path);
    static ::com::typesafe::config::ConfigOrigin* readOrigin(::java::io::ObjectInputStream* in) /* throws(IOException) */;
    static void writeOrigin(::java::io::ObjectOutputStream* out, ::com::typesafe::config::ConfigOrigin* origin) /* throws(IOException) */;

public: /* package */
    static ::java::lang::String* toCamelCase(::java::lang::String* originalName);

    // Generated

public:
    ConfigImplUtil();
protected:
    ConfigImplUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
