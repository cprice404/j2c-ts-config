// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveMemos.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ResolveMemos final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Map* memos {  };
protected:
    void ctor(::java::util::Map* memos);
    void ctor();

public: /* package */
    AbstractConfigValue* get(MemoKey* key);
    ResolveMemos* put(MemoKey* key, AbstractConfigValue* value);

    // Generated

private:
    ResolveMemos(::java::util::Map* memos);

public: /* package */
    ResolveMemos();
protected:
    ResolveMemos(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
