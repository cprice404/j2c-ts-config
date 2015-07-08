// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::HashMap_Node
    : public virtual ::java::lang::Object
    , public virtual Map_Entry
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t hash {  };
    ::java::lang::Object* key {  };
    HashMap_Node* next {  };
    ::java::lang::Object* value {  };

protected:
    void ctor(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* next);

public:
    bool equals(::java::lang::Object* o) override;
    ::java::lang::Object* getKey() override;
    ::java::lang::Object* getValue() override;
    int32_t hashCode() override;
    ::java::lang::Object* setValue(::java::lang::Object* newValue) override;
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    HashMap_Node(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* next);
protected:
    HashMap_Node(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
