// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodePath.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigNode.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNodePath final
    : public AbstractConfigNode
{

public:
    typedef AbstractConfigNode super;

private:
    Path* path {  };

public: /* package */
    ::java::util::ArrayList* tokens_ {  };
protected:
    void ctor(Path* path, ::java::util::Collection* tokens);

public: /* protected */
    ::java::util::Collection* tokens() override;
    Path* value();
    ConfigNodePath* subPath(int32_t toRemove);
    ConfigNodePath* first();

    // Generated

public: /* package */
    ConfigNodePath(Path* path, ::java::util::Collection* tokens);
protected:
    ConfigNodePath(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
