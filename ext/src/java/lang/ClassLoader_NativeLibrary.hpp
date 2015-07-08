// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::ClassLoader_NativeLibrary
    : public virtual Object
{

public:
    typedef Object super;

private:
    Class* fromClass {  };

public: /* package */
    int64_t handle {  };
    bool isBuiltin {  };

private:
    int32_t jniVersion {  };

public: /* package */
    bool loaded {  };
    String* name {  };

protected:
    void ctor(Class* fromClass, String* name, bool isBuiltin);

public: /* protected */
    void finalize() override;

public: /* package */
    virtual int64_t find(String* name);
    static String* findBuiltinLib(String* name);
    static Class* getFromClass();
    virtual void load(String* name, bool isBuiltin);
    virtual void unload(String* name, bool isBuiltin);

    // Generated

public:
    ClassLoader_NativeLibrary(Class* fromClass, String* name, bool isBuiltin);
protected:
    ClassLoader_NativeLibrary(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
