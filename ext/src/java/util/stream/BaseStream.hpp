// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/lang/AutoCloseable.hpp>

struct java::util::stream::BaseStream
    : public virtual ::java::lang::AutoCloseable
{

    /*void close(); (already declared) */
    virtual bool isParallel() = 0;
    virtual ::java::util::Iterator* iterator() = 0;
    virtual BaseStream* onClose(::java::lang::Runnable* closeHandler) = 0;
    virtual BaseStream* parallel() = 0;
    virtual BaseStream* sequential() = 0;
    virtual ::java::util::Spliterator* spliterator() = 0;
    virtual BaseStream* unordered() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
