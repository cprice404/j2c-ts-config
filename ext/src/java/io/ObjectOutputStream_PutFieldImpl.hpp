// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/io/ObjectOutputStream_PutField.hpp>

struct default_init_tag;

class java::io::ObjectOutputStream_PutFieldImpl
    : public ObjectOutputStream_PutField
{

public:
    typedef ObjectOutputStream_PutField super;

private:
    ObjectStreamClass* desc {  };
    ::java::lang::ObjectArray* objVals {  };
    ::int8_tArray* primVals {  };

public: /* package */
    ObjectOutputStream* this$0 {  };

protected:
    void ctor(ObjectStreamClass* desc);
    /*int32_t getFieldOffset(::java::lang::String* name, ::java::lang::Class* type); (private) */

public:
    void put(::java::lang::String* name, bool val) override;
    void put(::java::lang::String* name, int8_t val) override;
    void put(::java::lang::String* name, char16_t val) override;
    void put(::java::lang::String* name, int16_t val) override;
    void put(::java::lang::String* name, int32_t val) override;
    void put(::java::lang::String* name, float val) override;
    void put(::java::lang::String* name, int64_t val) override;
    void put(::java::lang::String* name, double val) override;
    void put(::java::lang::String* name, ::java::lang::Object* val) override;
    void write(ObjectOutput* out) override;

public: /* package */
    virtual void writeFields();

    // Generated
    ObjectOutputStream_PutFieldImpl(ObjectOutputStream *ObjectOutputStream_this, ObjectStreamClass* desc);
protected:
    ObjectOutputStream_PutFieldImpl(ObjectOutputStream *ObjectOutputStream_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ObjectOutputStream *ObjectOutputStream_this;

private:
    virtual ::java::lang::Class* getClass0();
};
