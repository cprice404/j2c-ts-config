// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Spliterator.hpp>

struct default_init_tag;

class java::util::LinkedList_LLSpliterator final
    : public virtual ::java::lang::Object
    , public Spliterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static constexpr int32_t BATCH_UNIT { int32_t(1024) };
    static constexpr int32_t MAX_BATCH { int32_t(33554432) };
    int32_t batch {  };
    LinkedList_Node* current {  };
    int32_t est {  };
    int32_t expectedModCount {  };
    LinkedList* list {  };

protected:
    void ctor(LinkedList* list, int32_t est, int32_t expectedModCount);

public:
    int32_t characteristics() override;
    int64_t estimateSize() override;
    void forEachRemaining(::java::util::function::Consumer* action) override;

public: /* package */
    int32_t getEst();

public:
    bool tryAdvance(::java::util::function::Consumer* action) override;
    Spliterator* trySplit() override;

    // Generated

public: /* package */
    LinkedList_LLSpliterator(LinkedList* list, int32_t est, int32_t expectedModCount);
protected:
    LinkedList_LLSpliterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
