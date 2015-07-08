// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::IdentityHashMap_IdentityHashMapSpliterator
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t est {  };
    int32_t expectedModCount {  };
    int32_t fence {  };
    int32_t index {  };
    IdentityHashMap* map {  };

protected:
    void ctor(IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);

public:
    int64_t estimateSize();

public: /* package */
    int32_t getFence();

    // Generated
    IdentityHashMap_IdentityHashMapSpliterator(IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);
protected:
    IdentityHashMap_IdentityHashMapSpliterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
