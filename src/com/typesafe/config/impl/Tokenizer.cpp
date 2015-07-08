// Generated from /config/src/main/java/com/typesafe/config/impl/Tokenizer.java
#include <com/typesafe/config/impl/Tokenizer.hpp>

#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/Tokenizer_TokenIterator.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Iterator.hpp>
#include <ObjectArray.hpp>

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
com::typesafe::config::impl::Tokenizer::Tokenizer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokenizer::Tokenizer()
    : Tokenizer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* com::typesafe::config::impl::Tokenizer::asString(int32_t codepoint)
{
    clinit();
    if(codepoint == u'\u000a')
        return u"newline"_j;
    else if(codepoint == u'\u0009')
        return u"tab"_j;
    else if(codepoint == -int32_t(1))
        return u"end of file"_j;
    else if(::java::lang::Character::isISOControl(codepoint))
        return ::java::lang::String::format(u"control character 0x%x"_j, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(codepoint))}));
    else
        return ::java::lang::String::format(u"%c"_j, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(codepoint))}));
}

java::util::Iterator* com::typesafe::config::impl::Tokenizer::tokenize(::com::typesafe::config::ConfigOrigin* origin, ::java::io::Reader* input, ::com::typesafe::config::ConfigSyntax* flavor)
{
    clinit();
    return new Tokenizer_TokenIterator(origin, input, flavor != ::com::typesafe::config::ConfigSyntax::JSON);
}

java::lang::String* com::typesafe::config::impl::Tokenizer::render(::java::util::Iterator* tokens)
{
    clinit();
    auto renderedText = new ::java::lang::StringBuilder();
    while (npc(tokens)->hasNext()) {
        npc(renderedText)->append(npc(java_cast< Token* >(npc(tokens)->next()))->tokenText());
    }
    return npc(renderedText)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokenizer::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokenizer", 34);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Tokenizer::getClass0()
{
    return class_();
}

