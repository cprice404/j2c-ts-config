// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigOrigin.java
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/OriginType.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue_SerializedField.hpp>
#include <java/io/File.hpp>
#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/net/MalformedURLException.hpp>
#include <java/net/URI.hpp>
#include <java/net/URL.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/EnumMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
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
typedef ::SubArray< ::com::typesafe::config::impl::OriginType, ::java::lang::EnumArray > OriginTypeArray;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com

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
com::typesafe::config::impl::SimpleConfigOrigin::SimpleConfigOrigin(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleConfigOrigin::SimpleConfigOrigin(::java::lang::String* description, int32_t lineNumber, int32_t endLineNumber, OriginType* originType, ::java::lang::String* urlOrNull, ::java::lang::String* resourceOrNull, ::java::util::List* commentsOrNull) 
    : SimpleConfigOrigin(*static_cast< ::default_init_tag* >(0))
{
    ctor(description,lineNumber,endLineNumber,originType,urlOrNull,resourceOrNull,commentsOrNull);
}

void com::typesafe::config::impl::SimpleConfigOrigin::ctor(::java::lang::String* description, int32_t lineNumber, int32_t endLineNumber, OriginType* originType, ::java::lang::String* urlOrNull, ::java::lang::String* resourceOrNull, ::java::util::List* commentsOrNull)
{
    super::ctor();
    if(description == nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"description may not be null"_j);

    this->description_ = description;
    this->lineNumber_ = lineNumber;
    this->endLineNumber = endLineNumber;
    this->originType = originType;
    this->urlOrNull = urlOrNull;
    this->resourceOrNull = resourceOrNull;
    this->commentsOrNull = commentsOrNull;
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::newSimple(::java::lang::String* description)
{
    clinit();
    return new SimpleConfigOrigin(description, -int32_t(1), -int32_t(1), OriginType::GENERIC, nullptr, nullptr, nullptr);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::newFile(::java::lang::String* filename)
{
    clinit();
    ::java::lang::String* url;
    try {
        url = npc(npc((new ::java::io::File(filename))->toURI())->toURL())->toExternalForm();
    } catch (::java::net::MalformedURLException* e) {
        url = nullptr;
    }
    return new SimpleConfigOrigin(filename, -int32_t(1), -int32_t(1), OriginType::FILE, url, nullptr, nullptr);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::newURL(::java::net::URL* url)
{
    clinit();
    auto u = npc(url)->toExternalForm();
    return new SimpleConfigOrigin(u, -int32_t(1), -int32_t(1), OriginType::URL, u, nullptr, nullptr);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::newResource(::java::lang::String* resource, ::java::net::URL* url)
{
    clinit();
    ::java::lang::String* desc;
    if(url != nullptr)
        desc = ::java::lang::StringBuilder().append(resource)->append(u" @ "_j)
            ->append(npc(url)->toExternalForm())->toString();
    else
        desc = resource;
    return new SimpleConfigOrigin(desc, -int32_t(1), -int32_t(1), OriginType::RESOURCE, url != nullptr ? npc(url)->toExternalForm() : static_cast< ::java::lang::String* >(nullptr), resource, nullptr);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::newResource(::java::lang::String* resource)
{
    clinit();
    return newResource(resource, nullptr);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::withLineNumber(int32_t lineNumber)
{
    if(lineNumber == this->lineNumber_ && lineNumber == this->endLineNumber) {
        return this;
    } else {
        return new SimpleConfigOrigin(this->description_, lineNumber, lineNumber, this->originType, this->urlOrNull, this->resourceOrNull, java_cast< ::java::util::List* >(this->commentsOrNull));
    }
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::addURL(::java::net::URL* url)
{
    return new SimpleConfigOrigin(this->description_, this->lineNumber_, this->endLineNumber, this->originType, url != nullptr ? npc(url)->toExternalForm() : static_cast< ::java::lang::String* >(nullptr), this->resourceOrNull, java_cast< ::java::util::List* >(this->commentsOrNull));
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::withComments(::java::util::List* comments)
{
    if(ConfigImplUtil::equalsHandlingNull(comments, java_cast< ::java::util::List* >(this->commentsOrNull))) {
        return this;
    } else {
        return new SimpleConfigOrigin(this->description_, this->lineNumber_, this->endLineNumber, this->originType, this->urlOrNull, this->resourceOrNull, comments);
    }
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::prependComments(::java::util::List* comments)
{
    if(ConfigImplUtil::equalsHandlingNull(comments, java_cast< ::java::util::List* >(this->commentsOrNull)) || comments == nullptr) {
        return this;
    } else if(java_cast< ::java::util::List* >(this->commentsOrNull) == nullptr) {
        return withComments(comments);
    } else {
        ::java::util::List* merged = new ::java::util::ArrayList(npc(comments)->size() + npc(java_cast< ::java::util::List* >(this->commentsOrNull))->size());
        npc(merged)->addAll(comments);
        npc(merged)->addAll(java_cast< ::java::util::List* >(this->commentsOrNull));
        return withComments(merged);
    }
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::appendComments(::java::util::List* comments)
{
    if(ConfigImplUtil::equalsHandlingNull(comments, java_cast< ::java::util::List* >(this->commentsOrNull)) || comments == nullptr) {
        return this;
    } else if(java_cast< ::java::util::List* >(this->commentsOrNull) == nullptr) {
        return withComments(comments);
    } else {
        ::java::util::List* merged = new ::java::util::ArrayList(npc(comments)->size() + npc(java_cast< ::java::util::List* >(this->commentsOrNull))->size());
        npc(merged)->addAll(java_cast< ::java::util::List* >(this->commentsOrNull));
        npc(merged)->addAll(comments);
        return withComments(merged);
    }
}

java::lang::String* com::typesafe::config::impl::SimpleConfigOrigin::description()
{
    if(lineNumber_ < 0) {
        return description_;
    } else if(endLineNumber == lineNumber_) {
        return ::java::lang::StringBuilder().append(description_)->append(u": "_j)
            ->append(lineNumber_)->toString();
    } else {
        return ::java::lang::StringBuilder().append(description_)->append(u": "_j)
            ->append(lineNumber_)
            ->append(u"-"_j)
            ->append(endLineNumber)->toString();
    }
}

bool com::typesafe::config::impl::SimpleConfigOrigin::equals(::java::lang::Object* other)
{
    if(dynamic_cast< SimpleConfigOrigin* >(other) != nullptr) {
        auto otherOrigin = java_cast< SimpleConfigOrigin* >(other);
        return npc(this->description_)->equals(npc(otherOrigin)->description_) && this->lineNumber_ == npc(otherOrigin)->lineNumber_ && this->endLineNumber == npc(otherOrigin)->endLineNumber && this->originType == npc(otherOrigin)->originType && ConfigImplUtil::equalsHandlingNull(this->urlOrNull, npc(otherOrigin)->urlOrNull) && ConfigImplUtil::equalsHandlingNull(this->resourceOrNull, npc(otherOrigin)->resourceOrNull);
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::SimpleConfigOrigin::hashCode()
{
    auto h = int32_t(41) * (int32_t(41) + npc(description_)->hashCode());
    h = int32_t(41) * (h + lineNumber_);
    h = int32_t(41) * (h + endLineNumber);
    h = int32_t(41) * (h + npc(originType)->hashCode());
    if(urlOrNull != nullptr)
        h = int32_t(41) * (h + npc(urlOrNull)->hashCode());

    if(resourceOrNull != nullptr)
        h = int32_t(41) * (h + npc(resourceOrNull)->hashCode());

    return h;
}

java::lang::String* com::typesafe::config::impl::SimpleConfigOrigin::toString()
{
    return ::java::lang::StringBuilder().append(u"ConfigOrigin("_j)->append(description_)
        ->append(u")"_j)->toString();
}

java::lang::String* com::typesafe::config::impl::SimpleConfigOrigin::filename()
{
    if(originType == OriginType::FILE) {
        return description_;
    } else if(urlOrNull != nullptr) {
        ::java::net::URL* url;
        try {
            url = new ::java::net::URL(urlOrNull);
        } catch (::java::net::MalformedURLException* e) {
            return nullptr;
        }
        if(npc(npc(url)->getProtocol())->equals(u"file"_j)) {
            return npc(url)->getFile();
        } else {
            return nullptr;
        }
    } else {
        return nullptr;
    }
}

java::net::URL* com::typesafe::config::impl::SimpleConfigOrigin::url()
{
    if(urlOrNull == nullptr) {
        return nullptr;
    } else {
        try {
            return new ::java::net::URL(urlOrNull);
        } catch (::java::net::MalformedURLException* e) {
            return nullptr;
        }
    }
}

java::lang::String* com::typesafe::config::impl::SimpleConfigOrigin::resource()
{
    return resourceOrNull;
}

int32_t com::typesafe::config::impl::SimpleConfigOrigin::lineNumber()
{
    return lineNumber_;
}

java::util::List* com::typesafe::config::impl::SimpleConfigOrigin::comments()
{
    if(commentsOrNull != nullptr) {
        return ::java::util::Collections::unmodifiableList(commentsOrNull);
    } else {
        return ::java::util::Collections::emptyList();
    }
}

java::lang::String*& com::typesafe::config::impl::SimpleConfigOrigin::MERGE_OF_PREFIX()
{
    clinit();
    return MERGE_OF_PREFIX_;
}
java::lang::String* com::typesafe::config::impl::SimpleConfigOrigin::MERGE_OF_PREFIX_;

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::mergeTwo(SimpleConfigOrigin* a, SimpleConfigOrigin* b)
{
    clinit();
    ::java::lang::String* mergedDesc;
    int32_t mergedStartLine;
    int32_t mergedEndLine;
    ::java::util::List* mergedComments;
    OriginType* mergedType;
    if(npc(a)->originType == npc(b)->originType) {
        mergedType = npc(a)->originType;
    } else {
        mergedType = OriginType::GENERIC;
    }
    auto aDesc = npc(a)->description_;
    auto bDesc = npc(b)->description_;
    if(npc(aDesc)->startsWith(MERGE_OF_PREFIX_))
        aDesc = npc(aDesc)->substring(MERGE_OF_PREFIX_->length());

    if(npc(bDesc)->startsWith(MERGE_OF_PREFIX_))
        bDesc = npc(bDesc)->substring(MERGE_OF_PREFIX_->length());

    if(npc(aDesc)->equals(bDesc)) {
        mergedDesc = aDesc;
        if(npc(a)->lineNumber_ < 0)
            mergedStartLine = npc(b)->lineNumber_;
        else if(npc(b)->lineNumber_ < 0)
            mergedStartLine = npc(a)->lineNumber_;
        else
            mergedStartLine = ::java::lang::Math::min(npc(a)->lineNumber_, npc(b)->lineNumber_);
        mergedEndLine = ::java::lang::Math::max(npc(a)->endLineNumber, npc(b)->endLineNumber);
    } else {
        auto aFull = npc(a)->description();
        auto bFull = npc(b)->description();
        if(npc(aFull)->startsWith(MERGE_OF_PREFIX_))
            aFull = npc(aFull)->substring(MERGE_OF_PREFIX_->length());

        if(npc(bFull)->startsWith(MERGE_OF_PREFIX_))
            bFull = npc(bFull)->substring(MERGE_OF_PREFIX_->length());

        mergedDesc = ::java::lang::StringBuilder().append(MERGE_OF_PREFIX_)->append(aFull)
            ->append(u","_j)
            ->append(bFull)->toString();
        mergedStartLine = -int32_t(1);
        mergedEndLine = -int32_t(1);
    }
    ::java::lang::String* mergedURL;
    if(ConfigImplUtil::equalsHandlingNull(npc(a)->urlOrNull, npc(b)->urlOrNull)) {
        mergedURL = npc(a)->urlOrNull;
    } else {
        mergedURL = nullptr;
    }
    ::java::lang::String* mergedResource;
    if(ConfigImplUtil::equalsHandlingNull(npc(a)->resourceOrNull, npc(b)->resourceOrNull)) {
        mergedResource = npc(a)->resourceOrNull;
    } else {
        mergedResource = nullptr;
    }
    if(ConfigImplUtil::equalsHandlingNull(npc(a)->commentsOrNull, npc(b)->commentsOrNull)) {
        mergedComments = npc(a)->commentsOrNull;
    } else {
        mergedComments = new ::java::util::ArrayList();
        if(npc(a)->commentsOrNull != nullptr)
            npc(mergedComments)->addAll(npc(a)->commentsOrNull);

        if(npc(b)->commentsOrNull != nullptr)
            npc(mergedComments)->addAll(npc(b)->commentsOrNull);

    }
    return new SimpleConfigOrigin(mergedDesc, mergedStartLine, mergedEndLine, mergedType, mergedURL, mergedResource, mergedComments);
}

int32_t com::typesafe::config::impl::SimpleConfigOrigin::similarity(SimpleConfigOrigin* a, SimpleConfigOrigin* b)
{
    clinit();
    auto count = int32_t(0);
    if(npc(a)->originType == npc(b)->originType)
        count += 1;

    if(npc(npc(a)->description_)->equals(npc(b)->description_)) {
        count += 1;
        if(npc(a)->lineNumber_ == npc(b)->lineNumber_)
            count += 1;

        if(npc(a)->endLineNumber == npc(b)->endLineNumber)
            count += 1;

        if(ConfigImplUtil::equalsHandlingNull(npc(a)->urlOrNull, npc(b)->urlOrNull))
            count += 1;

        if(ConfigImplUtil::equalsHandlingNull(npc(a)->resourceOrNull, npc(b)->resourceOrNull))
            count += 1;

    }
    return count;
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::mergeThree(SimpleConfigOrigin* a, SimpleConfigOrigin* b, SimpleConfigOrigin* c)
{
    clinit();
    if(similarity(a, b) >= similarity(b, c)) {
        return mergeTwo(mergeTwo(a, b), c);
    } else {
        return mergeTwo(a, mergeTwo(b, c));
    }
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::mergeOrigins(::com::typesafe::config::ConfigOrigin* a, ::com::typesafe::config::ConfigOrigin* b)
{
    clinit();
    return mergeTwo(java_cast< SimpleConfigOrigin* >(a), java_cast< SimpleConfigOrigin* >(b));
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::mergeOrigins(::java::util::List* stack)
{
    clinit();
    ::java::util::List* origins = new ::java::util::ArrayList(npc(stack)->size());
    for (auto _i = npc(stack)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            npc(origins)->add(npc(v)->origin());
        }
    }
    return mergeOrigins(static_cast< ::java::util::Collection* >(origins));
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::mergeOrigins(::java::util::Collection* stack)
{
    clinit();
    if(npc(stack)->isEmpty()) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"can't merge empty list of origins"_j);
    } else if(npc(stack)->size() == 1) {
        return java_cast< ::com::typesafe::config::ConfigOrigin* >(npc(npc(stack)->iterator())->next());
    } else if(npc(stack)->size() == 2) {
        auto i = npc(stack)->iterator();
        return mergeTwo(java_cast< SimpleConfigOrigin* >(java_cast< ::com::typesafe::config::ConfigOrigin* >(npc(i)->next())), java_cast< SimpleConfigOrigin* >(java_cast< ::com::typesafe::config::ConfigOrigin* >(npc(i)->next())));
    } else {
        ::java::util::List* remaining = new ::java::util::ArrayList();
        for (auto _i = npc(stack)->iterator(); _i->hasNext(); ) {
            ::com::typesafe::config::ConfigOrigin* o = java_cast< ::com::typesafe::config::ConfigOrigin* >(_i->next());
            {
                npc(remaining)->add(java_cast< SimpleConfigOrigin* >(o));
            }
        }
        while (npc(remaining)->size() > 2) {
            auto c = java_cast< SimpleConfigOrigin* >(npc(remaining)->get(npc(remaining)->size() - int32_t(1)));
            npc(remaining)->remove(npc(remaining)->size() - int32_t(1));
            auto b = java_cast< SimpleConfigOrigin* >(npc(remaining)->get(npc(remaining)->size() - int32_t(1)));
            npc(remaining)->remove(npc(remaining)->size() - int32_t(1));
            auto a = java_cast< SimpleConfigOrigin* >(npc(remaining)->get(npc(remaining)->size() - int32_t(1)));
            npc(remaining)->remove(npc(remaining)->size() - int32_t(1));
            auto merged = mergeThree(a, b, c);
            npc(remaining)->add(merged);
        }
        return mergeOrigins(static_cast< ::java::util::Collection* >(remaining));
    }
}

java::util::Map* com::typesafe::config::impl::SimpleConfigOrigin::toFields()
{
    ::java::util::Map* m = new ::java::util::EnumMap(static_cast< ::java::lang::Class* >(SerializedConfigValue_SerializedField::class_()));
    npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_DESCRIPTION, description_);
    if(lineNumber_ >= 0)
        npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_LINE_NUMBER, ::java::lang::Integer::valueOf(lineNumber_));

    if(endLineNumber >= 0)
        npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_END_LINE_NUMBER, ::java::lang::Integer::valueOf(endLineNumber));

    npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_TYPE, ::java::lang::Integer::valueOf(npc(originType)->ordinal()));
    if(urlOrNull != nullptr)
        npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_URL, urlOrNull);

    if(resourceOrNull != nullptr)
        npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_RESOURCE, resourceOrNull);

    if(commentsOrNull != nullptr)
        npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_COMMENTS, commentsOrNull);

    return m;
}

java::util::Map* com::typesafe::config::impl::SimpleConfigOrigin::toFieldsDelta(SimpleConfigOrigin* baseOrigin)
{
    ::java::util::Map* baseFields;
    if(baseOrigin != nullptr)
        baseFields = npc(baseOrigin)->toFields();
    else
        baseFields = ::java::util::Collections::/* <SerializedField, Object> */emptyMap();
    return fieldsDelta(baseFields, toFields());
}

java::util::Map* com::typesafe::config::impl::SimpleConfigOrigin::fieldsDelta(::java::util::Map* base, ::java::util::Map* child)
{
    clinit();
    ::java::util::Map* m = new ::java::util::EnumMap(static_cast< ::java::util::Map* >(child));
    for (auto _i = npc(npc(base)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* baseEntry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto f = java_cast< SerializedConfigValue_SerializedField* >(npc(baseEntry)->getKey());
            if(npc(m)->containsKey(f) && ConfigImplUtil::equalsHandlingNull(java_cast< ::java::lang::Object* >(npc(baseEntry)->getValue()), java_cast< ::java::lang::Object* >(npc(m)->get(f)))) {
                npc(m)->remove(f);
            } else if(!npc(m)->containsKey(f)) {
                {
                    auto v = f;
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_DESCRIPTION)) {
                        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"origin missing description field? "_j)->append(static_cast< ::java::lang::Object* >(child))->toString());
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_DESCRIPTION) || (v == SerializedConfigValue_SerializedField::ORIGIN_LINE_NUMBER)) {
                        npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_LINE_NUMBER, ::java::lang::Integer::valueOf(-int32_t(1)));
                        goto end_switch0;;
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_END_LINE_NUMBER)) {
                        npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_END_LINE_NUMBER, ::java::lang::Integer::valueOf(-int32_t(1)));
                        goto end_switch0;;
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_TYPE)) {
                        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"should always be an ORIGIN_TYPE field"_j);
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_TYPE) || (v == SerializedConfigValue_SerializedField::ORIGIN_URL)) {
                        npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_NULL_URL, u""_j);
                        goto end_switch0;;
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_RESOURCE)) {
                        npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_NULL_RESOURCE, u""_j);
                        goto end_switch0;;
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_COMMENTS)) {
                        npc(m)->put(SerializedConfigValue_SerializedField::ORIGIN_NULL_COMMENTS, u""_j);
                        goto end_switch0;;
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_NULL_URL) || (v == SerializedConfigValue_SerializedField::ORIGIN_NULL_RESOURCE) || (v == SerializedConfigValue_SerializedField::ORIGIN_NULL_COMMENTS)) {
                        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"computing delta, base object should not contain "_j)->append(static_cast< ::java::lang::Object* >(f))
                            ->append(u" "_j)
                            ->append(static_cast< ::java::lang::Object* >(base))->toString());
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_NULL_URL) || (v == SerializedConfigValue_SerializedField::ORIGIN_NULL_RESOURCE) || (v == SerializedConfigValue_SerializedField::ORIGIN_NULL_COMMENTS) || (v == SerializedConfigValue_SerializedField::END_MARKER) || (v == SerializedConfigValue_SerializedField::ROOT_VALUE) || (v == SerializedConfigValue_SerializedField::ROOT_WAS_CONFIG) || (v == SerializedConfigValue_SerializedField::UNKNOWN) || (v == SerializedConfigValue_SerializedField::VALUE_DATA) || (v == SerializedConfigValue_SerializedField::VALUE_ORIGIN)) {
                        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"should not appear here: "_j)->append(static_cast< ::java::lang::Object* >(f))->toString());
                    }
