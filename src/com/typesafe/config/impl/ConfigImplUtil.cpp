// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImplUtil.java
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>

#include <com/typesafe/config/ConfigException.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/io/DataOutputStream.hpp>
#include <java/io/File.hpp>
#include <java/io/ObjectInputStream.hpp>
#include <java/io/ObjectOutputStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/ExceptionInInitializerError.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/net/URISyntaxException.hpp>
#include <java/net/URL.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
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
com::typesafe::config::impl::ConfigImplUtil::ConfigImplUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigImplUtil::ConfigImplUtil()
    : ConfigImplUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool com::typesafe::config::impl::ConfigImplUtil::equalsHandlingNull(::java::lang::Object* a, ::java::lang::Object* b)
{
    clinit();
    if(a == nullptr && b != nullptr)
        return false;
    else if(a != nullptr && b == nullptr)
        return false;
    else if(a == b)
        return true;
    else
        return npc(a)->equals(b);
}

java::lang::String* com::typesafe::config::impl::ConfigImplUtil::renderJsonString(::java::lang::String* s)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u'"');
    for (auto i = int32_t(0); i < npc(s)->length(); ++i) {
        auto c = npc(s)->charAt(i);
        switch (c) {
        case u'"':
            npc(sb)->append(u"\\\""_j);
            break;
        case u'\\':
            npc(sb)->append(u"\\\\"_j);
            break;
        case u'\u000a':
            npc(sb)->append(u"\\n"_j);
            break;
        case u'\u0008':
            npc(sb)->append(u"\\b"_j);
            break;
        case u'\u000c':
            npc(sb)->append(u"\\f"_j);
            break;
        case u'\u000d':
            npc(sb)->append(u"\\r"_j);
            break;
        case u'\u0009':
            npc(sb)->append(u"\\t"_j);
            break;
        default:
            if(::java::lang::Character::isISOControl(c))
                npc(sb)->append(::java::lang::String::format(u"\\u%04x"_j, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(static_cast< int32_t >(c)))})));
            else
                npc(sb)->append(c);
        }

    }
    npc(sb)->append(u'"');
    return npc(sb)->toString();
}

java::lang::String* com::typesafe::config::impl::ConfigImplUtil::renderStringUnquotedIfPossible(::java::lang::String* s)
{
    clinit();
    if(npc(s)->length() == 0)
        return renderJsonString(s);

    auto first = npc(s)->codePointAt(0);
    if(::java::lang::Character::isDigit(first) || first == u'-')
        return renderJsonString(s);

    if(npc(s)->startsWith(u"include"_j) || npc(s)->startsWith(u"true"_j) || npc(s)->startsWith(u"false"_j)|| npc(s)->startsWith(u"null"_j)|| npc(s)->contains(u"//"_j))
        return renderJsonString(s);

    for (auto i = int32_t(0); i < npc(s)->length(); ++i) {
        auto c = npc(s)->charAt(i);
        if(!(::java::lang::Character::isLetter(c) || ::java::lang::Character::isDigit(c) || c == u'-'))
            return renderJsonString(s);

    }
    return s;
}

bool com::typesafe::config::impl::ConfigImplUtil::isWhitespace(int32_t codepoint)
{
    clinit();
    switch (codepoint) {
    case u' ':
    case u'\u000a':
    case u'\u00a0':
    case u'\u2007':
    case u'\u202f':
    case u'\ufeff':
        return true;
    default:
        return ::java::lang::Character::isWhitespace(codepoint);
    }

}

