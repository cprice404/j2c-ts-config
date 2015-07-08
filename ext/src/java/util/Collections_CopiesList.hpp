// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/util/AbstractList.hpp>
#include <java/util/RandomAccess.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_CopiesList
    : public AbstractList
    , public virtual RandomAccess
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractList super;

private:
    static bool $assertionsDisabled_;

public: /* package */
    ::java::lang::Object* element {  };
    int32_t n {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(2739099268398711800LL) };

protected:
    void ctor(int32_t n, ::java::lang::Object* e);

public:
    bool contains(::java::lang::Object* obj) override;
    ::java::lang::Object* get(int32_t index) override;
    int32_t indexOf(::java::lang::Object* o) override;
    int32_t lastIndexOf(::java::lang::Object* o) override;
    ::java::util::stream::Stream* parallelStream() override;
    int32_t size() override;
    Spliterator* spliterator() override;
    ::java::util::stream::Stream* stream() override;
    List* subList(int32_t fromIndex, int32_t toIndex) override;
    ::java::lang::ObjectArray* toArray_() override;
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;

    // Generated

public: /* package */
    Collections_CopiesList(int32_t n, ::java::lang::Object* e);
protected:
    Collections_CopiesList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

private:
    virtual ::java::lang::Class* getClass0();
};