end_switch0:;
                }

            } else {
            }
        }
    }
    return m;
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::fromFields(::java::util::Map* m) /* throws(IOException) */
{
    clinit();
    if(npc(m)->isEmpty())
        return nullptr;

    auto description = java_cast< ::java::lang::String* >(java_cast< ::java::lang::Object* >(npc(m)->get(SerializedConfigValue_SerializedField::ORIGIN_DESCRIPTION)));
    auto lineNumber = java_cast< ::java::lang::Integer* >(java_cast< ::java::lang::Object* >(npc(m)->get(SerializedConfigValue_SerializedField::ORIGIN_LINE_NUMBER)));
    auto endLineNumber = java_cast< ::java::lang::Integer* >(java_cast< ::java::lang::Object* >(npc(m)->get(SerializedConfigValue_SerializedField::ORIGIN_END_LINE_NUMBER)));
    auto originTypeOrdinal = java_cast< ::java::lang::Number* >(java_cast< ::java::lang::Object* >(npc(m)->get(SerializedConfigValue_SerializedField::ORIGIN_TYPE)));
    if(originTypeOrdinal == nullptr)
        throw new ::java::io::IOException(u"Missing ORIGIN_TYPE field"_j);

    auto originType = (*OriginType::values())[npc(originTypeOrdinal)->byteValue()];
    auto urlOrNull = java_cast< ::java::lang::String* >(java_cast< ::java::lang::Object* >(npc(m)->get(SerializedConfigValue_SerializedField::ORIGIN_URL)));
    auto resourceOrNull = java_cast< ::java::lang::String* >(java_cast< ::java::lang::Object* >(npc(m)->get(SerializedConfigValue_SerializedField::ORIGIN_RESOURCE)));
    auto commentsOrNull = java_cast< ::java::util::List* >(java_cast< ::java::lang::Object* >(npc(m)->get(SerializedConfigValue_SerializedField::ORIGIN_COMMENTS)));
    if(originType == OriginType::RESOURCE && resourceOrNull == nullptr) {
        resourceOrNull = description;
    }
    return new SimpleConfigOrigin(description, lineNumber != nullptr ? (npc(lineNumber))->intValue() : -int32_t(1), endLineNumber != nullptr ? (npc(endLineNumber))->intValue() : -int32_t(1), originType, urlOrNull, resourceOrNull, commentsOrNull);
}

