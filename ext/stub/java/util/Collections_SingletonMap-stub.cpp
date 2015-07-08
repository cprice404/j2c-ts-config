// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/Collections_SingletonMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Collections_SingletonMap::Collections_SingletonMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_SingletonMap::Collections_SingletonMap(::java::lang::Object* key, ::java::lang::Object* value)
    : Collections_SingletonMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(key, value);
}

constexpr int64_t java::util::Collections_SingletonMap::serialVersionUID;

void ::java::util::Collections_SingletonMap::ctor(::java::lang::Object* key, ::java::lang::Object* value)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Collections_SingletonMap::ctor(::java::lang::Object* key, ::java::lang::Object* value)");
}

java::lang::Object* java::util::Collections_SingletonMap::compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SingletonMap::compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)");
    return 0;
}

java::lang::Object* java::util::Collections_SingletonMap::computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SingletonMap::computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction)");
    return 0;
}

java::lang::Object* java::util::Collections_SingletonMap::computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SingletonMap::computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)");
    return 0;
}

bool java::util::Collections_SingletonMap::containsKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"bool java::util::Collections_SingletonMap::containsKey(::java::lang::Object* key)");
    return 0;
}

bool java::util::Collections_SingletonMap::containsValue(::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"bool java::util::Collections_SingletonMap::containsValue(::java::lang::Object* value)");
    return 0;
}

java::util::Set* java::util::Collections_SingletonMap::entrySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::util::Collections_SingletonMap::entrySet()");
    return 0;
}

void java::util::Collections_SingletonMap::forEach(::java::util::function::BiConsumer* action)
{ /* stub */
    unimplemented_(u"void java::util::Collections_SingletonMap::forEach(::java::util::function::BiConsumer* action)");
}

java::lang::Object* java::util::Collections_SingletonMap::get(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SingletonMap::get(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::Collections_SingletonMap::getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SingletonMap::getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue)");
    return 0;
}

bool java::util::Collections_SingletonMap::isEmpty()
{ /* stub */
    unimplemented_(u"bool java::util::Collections_SingletonMap::isEmpty()");
    return 0;
}

java::util::Set* java::util::Collections_SingletonMap::keySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::util::Collections_SingletonMap::keySet()");
    return 0;
}

java::lang::Object* java::util::Collections_SingletonMap::merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SingletonMap::merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction)");
    return 0;
}

java::lang::Object* java::util::Collections_SingletonMap::putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SingletonMap::putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value)");
    return 0;
}

bool java::util::Collections_SingletonMap::remove(::java::lang::Object* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"bool java::util::Collections_SingletonMap::remove(::java::lang::Object* key, ::java::lang::Object* value)");
    return 0;
}

java::lang::Object* java::util::Collections_SingletonMap::replace(::java::lang::Object* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SingletonMap::replace(::java::lang::Object* key, ::java::lang::Object* value)");
    return 0;
}

bool java::util::Collections_SingletonMap::replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{ /* stub */
    unimplemented_(u"bool java::util::Collections_SingletonMap::replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)");
    return 0;
}

void java::util::Collections_SingletonMap::replaceAll(::java::util::function::BiFunction* function)
{ /* stub */
    unimplemented_(u"void java::util::Collections_SingletonMap::replaceAll(::java::util::function::BiFunction* function)");
}

int32_t java::util::Collections_SingletonMap::size()
{ /* stub */
    unimplemented_(u"int32_t java::util::Collections_SingletonMap::size()");
    return 0;
}

java::util::Collection* java::util::Collections_SingletonMap::values()
{ /* stub */
    unimplemented_(u"java::util::Collection* java::util::Collections_SingletonMap::values()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::Collections_SingletonMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.SingletonMap", 34);
    return c;
}

java::lang::Object* java::util::Collections_SingletonMap::remove(::java::lang::Object* key)
{
    return super::remove(key);
}

java::lang::Class* java::util::Collections_SingletonMap::getClass0()
{
    return class_();
}

