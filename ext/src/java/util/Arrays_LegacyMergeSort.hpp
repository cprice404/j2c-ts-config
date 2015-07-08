// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Arrays_LegacyMergeSort final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static bool userRequested_;

protected:
    void ctor();

    // Generated

public: /* package */
    Arrays_LegacyMergeSort();
protected:
    Arrays_LegacyMergeSort(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static bool& userRequested();
    virtual ::java::lang::Class* getClass0();
};
