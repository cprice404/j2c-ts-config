// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/Collections_SynchronizedList.hpp>
#include <java/util/RandomAccess.hpp>

struct default_init_tag;

class java::util::Collections_SynchronizedRandomAccessList
    : public Collections_SynchronizedList
    , public virtual RandomAccess
{

public:
    typedef Collections_SynchronizedList super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1530674583602358482LL) };

protected:
    void ctor(List* list);
    void ctor(List* list, ::java::lang::Object* mutex);

public:
    List* subList(int32_t fromIndex, int32_t toIndex) override;
    /*::java::lang::Object* writeReplace(); (private) */

    // Generated

public: /* package */
    Collections_SynchronizedRandomAccessList(List* list);
    Collections_SynchronizedRandomAccessList(List* list, ::java::lang::Object* mutex);
protected:
    Collections_SynchronizedRandomAccessList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
