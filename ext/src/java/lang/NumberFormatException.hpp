// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/IllegalArgumentException.hpp>

struct default_init_tag;

class java::lang::NumberFormatException
    : public IllegalArgumentException
{

public:
    typedef IllegalArgumentException super;

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(-2848938806368998894LL) };

protected:
    void ctor();
    void ctor(String* s);

public: /* package */
    static NumberFormatException* forInputString(String* s);

    // Generated

public:
    NumberFormatException();
    NumberFormatException(String* s);
protected:
    NumberFormatException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
