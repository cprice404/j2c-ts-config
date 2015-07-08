// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::LinkedList_Node
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::Object* item {  };
    LinkedList_Node* next {  };
    LinkedList_Node* prev {  };

protected:
    void ctor(LinkedList_Node* prev, ::java::lang::Object* element, LinkedList_Node* next);

    // Generated

public: /* package */
    LinkedList_Node(LinkedList_Node* prev, ::java::lang::Object* element, LinkedList_Node* next);
protected:
    LinkedList_Node(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
