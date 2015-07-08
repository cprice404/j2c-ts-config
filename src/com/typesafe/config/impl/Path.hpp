// Generated from /config/src/main/java/com/typesafe/config/impl/Path.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
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

class com::typesafe::config::impl::Path final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* first_ {  };
    Path* remainder_ {  };
protected:
    void ctor(::java::lang::String* first, Path* remainder);
    void ctor(::java::lang::StringArray*/*...*/ elements);
    void ctor(::java::util::List* pathsToConcat);
    void ctor(::java::util::Iterator* i);

public: /* package */
    ::java::lang::String* first();
    Path* remainder();
    Path* parent();
    ::java::lang::String* last();
    Path* prepend(Path* toPrepend);
    int32_t length();
    Path* subPath(int32_t removeFromFront);
    Path* subPath(int32_t firstIndex, int32_t lastIndex);
    bool startsWith(Path* other);

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

public: /* package */
    static bool hasFunkyChars(::java::lang::String* s);

private:
    void appendToStringBuilder(::java::lang::StringBuilder* sb);

public:
    ::java::lang::String* toString() override;

public: /* package */
    ::java::lang::String* render();
    static Path* newKey(::java::lang::String* key);
    static Path* newPath(::java::lang::String* path);

    // Generated
    Path(::java::lang::String* first, Path* remainder);
    Path(::java::lang::StringArray* elements);
    Path(::java::util::List* pathsToConcat);
    Path(::java::util::Iterator* i);
protected:
    Path(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
