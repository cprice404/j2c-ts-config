// Generated from /config/src/main/java/com/typesafe/config/impl/Tokenizer.java
#include <com/typesafe/config/impl/Tokenizer_ProblemException.hpp>

#include <com/typesafe/config/impl/Token.hpp>

com::typesafe::config::impl::Tokenizer_ProblemException::Tokenizer_ProblemException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokenizer_ProblemException::Tokenizer_ProblemException(Token* problem) 
    : Tokenizer_ProblemException(*static_cast< ::default_init_tag* >(0))
{
    ctor(problem);
}

constexpr int64_t com::typesafe::config::impl::Tokenizer_ProblemException::serialVersionUID;

void com::typesafe::config::impl::Tokenizer_ProblemException::ctor(Token* problem)
{
    super::ctor();
    this->problem_ = problem;
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_ProblemException::problem()
{
    return problem_;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokenizer_ProblemException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokenizer.ProblemException", 51);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Tokenizer_ProblemException::getClass0()
{
    return class_();
}

