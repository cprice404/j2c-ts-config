// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/io/ObjectInputStream_GetField.hpp>

struct default_init_tag;

class java::io::ObjectInputStream_GetFieldImpl
    : public ObjectInputStream_GetField
{

public:
    typedef ObjectInputStream_GetField super;

private:
    ObjectStreamClass* desc {  };
    ::int32_tArray* objHandles {  };
    ::java::lang::ObjectArray* objVals {  };
    ::int8_tArray* primVals {  };

public: /* package */
    ObjectInputStream* this$0 {  };

protected:
    void ctor(ObjectStreamClass* desc);

public:
    bool defaulted(::java::lang::String* name) override;
    bool get(::java::lang::String* name, bool val) override;
    int8_t get(::java::lang::String* name, int8_t val) override;
    char16_t get(::java::lang::String* name, char16_t val) override;
    int16_t get(::java::lang::String* name, int16_t val) override;
    int32_t get(::java::lang::String* name, int32_t val) override;
    float get(::java::lang::String* name, float val) override;
    int64_t get(::java::lang::String* name, int64_t val) override;
    double get(::java::lang::String* name, double val) override;
    ::java::lang::Object* get(::java::lang::String* name, ::java::lang::Object* val) override;
    /*int32_t getFieldOffset(::java::lang::String* name, ::java::lang::Class* type); (private) */
    ObjectStreamClass* getObjectStreamClass() override;

public: /* package */
    virtual void readFields();

    // Generated
    ObjectInputStream_GetFieldImpl(ObjectInputStream *ObjectInputStream_this, ObjectStreamClass* desc);
protected:
    ObjectInputStream_GetFieldImpl(ObjectInputStream *ObjectInputStream_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ObjectInputStream *ObjectInputStream_this;

private:
    virtual ::java::lang::Class* getClass0();
};
