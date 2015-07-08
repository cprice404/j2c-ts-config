// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/ObjectOutput.hpp>
#include <java/io/ObjectStreamConstants.hpp>

struct default_init_tag;

class java::io::ObjectOutputStream
    : public OutputStream
    , public virtual ObjectOutput
    , public virtual ObjectStreamConstants
{

public:
    typedef OutputStream super;

private:
    ObjectOutputStream_BlockDataOutputStream* bout {  };
    SerialCallbackContext* curContext {  };
    ObjectOutputStream_PutFieldImpl* curPut {  };
    ObjectOutputStream_DebugTraceInfoStack* debugInfoStack {  };
    int32_t depth {  };
    bool enableOverride {  };
    bool enableReplace {  };
    static bool extendedDebugInfo_;
    ObjectOutputStream_HandleTable* handles {  };
    ::int8_tArray* primVals {  };
    int32_t protocol {  };
    ObjectOutputStream_ReplaceTable* subs {  };

protected:
    void ctor();
    void ctor(OutputStream* out);

public: /* protected */
    virtual void annotateClass(::java::lang::Class* cl);
    virtual void annotateProxyClass(::java::lang::Class* cl);
    /*static bool auditSubclass(::java::lang::Class* subcl); (private) */
    /*void clear(); (private) */

public:
    void close() override;
    /*void defaultWriteFields(::java::lang::Object* obj, ObjectStreamClass* desc); (private) */
    virtual void defaultWriteObject();
    /*static void doublesToBytes(::doubleArray* src, int32_t srcpos, ::int8_tArray* dst, int32_t dstpos, int32_t ndoubles); (private) */

public: /* protected */
    virtual void drain();
    virtual bool enableReplaceObject(bool enable);
    /*static void floatsToBytes(::floatArray* src, int32_t srcpos, ::int8_tArray* dst, int32_t dstpos, int32_t nfloats); (private) */

public:
    void flush() override;

public: /* package */
    virtual int32_t getProtocolVersion();
    /*bool isCustomSubclass(); (private) */

public:
    virtual ObjectOutputStream_PutField* putFields();

public: /* protected */
    virtual ::java::lang::Object* replaceObject(::java::lang::Object* obj);

public:
    virtual void reset();
    virtual void useProtocolVersion(int32_t version);
    /*void verifySubclass(); (private) */
    void write(int32_t val) override;
    void write(::int8_tArray* buf) override;
    void write(::int8_tArray* buf, int32_t off, int32_t len) override;
    /*void writeArray_(::java::lang::Object* array, ObjectStreamClass* desc, bool unshared); (private) */
    void writeBoolean(bool val) override;
    void writeByte(int32_t val) override;
    void writeBytes(::java::lang::String* str) override;
    void writeChar(int32_t val) override;
    void writeChars(::java::lang::String* str) override;
    /*void writeClass(::java::lang::Class* cl, bool unshared); (private) */
    /*void writeClassDesc(ObjectStreamClass* desc, bool unshared); (private) */

public: /* protected */
    virtual void writeClassDescriptor(ObjectStreamClass* desc);

public:
    void writeDouble(double val) override;
    /*void writeEnum(::java::lang::Enum* en, ObjectStreamClass* desc, bool unshared); (private) */
    /*void writeExternalData(Externalizable* obj); (private) */
    /*void writeFatalException(IOException* ex); (private) */
    virtual void writeFields();
    void writeFloat(float val) override;
    /*void writeHandle(int32_t handle); (private) */
    void writeInt(int32_t val) override;
    void writeLong(int64_t val) override;
    /*void writeNonProxyDesc(ObjectStreamClass* desc, bool unshared); (private) */
    /*void writeNull(); (private) */
    void writeObject(::java::lang::Object* obj) override;
    /*void writeObject0(::java::lang::Object* obj, bool unshared); (private) */

public: /* protected */
    virtual void writeObjectOverride(::java::lang::Object* obj);
    /*void writeOrdinaryObject(::java::lang::Object* obj, ObjectStreamClass* desc, bool unshared); (private) */
    /*void writeProxyDesc(ObjectStreamClass* desc, bool unshared); (private) */
    /*void writeSerialData(::java::lang::Object* obj, ObjectStreamClass* desc); (private) */

public:
    void writeShort(int32_t val) override;

public: /* protected */
    virtual void writeStreamHeader();
    /*void writeString(::java::lang::String* str, bool unshared); (private) */

public: /* package */
    virtual void writeTypeString(::java::lang::String* str);

public:
    void writeUTF(::java::lang::String* str) override;
    virtual void writeUnshared(::java::lang::Object* obj);

    // Generated

public: /* protected */
    ObjectOutputStream();

public:
    ObjectOutputStream(OutputStream* out);
protected:
    ObjectOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static bool& extendedDebugInfo();
    virtual ::java::lang::Class* getClass0();
};
