// Generated from /config/src/main/java/com/typesafe/config/impl/PathParser.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::PathParser final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::com::typesafe::config::ConfigOrigin* apiOrigin_;

public: /* package */
    static ConfigNodePath* parsePathNode(::java::lang::String* path);
    static ConfigNodePath* parsePathNode(::java::lang::String* path, ::com::typesafe::config::ConfigSyntax* flavor);
    static Path* parsePath(::java::lang::String* path);

public: /* protected */
    static Path* parsePathExpression(::java::util::Iterator* expression, ::com::typesafe::config::ConfigOrigin* origin);
    static Path* parsePathExpression(::java::util::Iterator* expression, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* originalText);
    static ConfigNodePath* parsePathNodeExpression(::java::util::Iterator* expression, ::com::typesafe::config::ConfigOrigin* origin);
    static ConfigNodePath* parsePathNodeExpression(::java::util::Iterator* expression, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* originalText, ::com::typesafe::config::ConfigSyntax* flavor);
    static Path* parsePathExpression(::java::util::Iterator* expression, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* originalText, ::java::util::ArrayList* pathTokens, ::com::typesafe::config::ConfigSyntax* flavor);

private:
    static ::java::util::Collection* splitTokenOnPeriod(Token* t, ::com::typesafe::config::ConfigSyntax* flavor);
    static void addPathText(::java::util::List* buf, bool wasQuoted, ::java::lang::String* newText);
    static bool looksUnsafeForFastParser(::java::lang::String* s);
    static Path* fastPathBuild(Path* tail, ::java::lang::String* s, int32_t end);
    static Path* speculativeFastParsePath(::java::lang::String* path);

    // Generated

public:
    PathParser();
protected:
    PathParser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* package */
    static ::com::typesafe::config::ConfigOrigin*& apiOrigin();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PathParser_Element;
};
