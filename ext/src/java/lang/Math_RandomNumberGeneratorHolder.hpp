// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::Math_RandomNumberGeneratorHolder final
    : public Object
{

public:
    typedef Object super;

private:
    static ::java::util::Random* randomNumberGenerator_;

    /*void ctor(); (private) */

    // Generated

public:
    Math_RandomNumberGeneratorHolder();
protected:
    Math_RandomNumberGeneratorHolder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static ::java::util::Random*& randomNumberGenerator();

private:
    virtual ::java::lang::Class* getClass0();
};
