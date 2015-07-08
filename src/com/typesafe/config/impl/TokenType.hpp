// Generated from /config/src/main/java/com/typesafe/config/impl/TokenType.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
}  // namespace lang

namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
}  // namespace lang
}  // namespace java

namespace com {
namespace typesafe {
namespace config {
namespace impl {
typedef ::SubArray< ::com::typesafe::config::impl::TokenType, ::java::lang::EnumArray > TokenTypeArray;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com

struct default_init_tag;

class com::typesafe::config::impl::TokenType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static TokenType *START;
    static TokenType *END;
    static TokenType *COMMA;
    static TokenType *EQUALS;
    static TokenType *COLON;
    static TokenType *OPEN_CURLY;
    static TokenType *CLOSE_CURLY;
    static TokenType *OPEN_SQUARE;
    static TokenType *CLOSE_SQUARE;
    static TokenType *VALUE;
    static TokenType *NEWLINE;
    static TokenType *UNQUOTED_TEXT;
    static TokenType *IGNORED_WHITESPACE;
    static TokenType *SUBSTITUTION;
    static TokenType *PROBLEM;
    static TokenType *COMMENT;
    static TokenType *PLUS_EQUALS;

    // Generated

public:
    TokenType(::java::lang::String* name, int ordinal);
protected:
    TokenType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static TokenType* valueOf(::java::lang::String* a0);
    static TokenTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
