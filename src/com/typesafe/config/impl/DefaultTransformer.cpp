// Generated from /config/src/main/java/com/typesafe/config/impl/DefaultTransformer.java
#include <com/typesafe/config/impl/DefaultTransformer.hpp>

#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigBoolean.hpp>
#include <com/typesafe/config/impl/ConfigDouble.hpp>
#include <com/typesafe/config/impl/ConfigLong.hpp>
#include <com/typesafe/config/impl/ConfigNull.hpp>
#include <com/typesafe/config/impl/ConfigString_Quoted.hpp>
#include <com/typesafe/config/impl/DefaultTransformer_transform_1.hpp>
#include <com/typesafe/config/impl/SimpleConfigList.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>

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
com::typesafe::config::impl::DefaultTransformer::DefaultTransformer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::DefaultTransformer::DefaultTransformer()
    : DefaultTransformer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::DefaultTransformer::transform(AbstractConfigValue* value, ::com::typesafe::config::ConfigValueType* requested)
{
    clinit();
    if(npc(value)->valueType() == ::com::typesafe::config::ConfigValueType::STRING) {
        auto s = java_cast< ::java::lang::String* >(npc(value)->unwrapped());
        {
            auto v = requested;
            if((v == ::com::typesafe::config::ConfigValueType::NUMBER)) {
                try {
                    ::java::lang::Long* v = ::java::lang::Long::valueOf(::java::lang::Long::parseLong(s));
                    return new ConfigLong(npc(value)->origin(), (npc(v))->longValue(), s);
                } catch (::java::lang::NumberFormatException* e) {
                }
                try {
                    ::java::lang::Double* v = ::java::lang::Double::valueOf(::java::lang::Double::parseDouble(s));
                    return new ConfigDouble(npc(value)->origin(), (npc(v))->doubleValue(), s);
                } catch (::java::lang::NumberFormatException* e) {
                }
                goto end_switch0;;
            }
            if((v == ::com::typesafe::config::ConfigValueType::NULL_)) {
                if(npc(s)->equals(u"null"_j))
                    return new ConfigNull(npc(value)->origin());

                goto end_switch0;;
            }
            if((v == ::com::typesafe::config::ConfigValueType::BOOLEAN)) {
                if(npc(s)->equals(u"true"_j) || npc(s)->equals(u"yes"_j) || npc(s)->equals(u"on"_j)) {
                    return new ConfigBoolean(npc(value)->origin(), true);
                } else if(npc(s)->equals(u"false"_j) || npc(s)->equals(u"no"_j) || npc(s)->equals(u"off"_j)) {
                    return new ConfigBoolean(npc(value)->origin(), false);
                }
                goto end_switch0;;
            }
            if((v == ::com::typesafe::config::ConfigValueType::LIST)) {
                goto end_switch0;;
            }
            if((v == ::com::typesafe::config::ConfigValueType::OBJECT)) {
                goto end_switch0;;
            }
            if((v == ::com::typesafe::config::ConfigValueType::STRING)) {
                goto end_switch0;;
            }
end_switch0:;
        }

    } else if(requested == ::com::typesafe::config::ConfigValueType::STRING) {
        {
            auto v = npc(value)->valueType();
            if((v == ::com::typesafe::config::ConfigValueType::NUMBER) || (v == ::com::typesafe::config::ConfigValueType::BOOLEAN)) {
                return new ConfigString_Quoted(npc(value)->origin(), npc(value)->transformToString());
            }
            if((v == ::com::typesafe::config::ConfigValueType::NULL_)) {
                goto end_switch1;;
            }
            if((v == ::com::typesafe::config::ConfigValueType::OBJECT)) {
                goto end_switch1;;
            }
            if((v == ::com::typesafe::config::ConfigValueType::LIST)) {
                goto end_switch1;;
            }
            if((v == ::com::typesafe::config::ConfigValueType::STRING)) {
                goto end_switch1;;
            }
end_switch1:;
        }

    } else if(requested == ::com::typesafe::config::ConfigValueType::LIST && npc(value)->valueType() == ::com::typesafe::config::ConfigValueType::OBJECT) {
        auto o = java_cast< AbstractConfigObject* >(value);
        ::java::util::Map* values = new ::java::util::HashMap();
        for (auto _i = npc(npc(o)->keySet())->iterator(); _i->hasNext(); ) {
            ::java::lang::String* key = java_cast< ::java::lang::String* >(_i->next());
            {
                int32_t i;
                try {
                    i = ::java::lang::Integer::parseInt(key, 10);
                    if(i < 0)
                        continue;

                    npc(values)->put(::java::lang::Integer::valueOf(i), npc(o)->get(key));
                } catch (::java::lang::NumberFormatException* e) {
                    continue;
                }
            }
        }
        if(!npc(values)->isEmpty()) {
            auto entryList = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(npc(values)->entrySet()));
            ::java::util::Collections::sort(entryList, new DefaultTransformer_transform_1());
            auto list = new ::java::util::ArrayList();
            for (auto _i = npc(entryList)->iterator(); _i->hasNext(); ) {
                ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
                {
                    npc(list)->add(java_cast< AbstractConfigValue* >(npc(entry)->getValue()));
                }
            }
            return new SimpleConfigList(npc(value)->origin(), list);
        }
    }
    return value;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::DefaultTransformer::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.DefaultTransformer", 43);
    return c;
}

java::lang::Class* com::typesafe::config::impl::DefaultTransformer::getClass0()
{
    return class_();
}