java::lang::String* com::typesafe::config::impl::ConfigImplUtil::unicodeTrim(::java::lang::String* s)
{
    clinit();
    auto const length = npc(s)->length();
    if(length == 0)
        return s;

    auto start = int32_t(0);
    while (start < length) {
        auto c = npc(s)->charAt(start);
        if(c == u' ' || c == u'\u000a') {
            start += 1;
        } else {
            auto cp = npc(s)->codePointAt(start);
            if(isWhitespace(cp))
                start += ::java::lang::Character::charCount(cp);
            else
                break;
        }
    }
    auto end = length;
    while (end > start) {
        auto c = npc(s)->charAt(end - int32_t(1));
        if(c == u' ' || c == u'\u000a') {
            --end;
        } else {
            int32_t cp;
            int32_t delta;
            if(::java::lang::Character::isLowSurrogate(c)) {
                cp = npc(s)->codePointAt(end - int32_t(2));
                delta = 2;
            } else {
                cp = npc(s)->codePointAt(end - int32_t(1));
                delta = 1;
            }
            if(isWhitespace(cp))
                end -= delta;
            else
                break;
        }
    }
    return npc(s)->substring(start, end);
}

com::typesafe::config::ConfigException* com::typesafe::config::impl::ConfigImplUtil::extractInitializerError(::java::lang::ExceptionInInitializerError* e)
{
    clinit();
    auto cause = npc(e)->getCause();
    if(cause != nullptr && dynamic_cast< ::com::typesafe::config::ConfigException* >(cause) != nullptr) {
        return java_cast< ::com::typesafe::config::ConfigException* >(cause);
    } else {
        throw e;
    }
}

java::io::File* com::typesafe::config::impl::ConfigImplUtil::urlToFile(::java::net::URL* url)
{
    clinit();
    try {
        return new ::java::io::File(npc(url)->toURI());
    } catch (::java::net::URISyntaxException* e) {
        return new ::java::io::File(npc(url)->getPath());
    } catch (::java::lang::IllegalArgumentException* e) {
        return new ::java::io::File(npc(url)->getPath());
    }
}

java::lang::String* com::typesafe::config::impl::ConfigImplUtil::joinPath(::java::lang::StringArray*/*...*/ elements)
{
    clinit();
    return (new Path(elements))->render();
}

java::lang::String* com::typesafe::config::impl::ConfigImplUtil::joinPath(::java::util::List* elements)
{
    clinit();
    return joinPath(java_cast< ::java::lang::StringArray* >(npc(elements)->toArray_(new ::java::lang::StringArray(int32_t(0)))));
}

java::util::List* com::typesafe::config::impl::ConfigImplUtil::splitPath(::java::lang::String* path)
{
    clinit();
    auto p = Path::newPath(path);
    ::java::util::List* elements = new ::java::util::ArrayList();
    while (p != nullptr) {
        npc(elements)->add(npc(p)->first());
        p = npc(p)->remainder();
    }
    return elements;
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::ConfigImplUtil::readOrigin(::java::io::ObjectInputStream* in) /* throws(IOException) */
{
    clinit();
    return SerializedConfigValue::readOrigin(in, nullptr);
}

void com::typesafe::config::impl::ConfigImplUtil::writeOrigin(::java::io::ObjectOutputStream* out, ::com::typesafe::config::ConfigOrigin* origin) /* throws(IOException) */
{
    clinit();
    SerializedConfigValue::writeOrigin(new ::java::io::DataOutputStream(out), java_cast< SimpleConfigOrigin* >(origin), nullptr);
}

java::lang::String* com::typesafe::config::impl::ConfigImplUtil::toCamelCase(::java::lang::String* originalName)
{
    clinit();
    auto words = npc(originalName)->split(u"-+"_j);
    auto nameBuilder = new ::java::lang::StringBuilder(npc(originalName)->length());
    for(auto word : *npc(words)) {
        if(npc(nameBuilder)->length() == 0) {
            npc(nameBuilder)->append(word);
        } else {
            npc(nameBuilder)->append(npc(npc(word)->substring(0, 1))->toUpperCase());
            npc(nameBuilder)->append(npc(word)->substring(1));
        }
    }
    return npc(nameBuilder)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImplUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigImplUtil", 39);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigImplUtil::getClass0()
{
    return class_();
}