java::util::Map* com::typesafe::config::impl::SimpleConfigOrigin::applyFieldsDelta(::java::util::Map* base, ::java::util::Map* delta) /* throws(IOException) */
{
    clinit();
    ::java::util::Map* m = new ::java::util::EnumMap(static_cast< ::java::util::Map* >(delta));
    for (auto _i = npc(npc(base)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* baseEntry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto f = java_cast< SerializedConfigValue_SerializedField* >(npc(baseEntry)->getKey());
            if(npc(delta)->containsKey(f)) {
            } else {
                {
                    auto v = f;
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_DESCRIPTION)) {
                        npc(m)->put(f, java_cast< ::java::lang::Object* >(npc(base)->get(f)));
                        goto end_switch1;;
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_URL)) {
                        if(npc(delta)->containsKey(SerializedConfigValue_SerializedField::ORIGIN_NULL_URL)) {
                            npc(m)->remove(SerializedConfigValue_SerializedField::ORIGIN_NULL_URL);
                        } else {
                            npc(m)->put(f, java_cast< ::java::lang::Object* >(npc(base)->get(f)));
                        }
                        goto end_switch1;;
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_RESOURCE)) {
                        if(npc(delta)->containsKey(SerializedConfigValue_SerializedField::ORIGIN_NULL_RESOURCE)) {
                            npc(m)->remove(SerializedConfigValue_SerializedField::ORIGIN_NULL_RESOURCE);
                        } else {
                            npc(m)->put(f, java_cast< ::java::lang::Object* >(npc(base)->get(f)));
                        }
                        goto end_switch1;;
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_COMMENTS)) {
                        if(npc(delta)->containsKey(SerializedConfigValue_SerializedField::ORIGIN_NULL_COMMENTS)) {
                            npc(m)->remove(SerializedConfigValue_SerializedField::ORIGIN_NULL_COMMENTS);
                        } else {
                            npc(m)->put(f, java_cast< ::java::lang::Object* >(npc(base)->get(f)));
                        }
                        goto end_switch1;;
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_NULL_URL) || (v == SerializedConfigValue_SerializedField::ORIGIN_NULL_RESOURCE) || (v == SerializedConfigValue_SerializedField::ORIGIN_NULL_COMMENTS)) {
                        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"applying fields, base object should not contain "_j)->append(static_cast< ::java::lang::Object* >(f))
                            ->append(u" "_j)
                            ->append(static_cast< ::java::lang::Object* >(base))->toString());
                    }
                    if((v == SerializedConfigValue_SerializedField::ORIGIN_NULL_URL) || (v == SerializedConfigValue_SerializedField::ORIGIN_NULL_RESOURCE) || (v == SerializedConfigValue_SerializedField::ORIGIN_NULL_COMMENTS) || (v == SerializedConfigValue_SerializedField::ORIGIN_END_LINE_NUMBER) || (v == SerializedConfigValue_SerializedField::ORIGIN_LINE_NUMBER) || (v == SerializedConfigValue_SerializedField::ORIGIN_TYPE)) {
                        npc(m)->put(f, java_cast< ::java::lang::Object* >(npc(base)->get(f)));
                        goto end_switch1;;
                    }
                    if((v == SerializedConfigValue_SerializedField::END_MARKER) || (v == SerializedConfigValue_SerializedField::ROOT_VALUE) || (v == SerializedConfigValue_SerializedField::ROOT_WAS_CONFIG) || (v == SerializedConfigValue_SerializedField::UNKNOWN) || (v == SerializedConfigValue_SerializedField::VALUE_DATA) || (v == SerializedConfigValue_SerializedField::VALUE_ORIGIN)) {
                        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"should not appear here: "_j)->append(static_cast< ::java::lang::Object* >(f))->toString());
                    }
end_switch1:;
                }

            }
        }
    }
    return m;
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigOrigin::fromBase(SimpleConfigOrigin* baseOrigin, ::java::util::Map* delta) /* throws(IOException) */
{
    clinit();
    ::java::util::Map* baseFields;
    if(baseOrigin != nullptr)
        baseFields = npc(baseOrigin)->toFields();
    else
        baseFields = ::java::util::Collections::/* <SerializedField, Object> */emptyMap();
    auto fields = applyFieldsDelta(baseFields, delta);
    return fromFields(fields);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfigOrigin::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleConfigOrigin", 43);
    return c;
}

void com::typesafe::config::impl::SimpleConfigOrigin::clinit()
{
struct string_init_ {
    string_init_() {
    MERGE_OF_PREFIX_ = u"merge of "_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* com::typesafe::config::impl::SimpleConfigOrigin::getClass0()
{
    return class_();
}

