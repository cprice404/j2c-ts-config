// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigOrigin.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfigOrigin final
    : public virtual ::java::lang::Object
    , public ::com::typesafe::config::ConfigOrigin
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* description_ {  };
    int32_t lineNumber_ {  };
    int32_t endLineNumber {  };
    OriginType* originType {  };
    ::java::lang::String* urlOrNull {  };
    ::java::lang::String* resourceOrNull {  };
    ::java::util::List* commentsOrNull {  };
protected:
    void ctor(::java::lang::String* description, int32_t lineNumber, int32_t endLineNumber, OriginType* originType, ::java::lang::String* urlOrNull, ::java::lang::String* resourceOrNull, ::java::util::List* commentsOrNull);

public: /* package */
    static SimpleConfigOrigin* newSimple(::java::lang::String* description);
    static SimpleConfigOrigin* newFile(::java::lang::String* filename);
    static SimpleConfigOrigin* newURL(::java::net::URL* url);
    static SimpleConfigOrigin* newResource(::java::lang::String* resource, ::java::net::URL* url);
    static SimpleConfigOrigin* newResource(::java::lang::String* resource);

public:
    SimpleConfigOrigin* withLineNumber(int32_t lineNumber) override;

public: /* package */
    SimpleConfigOrigin* addURL(::java::net::URL* url);

public:
    SimpleConfigOrigin* withComments(::java::util::List* comments) override;

public: /* package */
    SimpleConfigOrigin* prependComments(::java::util::List* comments);
    SimpleConfigOrigin* appendComments(::java::util::List* comments);

public:
    ::java::lang::String* description() override;
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;
    ::java::lang::String* filename() override;
    ::java::net::URL* url() override;
    ::java::lang::String* resource() override;
    int32_t lineNumber() override;
    ::java::util::List* comments() override;

private:
    static ::java::lang::String* MERGE_OF_PREFIX_;
    static SimpleConfigOrigin* mergeTwo(SimpleConfigOrigin* a, SimpleConfigOrigin* b);
    static int32_t similarity(SimpleConfigOrigin* a, SimpleConfigOrigin* b);
    static SimpleConfigOrigin* mergeThree(SimpleConfigOrigin* a, SimpleConfigOrigin* b, SimpleConfigOrigin* c);

public: /* package */
    static ::com::typesafe::config::ConfigOrigin* mergeOrigins(::com::typesafe::config::ConfigOrigin* a, ::com::typesafe::config::ConfigOrigin* b);
    static ::com::typesafe::config::ConfigOrigin* mergeOrigins(::java::util::List* stack);
    static ::com::typesafe::config::ConfigOrigin* mergeOrigins(::java::util::Collection* stack);
    ::java::util::Map* toFields();
    ::java::util::Map* toFieldsDelta(SimpleConfigOrigin* baseOrigin);
    static ::java::util::Map* fieldsDelta(::java::util::Map* base, ::java::util::Map* child);
    static SimpleConfigOrigin* fromFields(::java::util::Map* m) /* throws(IOException) */;
    static ::java::util::Map* applyFieldsDelta(::java::util::Map* base, ::java::util::Map* delta) /* throws(IOException) */;
    static SimpleConfigOrigin* fromBase(SimpleConfigOrigin* baseOrigin, ::java::util::Map* delta) /* throws(IOException) */;

    // Generated

public: /* protected */
    SimpleConfigOrigin(::java::lang::String* description, int32_t lineNumber, int32_t endLineNumber, OriginType* originType, ::java::lang::String* urlOrNull, ::java::lang::String* resourceOrNull, ::java::util::List* commentsOrNull);
protected:
    SimpleConfigOrigin(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* package */
    static ::java::lang::String*& MERGE_OF_PREFIX();

private:
    virtual ::java::lang::Class* getClass0();
};
