// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/AbstractStringBuilder.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/CharSequence.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
}  // namespace lang

namespace io {
typedef ::SubArray< ::java::io::ObjectStreamField, ::java::lang::ObjectArray, ::java::lang::ComparableArray > ObjectStreamFieldArray;
}  // namespace io
}  // namespace java

struct default_init_tag;

class java::lang::StringBuffer final
    : public AbstractStringBuilder
    , public ::java::io::Serializable
    , public virtual CharSequence
{

public:
    typedef AbstractStringBuilder super;

private:
    static ::java::io::ObjectStreamFieldArray* serialPersistentFields_;

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(3388685877147921107LL) };

private:
    ::char16_tArray* toStringCache {  };

protected:
    void ctor();
    void ctor(int32_t capacity);
    void ctor(String* str);
    void ctor(CharSequence* seq);

public:
    StringBuffer* append(Object* obj) override;
    StringBuffer* append(String* str) override;
    StringBuffer* append(StringBuffer* sb) override;

public: /* package */
    StringBuffer* append(AbstractStringBuilder* asb) override;

public:
    StringBuffer* append(CharSequence* s) override;
    StringBuffer* append(::char16_tArray* str) override;
    StringBuffer* append(bool b) override;
    StringBuffer* append(char16_t c) override;
    StringBuffer* append(int32_t i) override;
    StringBuffer* append(int64_t lng) override;
    StringBuffer* append(float f) override;
    StringBuffer* append(double d) override;
    StringBuffer* append(CharSequence* s, int32_t start, int32_t end) override;
    StringBuffer* append(::char16_tArray* str, int32_t offset, int32_t len) override;
    StringBuffer* appendCodePoint(int32_t codePoint) override;
    int32_t capacity() override;
    char16_t charAt(int32_t index) override;
    int32_t codePointAt(int32_t index) override;
    int32_t codePointBefore(int32_t index) override;
    int32_t codePointCount(int32_t beginIndex, int32_t endIndex) override;
    StringBuffer* delete_(int32_t start, int32_t end) override;
    StringBuffer* deleteCharAt(int32_t index) override;
    void ensureCapacity(int32_t minimumCapacity) override;
    void getChars(int32_t srcBegin, int32_t srcEnd, ::char16_tArray* dst, int32_t dstBegin) override;
    int32_t indexOf(String* str) override;
    int32_t indexOf(String* str, int32_t fromIndex) override;
    StringBuffer* insert(int32_t offset, Object* obj) override;
    StringBuffer* insert(int32_t offset, String* str) override;
    StringBuffer* insert(int32_t offset, ::char16_tArray* str) override;
    StringBuffer* insert(int32_t dstOffset, CharSequence* s) override;
    StringBuffer* insert(int32_t offset, bool b) override;
    StringBuffer* insert(int32_t offset, char16_t c) override;
    StringBuffer* insert(int32_t offset, int32_t i) override;
    StringBuffer* insert(int32_t offset, int64_t l) override;
    StringBuffer* insert(int32_t offset, float f) override;
    StringBuffer* insert(int32_t offset, double d) override;
    StringBuffer* insert(int32_t index, ::char16_tArray* str, int32_t offset, int32_t len) override;
    StringBuffer* insert(int32_t dstOffset, CharSequence* s, int32_t start, int32_t end) override;
    int32_t lastIndexOf(String* str) override;
    int32_t lastIndexOf(String* str, int32_t fromIndex) override;
    int32_t length() override;
    int32_t offsetByCodePoints(int32_t index, int32_t codePointOffset) override;
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    StringBuffer* replace(int32_t start, int32_t end, String* str) override;
    StringBuffer* reverse() override;
    void setCharAt(int32_t index, char16_t ch) override;
    void setLength(int32_t newLength) override;
    CharSequence* subSequence(int32_t start, int32_t end) override;
    String* substring(int32_t start) override;
    String* substring(int32_t start, int32_t end) override;
    String* toString() override;
    void trimToSize() override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    StringBuffer();
    StringBuffer(int32_t capacity);
    StringBuffer(String* str);
    StringBuffer(CharSequence* seq);
protected:
    StringBuffer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::io::ObjectStreamFieldArray*& serialPersistentFields();
    virtual ::java::lang::Class* getClass0();
};
