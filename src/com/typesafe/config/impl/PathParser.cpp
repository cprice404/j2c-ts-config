// Generated from /config/src/main/java/com/typesafe/config/impl/PathParser.java
#include <com/typesafe/config/impl/PathParser.hpp>

#include <com/typesafe/config/ConfigException_BadPath.hpp>
#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/ConfigNodePath.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/PathBuilder.hpp>
#include <com/typesafe/config/impl/PathParser_Element.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/Tokenizer.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/io/Serializable.hpp>
#include <java/io/StringReader.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
}  // namespace lang
}  // namespace java

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
namespace
{
template<typename F>
struct finally_
{
    finally_(F f) : f(f), moved(false) { }
    finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
    ~finally_() { if(!moved) f(); }
private:
    finally_(const finally_&); finally_& operator=(const finally_&);
    F f;
    bool moved;
};

template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
com::typesafe::config::impl::PathParser::PathParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::PathParser::PathParser()
    : PathParser(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::ConfigOrigin*& com::typesafe::config::impl::PathParser::apiOrigin()
{
    clinit();
    return apiOrigin_;
}
com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::PathParser::apiOrigin_;

com::typesafe::config::impl::ConfigNodePath* com::typesafe::config::impl::PathParser::parsePathNode(::java::lang::String* path)
{
    clinit();
    return parsePathNode(path, ::com::typesafe::config::ConfigSyntax::CONF);
}

com::typesafe::config::impl::ConfigNodePath* com::typesafe::config::impl::PathParser::parsePathNode(::java::lang::String* path, ::com::typesafe::config::ConfigSyntax* flavor)
{
    clinit();
    auto reader = new ::java::io::StringReader(path);
    {
        auto finally0 = finally([&] {
            npc(reader)->close();
        });
        {
            auto tokens = Tokenizer::tokenize(apiOrigin_, reader, flavor);
            npc(tokens)->next();
            return parsePathNodeExpression(tokens, apiOrigin_, path, flavor);
        }
    }

}

com::typesafe::config::impl::Path* com::typesafe::config::impl::PathParser::parsePath(::java::lang::String* path)
{
    clinit();
    auto speculated = speculativeFastParsePath(path);
    if(speculated != nullptr)
        return speculated;

    auto reader = new ::java::io::StringReader(path);
    {
        auto finally1 = finally([&] {
            npc(reader)->close();
        });
        {
            auto tokens = Tokenizer::tokenize(apiOrigin_, reader, ::com::typesafe::config::ConfigSyntax::CONF);
            npc(tokens)->next();
            return parsePathExpression(tokens, apiOrigin_, path);
        }
    }

}

com::typesafe::config::impl::Path* com::typesafe::config::impl::PathParser::parsePathExpression(::java::util::Iterator* expression, ::com::typesafe::config::ConfigOrigin* origin)
{
    clinit();
    return parsePathExpression(expression, origin, nullptr, nullptr, ::com::typesafe::config::ConfigSyntax::CONF);
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::PathParser::parsePathExpression(::java::util::Iterator* expression, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* originalText)
{
    clinit();
    return parsePathExpression(expression, origin, originalText, nullptr, ::com::typesafe::config::ConfigSyntax::CONF);
}

com::typesafe::config::impl::ConfigNodePath* com::typesafe::config::impl::PathParser::parsePathNodeExpression(::java::util::Iterator* expression, ::com::typesafe::config::ConfigOrigin* origin)
{
    clinit();
    return parsePathNodeExpression(expression, origin, nullptr, ::com::typesafe::config::ConfigSyntax::CONF);
}

com::typesafe::config::impl::ConfigNodePath* com::typesafe::config::impl::PathParser::parsePathNodeExpression(::java::util::Iterator* expression, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* originalText, ::com::typesafe::config::ConfigSyntax* flavor)
{
    clinit();
    auto pathTokens = new ::java::util::ArrayList();
    auto path = parsePathExpression(expression, origin, originalText, pathTokens, flavor);
    return new ConfigNodePath(path, pathTokens);
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::PathParser::parsePathExpression(::java::util::Iterator* expression, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* originalText, ::java::util::ArrayList* pathTokens, ::com::typesafe::config::ConfigSyntax* flavor)
{
    clinit();
    ::java::util::List* buf = new ::java::util::ArrayList();
    npc(buf)->add(new PathParser_Element(u""_j, false));
    if(!npc(expression)->hasNext()) {
        throw new ::com::typesafe::config::ConfigException_BadPath(origin, originalText, u"Expecting a field name or path here, but got nothing"_j);
    }
    while (npc(expression)->hasNext()) {
        auto t = java_cast< Token* >(npc(expression)->next());
        if(pathTokens != nullptr)
            npc(pathTokens)->add(t);

        if(Tokens::isIgnoredWhitespace(t))
            continue;

        if(Tokens::isValueWithType(t, ::com::typesafe::config::ConfigValueType::STRING)) {
            auto v = Tokens::getValue(t);
            auto s = npc(v)->transformToString();
            addPathText(buf, true, s);
        } else if(t == Tokens::END()) {
        } else {
            ::java::lang::String* text;
            if(Tokens::isValue(t)) {
                auto v = Tokens::getValue(t);
                if(pathTokens != nullptr) {
                    npc(pathTokens)->remove(npc(pathTokens)->size() - int32_t(1));
                    npc(pathTokens)->addAll(splitTokenOnPeriod(t, flavor));
                }
                text = npc(v)->transformToString();
            } else if(Tokens::isUnquotedText(t)) {
                if(pathTokens != nullptr) {
                    npc(pathTokens)->remove(npc(pathTokens)->size() - int32_t(1));
                    npc(pathTokens)->addAll(splitTokenOnPeriod(t, flavor));
                }
                text = Tokens::getUnquotedText(t);
            } else {
                throw new ::com::typesafe::config::ConfigException_BadPath(origin, originalText, ::java::lang::StringBuilder().append(u"Token not allowed in path expression: "_j)->append(static_cast< ::java::lang::Object* >(t))
                    ->append(u" (you can double-quote this token if you really want it here)"_j)->toString());
            }
            addPathText(buf, false, text);
        }
    }
    auto pb = new PathBuilder();
    for (auto _i = npc(buf)->iterator(); _i->hasNext(); ) {
        PathParser_Element* e = java_cast< PathParser_Element* >(_i->next());
        {
            if(npc(npc(e)->sb)->length() == 0 && !npc(e)->canBeEmpty) {
                throw new ::com::typesafe::config::ConfigException_BadPath(origin, originalText, u"path has a leading, trailing, or two adjacent period '.' (use quoted \"\" empty string if you want an empty element)"_j);
            } else {
                npc(pb)->appendKey(npc(npc(e)->sb)->toString());
            }
        }
    }
    return npc(pb)->result();
}

java::util::Collection* com::typesafe::config::impl::PathParser::splitTokenOnPeriod(Token* t, ::com::typesafe::config::ConfigSyntax* flavor)
{
    clinit();
    auto tokenText = npc(t)->tokenText();
    if(npc(tokenText)->equals(u"."_j)) {
        return ::java::util::Collections::singletonList(t);
    }
    auto splitToken = npc(tokenText)->split(u"\\."_j);
    auto splitTokens = new ::java::util::ArrayList();
    for(auto s : *npc(splitToken)) {
        if(flavor == ::com::typesafe::config::ConfigSyntax::CONF)
            npc(splitTokens)->add(Tokens::newUnquotedText(npc(t)->origin(), s));
        else
            npc(splitTokens)->add(Tokens::newString(npc(t)->origin(), s, ::java::lang::StringBuilder().append(u"\""_j)->append(s)
                ->append(u"\""_j)->toString()));
        npc(splitTokens)->add(Tokens::newUnquotedText(npc(t)->origin(), u"."_j));
    }
    if(npc(tokenText)->charAt(npc(tokenText)->length() - int32_t(1)) != u'.')
        npc(splitTokens)->remove(npc(splitTokens)->size() - int32_t(1));

    return splitTokens;
}

void com::typesafe::config::impl::PathParser::addPathText(::java::util::List* buf, bool wasQuoted, ::java::lang::String* newText)
{
    clinit();
    auto i = wasQuoted ? -int32_t(1) : npc(newText)->indexOf(static_cast< int32_t >(u'.'));
    auto current = java_cast< PathParser_Element* >(npc(buf)->get(npc(buf)->size() - int32_t(1)));
    if(i < 0) {
        npc(npc(current)->sb)->append(newText);
        if(wasQuoted && npc(npc(current)->sb)->length() == 0)
            npc(current)->canBeEmpty = true;

    } else {
        npc(npc(current)->sb)->append(npc(newText)->substring(0, i));
        npc(buf)->add(new PathParser_Element(u""_j, false));
        addPathText(buf, false, npc(newText)->substring(i + int32_t(1)));
    }
}

bool com::typesafe::config::impl::PathParser::looksUnsafeForFastParser(::java::lang::String* s)
{
    clinit();
    auto lastWasDot = true;
    auto len = npc(s)->length();
    if(npc(s)->isEmpty())
        return true;

    if(npc(s)->charAt(0) == u'.')
        return true;

    if(npc(s)->charAt(len - int32_t(1)) == u'.')
        return true;

    for (auto i = int32_t(0); i < len; ++i) {
        auto c = npc(s)->charAt(i);
        if((c >= u'a' && c <= u'z') || (c >= u'A' && c <= u'Z') || c == u'_') {
            lastWasDot = false;
            continue;
        } else if(c == u'.') {
            if(lastWasDot)
                return true;

            lastWasDot = true;
        } else if(c == u'-') {
            if(lastWasDot)
                return true;

            continue;
        } else {
            return true;
        }
    }
    if(lastWasDot)
        return true;

    return false;
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::PathParser::fastPathBuild(Path* tail, ::java::lang::String* s, int32_t end)
{
    clinit();
    auto splitAt = npc(s)->lastIndexOf(static_cast< int32_t >(u'.'), end - int32_t(1));
    auto tokens = new ::java::util::ArrayList();
    npc(tokens)->add(Tokens::newUnquotedText(nullptr, s));
    auto withOneMoreElement = new Path(npc(s)->substring(splitAt + int32_t(1), end), tail);
    if(splitAt < 0) {
        return withOneMoreElement;
    } else {
        return fastPathBuild(withOneMoreElement, s, splitAt);
    }
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::PathParser::speculativeFastParsePath(::java::lang::String* path)
{
    clinit();
    auto s = ConfigImplUtil::unicodeTrim(path);
    if(looksUnsafeForFastParser(s))
        return nullptr;

    return fastPathBuild(nullptr, s, npc(s)->length());
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::PathParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.PathParser", 35);
    return c;
}

void com::typesafe::config::impl::PathParser::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        apiOrigin_ = SimpleConfigOrigin::newSimple(u"path parameter"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::typesafe::config::impl::PathParser::getClass0()
{
    return class_();
}

