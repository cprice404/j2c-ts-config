// Generated from /config/src/main/java/com/typesafe/config/impl/TokenType.java
#include <com/typesafe/config/impl/TokenType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

com::typesafe::config::impl::TokenType::TokenType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::TokenType::TokenType(::java::lang::String* name, int ordinal)
    : TokenType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::START = new ::com::typesafe::config::impl::TokenType(u"START"_j, 0);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::END = new ::com::typesafe::config::impl::TokenType(u"END"_j, 1);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::COMMA = new ::com::typesafe::config::impl::TokenType(u"COMMA"_j, 2);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::EQUALS = new ::com::typesafe::config::impl::TokenType(u"EQUALS"_j, 3);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::COLON = new ::com::typesafe::config::impl::TokenType(u"COLON"_j, 4);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::OPEN_CURLY = new ::com::typesafe::config::impl::TokenType(u"OPEN_CURLY"_j, 5);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::CLOSE_CURLY = new ::com::typesafe::config::impl::TokenType(u"CLOSE_CURLY"_j, 6);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::OPEN_SQUARE = new ::com::typesafe::config::impl::TokenType(u"OPEN_SQUARE"_j, 7);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::CLOSE_SQUARE = new ::com::typesafe::config::impl::TokenType(u"CLOSE_SQUARE"_j, 8);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::VALUE = new ::com::typesafe::config::impl::TokenType(u"VALUE"_j, 9);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::NEWLINE = new ::com::typesafe::config::impl::TokenType(u"NEWLINE"_j, 10);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::UNQUOTED_TEXT = new ::com::typesafe::config::impl::TokenType(u"UNQUOTED_TEXT"_j, 11);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::IGNORED_WHITESPACE = new ::com::typesafe::config::impl::TokenType(u"IGNORED_WHITESPACE"_j, 12);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::SUBSTITUTION = new ::com::typesafe::config::impl::TokenType(u"SUBSTITUTION"_j, 13);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::PROBLEM = new ::com::typesafe::config::impl::TokenType(u"PROBLEM"_j, 14);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::COMMENT = new ::com::typesafe::config::impl::TokenType(u"COMMENT"_j, 15);
com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::PLUS_EQUALS = new ::com::typesafe::config::impl::TokenType(u"PLUS_EQUALS"_j, 16);
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::TokenType::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.TokenType", 34);
    return c;
}

com::typesafe::config::impl::TokenType* com::typesafe::config::impl::TokenType::valueOf(::java::lang::String* a0)
{
    if(CLOSE_CURLY->toString()->equals(a0))
        return CLOSE_CURLY;
    if(CLOSE_SQUARE->toString()->equals(a0))
        return CLOSE_SQUARE;
    if(COLON->toString()->equals(a0))
        return COLON;
    if(COMMA->toString()->equals(a0))
        return COMMA;
    if(COMMENT->toString()->equals(a0))
        return COMMENT;
    if(END->toString()->equals(a0))
        return END;
    if(EQUALS->toString()->equals(a0))
        return EQUALS;
    if(IGNORED_WHITESPACE->toString()->equals(a0))
        return IGNORED_WHITESPACE;
    if(NEWLINE->toString()->equals(a0))
        return NEWLINE;
    if(OPEN_CURLY->toString()->equals(a0))
        return OPEN_CURLY;
    if(OPEN_SQUARE->toString()->equals(a0))
        return OPEN_SQUARE;
    if(PLUS_EQUALS->toString()->equals(a0))
        return PLUS_EQUALS;
    if(PROBLEM->toString()->equals(a0))
        return PROBLEM;
    if(START->toString()->equals(a0))
        return START;
    if(SUBSTITUTION->toString()->equals(a0))
        return SUBSTITUTION;
    if(UNQUOTED_TEXT->toString()->equals(a0))
        return UNQUOTED_TEXT;
    if(VALUE->toString()->equals(a0))
        return VALUE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::typesafe::config::impl::TokenTypeArray* com::typesafe::config::impl::TokenType::values()
{
    return new com::typesafe::config::impl::TokenTypeArray({
        CLOSE_CURLY,
        CLOSE_SQUARE,
        COLON,
        COMMA,
        COMMENT,
        END,
        EQUALS,
        IGNORED_WHITESPACE,
        NEWLINE,
        OPEN_CURLY,
        OPEN_SQUARE,
        PLUS_EQUALS,
        PROBLEM,
        START,
        SUBSTITUTION,
        UNQUOTED_TEXT,
        VALUE,
    });
}

java::lang::Class* com::typesafe::config::impl::TokenType::getClass0()
{
    return class_();
}

