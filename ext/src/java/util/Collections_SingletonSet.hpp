// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_SingletonSet
    : public AbstractSet
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractSet super;

private:
    ::java::lang::Object* element {  };
    static constexpr int64_t serialVersionUID { int64_t(3193687207550431679LL) };

protected:
    void ctor(::java::lang::Object* e);

public:
    bool contains(::java::lang::Object* o) override;
    void forEach(::java::util::function::Consumer* action) override;
    Iterator* iterator() override;
    bool removeIf(::java::util::function::Predicate* filter) override;
    int32_t size() override;
    Spliterator* spliterator() override;

    // Generated

public: /* package */
    Collections_SingletonSet(::java::lang::Object* e);
protected:
    Collections_SingletonSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
