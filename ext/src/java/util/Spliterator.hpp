// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::util::Spliterator
    : public virtual ::java::lang::Object
{
    static constexpr int32_t CONCURRENT { int32_t(4096) };
    static constexpr int32_t DISTINCT { int32_t(1) };
    static constexpr int32_t IMMUTABLE { int32_t(1024) };
    static constexpr int32_t NONNULL { int32_t(256) };
    static constexpr int32_t ORDERED { int32_t(16) };
    static constexpr int32_t SIZED { int32_t(64) };
    static constexpr int32_t SORTED { int32_t(4) };
    static constexpr int32_t SUBSIZED { int32_t(16384) };

    virtual int32_t characteristics() = 0;
    virtual int64_t estimateSize() = 0;
    virtual void forEachRemaining(::java::util::function::Consumer* action);
    virtual Comparator* getComparator();
    virtual int64_t getExactSizeIfKnown();
    virtual bool hasCharacteristics(int32_t characteristics);
    virtual bool tryAdvance(::java::util::function::Consumer* action) = 0;
    virtual Spliterator* trySplit() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
