// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/Collections_CheckedList.hpp>
#include <java/util/RandomAccess.hpp>

struct default_init_tag;

class java::util::Collections_CheckedRandomAccessList
    : public Collections_CheckedList
    , public virtual RandomAccess
{

public:
    typedef Collections_CheckedList super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1638200125423088369LL) };

protected:
    void ctor(List* list, ::java::lang::Class* type);

public:
    List* subList(int32_t fromIndex, int32_t toIndex) override;

    // Generated

public: /* package */
    Collections_CheckedRandomAccessList(List* list, ::java::lang::Class* type);
protected:
    Collections_CheckedRandomAccessList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
