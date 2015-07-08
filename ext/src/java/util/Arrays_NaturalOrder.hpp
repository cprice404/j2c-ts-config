// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class java::util::Arrays_NaturalOrder final
    : public virtual ::java::lang::Object
    , public Comparator
{

public:
    typedef ::java::lang::Object super;

private:
    static Arrays_NaturalOrder* INSTANCE_;

protected:
    void ctor();

public:
    int32_t compare(::java::lang::Object* first, ::java::lang::Object* second) override;

    // Generated

public: /* package */
    Arrays_NaturalOrder();
protected:
    Arrays_NaturalOrder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* obj);

public: /* package */
    static Arrays_NaturalOrder*& INSTANCE();

private:
    virtual ::java::lang::Class* getClass0();
};
