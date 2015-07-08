// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Spliterator.hpp>

struct default_init_tag;

class java::util::Vector_VectorSpliterator final
    : public virtual ::java::lang::Object
    , public Spliterator
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::ObjectArray* array {  };
    int32_t expectedModCount {  };
    int32_t fence {  };
    int32_t index {  };
    Vector* list {  };

protected:
    void ctor(Vector* list, ::java::lang::ObjectArray* array, int32_t origin, int32_t fence, int32_t expectedModCount);

public:
    int32_t characteristics() override;
    int64_t estimateSize() override;
    void forEachRemaining(::java::util::function::Consumer* action) override;
    /*int32_t getFence(); (private) */
    bool tryAdvance(::java::util::function::Consumer* action) override;
    Spliterator* trySplit() override;

    // Generated

public: /* package */
    Vector_VectorSpliterator(Vector* list, ::java::lang::ObjectArray* array, int32_t origin, int32_t fence, int32_t expectedModCount);
protected:
    Vector_VectorSpliterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
