// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/time/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::time::Duration_DurationUnits
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::List* UNITS_;

    /*void ctor(); (private) */

    // Generated

public:
    Duration_DurationUnits();
protected:
    Duration_DurationUnits(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static ::java::util::List*& UNITS();

private:
    virtual ::java::lang::Class* getClass0();
};
