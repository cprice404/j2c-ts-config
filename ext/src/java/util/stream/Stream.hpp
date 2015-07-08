// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/util/stream/BaseStream.hpp>

struct java::util::stream::Stream
    : public virtual BaseStream
{

    virtual bool allMatch(::java::util::function::Predicate* predicate) = 0;
    virtual bool anyMatch(::java::util::function::Predicate* predicate) = 0;
    static Stream_Builder* builder();
    virtual ::java::lang::Object* collect(Collector* collector) = 0;
    virtual ::java::lang::Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::BiConsumer* accumulator, ::java::util::function::BiConsumer* combiner) = 0;
    static Stream* concat(Stream* a, Stream* b);
    virtual int64_t count() = 0;
    virtual Stream* distinct() = 0;
    static Stream* empty();
    virtual Stream* filter(::java::util::function::Predicate* predicate) = 0;
    virtual ::java::util::Optional* findAny() = 0;
    virtual ::java::util::Optional* findFirst() = 0;
    virtual Stream* flatMap(::java::util::function::Function* mapper) = 0;
    virtual DoubleStream* flatMapToDouble(::java::util::function::Function* mapper) = 0;
    virtual IntStream* flatMapToInt(::java::util::function::Function* mapper) = 0;
    virtual LongStream* flatMapToLong(::java::util::function::Function* mapper) = 0;
    virtual void forEach(::java::util::function::Consumer* action) = 0;
    virtual void forEachOrdered(::java::util::function::Consumer* action) = 0;
    static Stream* generate(::java::util::function::Supplier* s);
    static Stream* iterate(::java::lang::Object* seed, ::java::util::function::UnaryOperator* f);
    virtual Stream* limit(int64_t maxSize) = 0;
    virtual Stream* map(::java::util::function::Function* mapper) = 0;
    virtual DoubleStream* mapToDouble(::java::util::function::ToDoubleFunction* mapper) = 0;
    virtual IntStream* mapToInt(::java::util::function::ToIntFunction* mapper) = 0;
    virtual LongStream* mapToLong(::java::util::function::ToLongFunction* mapper) = 0;
    virtual ::java::util::Optional* max(::java::util::Comparator* comparator) = 0;
    virtual ::java::util::Optional* min(::java::util::Comparator* comparator) = 0;
    virtual bool noneMatch(::java::util::function::Predicate* predicate) = 0;
    static Stream* of(::java::lang::Object* t);
    static Stream* of(::java::lang::ObjectArray* values);
    virtual Stream* peek(::java::util::function::Consumer* action) = 0;
    virtual ::java::util::Optional* reduce(::java::util::function::BinaryOperator* accumulator) = 0;
    virtual ::java::lang::Object* reduce(::java::lang::Object* identity, ::java::util::function::BinaryOperator* accumulator) = 0;
    virtual ::java::lang::Object* reduce(::java::lang::Object* identity, ::java::util::function::BiFunction* accumulator, ::java::util::function::BinaryOperator* combiner) = 0;
    virtual Stream* skip(int64_t n) = 0;
    virtual Stream* sorted() = 0;
    virtual Stream* sorted(::java::util::Comparator* comparator) = 0;
    virtual ::java::lang::ObjectArray* toArray_() = 0;
    virtual ::java::lang::ObjectArray* toArray_(::java::util::function::IntFunction* generator) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
