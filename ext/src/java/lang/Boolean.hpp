// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Boolean final
    : public virtual Object
    , public ::java::io::Serializable
    , public Comparable
{

public:
    typedef Object super;

private:
    static Boolean* FALSE_;
    static Boolean* TRUE_;
    static Class* TYPE_;
    static constexpr int64_t serialVersionUID { int64_t(-3665804199014368530LL) };
    bool value {  };

protected:
    void ctor(bool value);
    void ctor(String* s);

public:
    bool booleanValue();
    static int32_t compare(bool x, bool y);
    int32_t compareTo(Boolean* b);
    bool equals(Object* obj) override;
    static bool getBoolean(String* name);
    int32_t hashCode() override;
    static int32_t hashCode(bool value);
    static bool logicalAnd(bool a, bool b);
    static bool logicalOr(bool a, bool b);
    static bool logicalXor(bool a, bool b);
    static bool parseBoolean(String* s);
    String* toString() override;
    static String* toString(bool b);
    static Boolean* valueOf(bool b);
    static Boolean* valueOf(String* s);

    // Generated
    Boolean(bool value);
    Boolean(String* s);
protected:
    Boolean(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(Object* o) override;
    static Boolean*& FALSE();
    static Boolean*& TRUE();
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
