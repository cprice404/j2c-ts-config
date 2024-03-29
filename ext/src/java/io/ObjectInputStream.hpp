// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/ObjectInput.hpp>
#include <java/io/ObjectStreamConstants.hpp>

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

class java::io::ObjectInputStream
    : public InputStream
    , public virtual ObjectInput
    , public virtual ObjectStreamConstants
{

public:
    typedef InputStream super;

private:
    static constexpr int32_t NULL_HANDLE { int32_t(-1) };
    ObjectInputStream_BlockDataInputStream* bin {  };
    bool closed {  };
    SerialCallbackContext* curContext {  };
    bool defaultDataEnd {  };
    int32_t depth {  };
    bool enableOverride {  };
    bool enableResolve {  };
    ObjectInputStream_HandleTable* handles {  };
    int32_t passHandle {  };
    static ::java::util::HashMap* primClasses_;
    ::int8_tArray* primVals {  };
    static ::java::lang::Object* unsharedMarker_;
    ObjectInputStream_ValidationList* vlist {  };

protected:
    void ctor();
    void ctor(InputStream* in);
    /*static bool auditSubclass(::java::lang::Class* subcl); (private) */

public:
    int32_t available() override;
    /*static void bytesToDoubles(::int8_tArray* src, int32_t srcpos, ::doubleArray* dst, int32_t dstpos, int32_t ndoubles); (private) */
    /*static void bytesToFloats(::int8_tArray* src, int32_t srcpos, ::floatArray* dst, int32_t dstpos, int32_t nfloats); (private) */
    /*::java::lang::Object* checkResolve(::java::lang::Object* obj); (private) */
    /*void clear(); (private) */
    /*static ::java::lang::Object* cloneArray_(::java::lang::Object* array); (private) */
    void close() override;
    /*void defaultReadFields(::java::lang::Object* obj, ObjectStreamClass* desc); (private) */
    virtual void defaultReadObject();

public: /* protected */
    virtual bool enableResolveObject(bool enable);
    /*void handleReset(); (private) */
    /*bool isCustomSubclass(); (private) */
    /*static ::java::lang::ClassLoader* latestUserDefinedLoader(); (private) */

public:
    int32_t read() override;
    int32_t read(::int8_tArray* buf, int32_t off, int32_t len) override;
    /*::java::lang::Object* readArray_(bool unshared); (private) */
    bool readBoolean() override;
    int8_t readByte() override;
    char16_t readChar() override;
    /*::java::lang::Class* readClass(bool unshared); (private) */
    /*ObjectStreamClass* readClassDesc(bool unshared); (private) */

public: /* protected */
    virtual ObjectStreamClass* readClassDescriptor();

public:
    double readDouble() override;
    /*::java::lang::Enum* readEnum(bool unshared); (private) */
    /*void readExternalData(Externalizable* obj, ObjectStreamClass* desc); (private) */
    /*IOException* readFatalException(); (private) */
    virtual ObjectInputStream_GetField* readFields();
    float readFloat() override;
    void readFully(::int8_tArray* buf) override;
    void readFully(::int8_tArray* buf, int32_t off, int32_t len) override;
    /*::java::lang::Object* readHandle(bool unshared); (private) */
    int32_t readInt() override;
    ::java::lang::String* readLine() override;
    int64_t readLong() override;
    /*ObjectStreamClass* readNonProxyDesc(bool unshared); (private) */
    /*::java::lang::Object* readNull(); (private) */
    ::java::lang::Object* readObject() override;
    /*::java::lang::Object* readObject0(bool unshared); (private) */

public: /* protected */
    virtual ::java::lang::Object* readObjectOverride();
    /*::java::lang::Object* readOrdinaryObject(bool unshared); (private) */
    /*ObjectStreamClass* readProxyDesc(bool unshared); (private) */
    /*void readSerialData(::java::lang::Object* obj, ObjectStreamClass* desc); (private) */

public:
    int16_t readShort() override;

public: /* protected */
    virtual void readStreamHeader();
    /*::java::lang::String* readString(bool unshared); (private) */

public: /* package */
    virtual ::java::lang::String* readTypeString();

public:
    ::java::lang::String* readUTF() override;
    virtual ::java::lang::Object* readUnshared();
    int32_t readUnsignedByte() override;
    int32_t readUnsignedShort() override;
    virtual void registerValidation(ObjectInputValidation* obj, int32_t prio);

public: /* protected */
    virtual ::java::lang::Class* resolveClass(ObjectStreamClass* desc);
    virtual ::java::lang::Object* resolveObject(::java::lang::Object* obj);
    virtual ::java::lang::Class* resolveProxyClass(::java::lang::StringArray* interfaces);

public:
    int32_t skipBytes(int32_t len) override;
    /*void skipCustomData(); (private) */
    /*void verifySubclass(); (private) */

    // Generated

public: /* protected */
    ObjectInputStream();

public:
    ObjectInputStream(InputStream* in);
protected:
    ObjectInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read(::int8_tArray* b);
    virtual int64_t skip(int64_t n);

private:
    static ::java::util::HashMap*& primClasses();
    static ::java::lang::Object*& unsharedMarker();
    virtual ::java::lang::Class* getClass0();
};
