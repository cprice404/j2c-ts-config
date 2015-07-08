// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/math/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::math::BigDecimal_StringBuilderHelper
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;
    static ::char16_tArray* DIGIT_ONES_;
    static ::char16_tArray* DIGIT_TENS_;

public: /* package */
    ::char16_tArray* cmpCharArray_ {  };
    ::java::lang::StringBuilder* sb {  };

protected:
    void ctor();

public: /* package */
    virtual ::char16_tArray* getCompactCharArray_();
    virtual ::java::lang::StringBuilder* getStringBuilder();
    virtual int32_t putIntCompact(int64_t intCompact);

    // Generated
    BigDecimal_StringBuilderHelper();
protected:
    BigDecimal_StringBuilderHelper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();
    static ::char16_tArray*& DIGIT_ONES();
    static ::char16_tArray*& DIGIT_TENS();

private:
    virtual ::java::lang::Class* getClass0();
};
