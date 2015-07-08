// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/time/temporal/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::time::temporal::TemporalAmount
    : public virtual ::java::lang::Object
{

    virtual Temporal* addTo(Temporal* temporal) = 0;
    virtual int64_t get(TemporalUnit* unit) = 0;
    virtual ::java::util::List* getUnits() = 0;
    virtual Temporal* subtractFrom(Temporal* temporal) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
