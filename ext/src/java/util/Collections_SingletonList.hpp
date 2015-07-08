// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/AbstractList.hpp>
#include <java/util/RandomAccess.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_SingletonList
    : public AbstractList
    , public virtual RandomAccess
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractList super;

private:
    ::java::lang::Object* element {  };
    static constexpr int64_t serialVersionUID { int64_t(3093736618740652951LL) };

protected:
    void ctor(::java::lang::Object* obj);

public:
    bool contains(::java::lang::Object* obj) override;
    void forEach(::java::util::function::Consumer* action) override;
    ::java::lang::Object* get(int32_t index) override;
    Iterator* iterator() override;
    bool removeIf(::java::util::function::Predicate* filter) override;
    void replaceAll(::java::util::function::UnaryOperator* operator_) override;
    int32_t size() override;
    void sort(Comparator* c) override;
    Spliterator* spliterator() override;

    // Generated

public: /* package */
    Collections_SingletonList(::java::lang::Object* obj);
protected:
    Collections_SingletonList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
