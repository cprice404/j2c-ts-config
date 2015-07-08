// Generated from /config/src/main/java/com/typesafe/config/impl/Path.java
#include <com/typesafe/config/impl/Path.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/PathBuilder.hpp>
#include <com/typesafe/config/impl/PathParser.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Iterator.hpp>
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
com::typesafe::config::impl::Path::Path(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Path::Path(::java::lang::String* first, Path* remainder) 
    : Path(*static_cast< ::default_init_tag* >(0))
{
    ctor(first,remainder);
}

com::typesafe::config::impl::Path::Path(::java::lang::StringArray*/*...*/ elements) 
    : Path(*static_cast< ::default_init_tag* >(0))
{
    ctor(elements);
}

com::typesafe::config::impl::Path::Path(::java::util::List* pathsToConcat) 
    : Path(*static_cast< ::default_init_tag* >(0))
{
    ctor(pathsToConcat);
}

com::typesafe::config::impl::Path::Path(::java::util::Iterator* i) 
    : Path(*static_cast< ::default_init_tag* >(0))
{
    ctor(i);
}

void com::typesafe::config::impl::Path::ctor(::java::lang::String* first, Path* remainder)
{
    super::ctor();
    this->first_ = first;
    this->remainder_ = remainder;
}

void com::typesafe::config::impl::Path::ctor(::java::lang::StringArray*/*...*/ elements)
{
    super::ctor();
    if(npc(elements)->length == 0)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"empty path"_j);

    this->first_ = (*elements)[int32_t(0)];
    if(npc(elements)->length > 1) {
        auto pb = new PathBuilder();
        for (auto i = int32_t(1); i < npc(elements)->length; ++i) {
            npc(pb)->appendKey((*elements)[i]);
        }
        this->remainder_ = npc(pb)->result();
    } else {
        this->remainder_ = nullptr;
    }
}

void com::typesafe::config::impl::Path::ctor(::java::util::List* pathsToConcat)
{
    ctor(npc(pathsToConcat)->iterator());
}

void com::typesafe::config::impl::Path::ctor(::java::util::Iterator* i)
{
    super::ctor();
    if(!npc(i)->hasNext())
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"empty path"_j);

    auto firstPath = java_cast< Path* >(npc(i)->next());
    this->first_ = npc(firstPath)->first_;
    auto pb = new PathBuilder();
    if(npc(firstPath)->remainder_ != nullptr) {
        npc(pb)->appendPath(npc(firstPath)->remainder_);
    }
    while (npc(i)->hasNext()) {
        npc(pb)->appendPath(java_cast< Path* >(npc(i)->next()));
    }
    this->remainder_ = npc(pb)->result();
}

java::lang::String* com::typesafe::config::impl::Path::first()
{
    return first_;
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::Path::remainder()
{
    return remainder_;
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::Path::parent()
{
    if(remainder_ == nullptr)
        return nullptr;

    auto pb = new PathBuilder();
    auto p = this;
    while (npc(p)->remainder_ != nullptr) {
        npc(pb)->appendKey(npc(p)->first_);
        p = npc(p)->remainder_;
    }
    return npc(pb)->result();
}

java::lang::String* com::typesafe::config::impl::Path::last()
{
    auto p = this;
    while (npc(p)->remainder_ != nullptr) {
        p = npc(p)->remainder_;
    }
    return npc(p)->first_;
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::Path::prepend(Path* toPrepend)
{
    auto pb = new PathBuilder();
    npc(pb)->appendPath(toPrepend);
    npc(pb)->appendPath(this);
    return npc(pb)->result();
}

int32_t com::typesafe::config::impl::Path::length()
{
    auto count = int32_t(1);
    auto p = remainder_;
    while (p != nullptr) {
        count += 1;
        p = npc(p)->remainder_;
    }
    return count;
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::Path::subPath(int32_t removeFromFront)
{
    auto count = removeFromFront;
    auto p = this;
    while (p != nullptr && count > 0) {
        count -= 1;
        p = npc(p)->remainder_;
    }
    return p;
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::Path::subPath(int32_t firstIndex, int32_t lastIndex)
{
    if(lastIndex < firstIndex)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"bad call to subPath"_j);

    auto from = subPath(firstIndex);
    auto pb = new PathBuilder();
    auto count = lastIndex - firstIndex;
    while (count > 0) {
        count -= 1;
        npc(pb)->appendKey(npc(from)->first());
        from = npc(from)->remainder();
        if(from == nullptr)
            throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"subPath lastIndex out of range "_j)->append(lastIndex)->toString());

    }
    return npc(pb)->result();
}

bool com::typesafe::config::impl::Path::startsWith(Path* other)
{
    auto myRemainder = this;
    auto otherRemainder = other;
    if(npc(otherRemainder)->length() <= npc(myRemainder)->length()) {
        while (otherRemainder != nullptr) {
            if(!npc(npc(otherRemainder)->first())->equals(npc(myRemainder)->first()))
                return false;

            myRemainder = npc(myRemainder)->remainder();
            otherRemainder = npc(otherRemainder)->remainder();
        }
        return true;
    }
    return false;
}

bool com::typesafe::config::impl::Path::equals(::java::lang::Object* other)
{
    if(dynamic_cast< Path* >(other) != nullptr) {
        auto that = java_cast< Path* >(other);
        return npc(this->first_)->equals(npc(that)->first_) && ConfigImplUtil::equalsHandlingNull(this->remainder_, npc(that)->remainder_);
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::Path::hashCode()
{
    return int32_t(41) * (int32_t(41) + npc(first_)->hashCode()) + (remainder_ == nullptr ? int32_t(0) : npc(remainder_)->hashCode());
}

bool com::typesafe::config::impl::Path::hasFunkyChars(::java::lang::String* s)
{
    clinit();
    auto length = npc(s)->length();
    if(length == 0)
        return false;

    for (auto i = int32_t(0); i < length; ++i) {
        auto c = npc(s)->charAt(i);
        if(::java::lang::Character::isLetterOrDigit(c) || c == u'-' || c == u'_')
            continue;
        else
            return true;
    }
    return false;
}

void com::typesafe::config::impl::Path::appendToStringBuilder(::java::lang::StringBuilder* sb)
{
    if(hasFunkyChars(first_) || npc(first_)->isEmpty())
        npc(sb)->append(ConfigImplUtil::renderJsonString(first_));
    else
        npc(sb)->append(first_);
    if(remainder_ != nullptr) {
        npc(sb)->append(u"."_j);
        npc(remainder_)->appendToStringBuilder(sb);
    }
}

java::lang::String* com::typesafe::config::impl::Path::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u"Path("_j);
    appendToStringBuilder(sb);
    npc(sb)->append(u")"_j);
    return npc(sb)->toString();
}

java::lang::String* com::typesafe::config::impl::Path::render()
{
    auto sb = new ::java::lang::StringBuilder();
    appendToStringBuilder(sb);
    return npc(sb)->toString();
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::Path::newKey(::java::lang::String* key)
{
    clinit();
    return new Path(key, nullptr);
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::Path::newPath(::java::lang::String* path)
{
    clinit();
    return PathParser::parsePath(path);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Path::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Path", 29);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Path::getClass0()
{
    return class_();
}

