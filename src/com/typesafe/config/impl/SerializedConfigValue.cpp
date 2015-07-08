// Generated from /config/src/main/java/com/typesafe/config/impl/SerializedConfigValue.java
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>

#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException.hpp>
#include <com/typesafe/config/ConfigList.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigBoolean.hpp>
#include <com/typesafe/config/impl/ConfigDouble.hpp>
#include <com/typesafe/config/impl/ConfigInt.hpp>
#include <com/typesafe/config/impl/ConfigLong.hpp>
#include <com/typesafe/config/impl/ConfigNull.hpp>
#include <com/typesafe/config/impl/ConfigNumber.hpp>
#include <com/typesafe/config/impl/ConfigString_Quoted.hpp>
#include <com/typesafe/config/impl/ConfigString.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue_FieldOut.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue_SerializedField.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue_SerializedValueType.hpp>
#include <com/typesafe/config/impl/SimpleConfigList.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/DataInput.hpp>
#include <java/io/DataOutput.hpp>
#include <java/io/IOException.hpp>
#include <java/io/NotSerializableException.hpp>
#include <java/io/ObjectInput.hpp>
#include <java/io/ObjectOutput.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collections.hpp>
#include <java/util/EnumMap.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <Array.hpp>

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
com::typesafe::config::impl::SerializedConfigValue::SerializedConfigValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SerializedConfigValue::SerializedConfigValue() 
    : SerializedConfigValue(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::impl::SerializedConfigValue::SerializedConfigValue(::com::typesafe::config::ConfigValue* value) 
    : SerializedConfigValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

com::typesafe::config::impl::SerializedConfigValue::SerializedConfigValue(::com::typesafe::config::Config* conf) 
    : SerializedConfigValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(conf);
}

constexpr int64_t com::typesafe::config::impl::SerializedConfigValue::serialVersionUID;

void com::typesafe::config::impl::SerializedConfigValue::ctor()
{
    super::ctor(nullptr);
}

void com::typesafe::config::impl::SerializedConfigValue::ctor(::com::typesafe::config::ConfigValue* value)
{
    ctor();
    this->value = value;
    this->wasConfig = false;
}

void com::typesafe::config::impl::SerializedConfigValue::ctor(::com::typesafe::config::Config* conf)
{
    ctor(static_cast< ::com::typesafe::config::ConfigValue* >(npc(conf)->root()));
    this->wasConfig = true;
}

java::lang::Object* com::typesafe::config::impl::SerializedConfigValue::readResolve() /* throws(ObjectStreamException) */
{
    if(wasConfig)
        return npc((java_cast< ::com::typesafe::config::ConfigObject* >(value)))->toConfig();
    else
        return value;
}

void com::typesafe::config::impl::SerializedConfigValue::writeOriginField(::java::io::DataOutput* out, SerializedConfigValue_SerializedField* code, ::java::lang::Object* v) /* throws(IOException) */
{
    clinit();
    {
        ::java::util::List* list;
        int32_t size;
        {
            auto v_ = code;
            if((v_ == SerializedConfigValue_SerializedField::ORIGIN_DESCRIPTION)) {
                npc(out)->writeUTF(java_cast< ::java::lang::String* >(v));
                goto end_switch0;;
            }
            if((v_ == SerializedConfigValue_SerializedField::ORIGIN_LINE_NUMBER)) {
                npc(out)->writeInt((npc(java_cast< ::java::lang::Integer* >(v)))->intValue());
                goto end_switch0;;
            }
            if((v_ == SerializedConfigValue_SerializedField::ORIGIN_END_LINE_NUMBER)) {
                npc(out)->writeInt((npc(java_cast< ::java::lang::Integer* >(v)))->intValue());
                goto end_switch0;;
            }
            if((v_ == SerializedConfigValue_SerializedField::ORIGIN_TYPE)) {
                npc(out)->writeByte((npc(java_cast< ::java::lang::Integer* >(v)))->intValue());
                goto end_switch0;;
            }
            if((v_ == SerializedConfigValue_SerializedField::ORIGIN_URL)) {
                npc(out)->writeUTF(java_cast< ::java::lang::String* >(v));
                goto end_switch0;;
            }
            if((v_ == SerializedConfigValue_SerializedField::ORIGIN_RESOURCE)) {
                npc(out)->writeUTF(java_cast< ::java::lang::String* >(v));
                goto end_switch0;;
            }
            if((v_ == SerializedConfigValue_SerializedField::ORIGIN_COMMENTS)) {
                auto list = java_cast< ::java::util::List* >(v);
                auto size = npc(list)->size();
                npc(out)->writeInt(size);
                for (auto _i = npc(list)->iterator(); _i->hasNext(); ) {
                    ::java::lang::String* s = java_cast< ::java::lang::String* >(_i->next());
                    {
                        npc(out)->writeUTF(s);
                    }
                }
                goto end_switch0;;
            }
            if((v_ == SerializedConfigValue_SerializedField::ORIGIN_NULL_URL) || (v_ == SerializedConfigValue_SerializedField::ORIGIN_NULL_RESOURCE) || (v_ == SerializedConfigValue_SerializedField::ORIGIN_NULL_COMMENTS)) {
                goto end_switch0;;
            }
            if((((v_ != SerializedConfigValue_SerializedField::ORIGIN_DESCRIPTION) && (v_ != SerializedConfigValue_SerializedField::ORIGIN_LINE_NUMBER) && (v_ != SerializedConfigValue_SerializedField::ORIGIN_END_LINE_NUMBER) && (v_ != SerializedConfigValue_SerializedField::ORIGIN_TYPE) && (v_ != SerializedConfigValue_SerializedField::ORIGIN_URL) && (v_ != SerializedConfigValue_SerializedField::ORIGIN_RESOURCE) && (v_ != SerializedConfigValue_SerializedField::ORIGIN_COMMENTS) && (v_ != SerializedConfigValue_SerializedField::ORIGIN_NULL_URL) && (v_ != SerializedConfigValue_SerializedField::ORIGIN_NULL_RESOURCE) && (v_ != SerializedConfigValue_SerializedField::ORIGIN_NULL_COMMENTS)))) {
                throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Unhandled field from origin: "_j)->append(static_cast< ::java::lang::Object* >(code))->toString());
            }
end_switch0:;
        }
    }

}

void com::typesafe::config::impl::SerializedConfigValue::writeOrigin(::java::io::DataOutput* out, SimpleConfigOrigin* origin, SimpleConfigOrigin* baseOrigin) /* throws(IOException) */
{
    clinit();
    ::java::util::Map* m;
    if(origin != nullptr)
        m = npc(origin)->toFieldsDelta(baseOrigin);
    else
        m = ::java::util::Collections::emptyMap();
    for (auto _i = npc(npc(m)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* e = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto field = new SerializedConfigValue_FieldOut(java_cast< SerializedConfigValue_SerializedField* >(npc(e)->getKey()));
            auto v = java_cast< ::java::lang::Object* >(npc(e)->getValue());
            writeOriginField(npc(field)->data, npc(field)->code, v);
            writeField(out, field);
        }
    }
    writeEndMarker(out);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SerializedConfigValue::readOrigin(::java::io::DataInput* in, SimpleConfigOrigin* baseOrigin) /* throws(IOException) */
{
    clinit();
    ::java::util::Map* m = new ::java::util::EnumMap(static_cast< ::java::lang::Class* >(SerializedConfigValue_SerializedField::class_()));
    while (true) {
        ::java::lang::Object* v = nullptr;
        auto field = readCode(in);
        {
            int32_t size;
            ::java::util::List* list;
            {
                auto v_ = field;
                if((v_ == SerializedConfigValue_SerializedField::END_MARKER)) {
                    return SimpleConfigOrigin::fromBase(baseOrigin, m);
                }
                if((v_ == SerializedConfigValue_SerializedField::ORIGIN_DESCRIPTION)) {
                    npc(in)->readInt();
                    v = npc(in)->readUTF();
                    goto end_switch1;;
                }
                if((v_ == SerializedConfigValue_SerializedField::ORIGIN_LINE_NUMBER)) {
                    npc(in)->readInt();
                    v = ::java::lang::Integer::valueOf(npc(in)->readInt());
                    goto end_switch1;;
                }
                if((v_ == SerializedConfigValue_SerializedField::ORIGIN_END_LINE_NUMBER)) {
                    npc(in)->readInt();
                    v = ::java::lang::Integer::valueOf(npc(in)->readInt());
                    goto end_switch1;;
                }
                if((v_ == SerializedConfigValue_SerializedField::ORIGIN_TYPE)) {
                    npc(in)->readInt();
                    v = ::java::lang::Integer::valueOf(npc(in)->readUnsignedByte());
                    goto end_switch1;;
                }
                if((v_ == SerializedConfigValue_SerializedField::ORIGIN_URL)) {
                    npc(in)->readInt();
                    v = npc(in)->readUTF();
                    goto end_switch1;;
                }
                if((v_ == SerializedConfigValue_SerializedField::ORIGIN_RESOURCE)) {
                    npc(in)->readInt();
                    v = npc(in)->readUTF();
                    goto end_switch1;;
                }
                if((v_ == SerializedConfigValue_SerializedField::ORIGIN_COMMENTS)) {
                    npc(in)->readInt();
                    auto size = npc(in)->readInt();
                    ::java::util::List* list = new ::java::util::ArrayList(size);
                    for (auto i = int32_t(0); i < size; ++i) {
                        npc(list)->add(npc(in)->readUTF());
                    }
                    v = list;
                    goto end_switch1;;
                }
                if((v_ == SerializedConfigValue_SerializedField::ORIGIN_NULL_URL) || (v_ == SerializedConfigValue_SerializedField::ORIGIN_NULL_RESOURCE) || (v_ == SerializedConfigValue_SerializedField::ORIGIN_NULL_COMMENTS)) {
                    npc(in)->readInt();
                    v = u""_j;
                    goto end_switch1;;
                }
                if((v_ == SerializedConfigValue_SerializedField::ROOT_VALUE) || (v_ == SerializedConfigValue_SerializedField::ROOT_WAS_CONFIG) || (v_ == SerializedConfigValue_SerializedField::VALUE_DATA) || (v_ == SerializedConfigValue_SerializedField::VALUE_ORIGIN)) {
                    throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Not expecting this field here: "_j)->append(static_cast< ::java::lang::Object* >(field))->toString());
                }
                if((v_ == SerializedConfigValue_SerializedField::ROOT_VALUE) || (v_ == SerializedConfigValue_SerializedField::ROOT_WAS_CONFIG) || (v_ == SerializedConfigValue_SerializedField::VALUE_DATA) || (v_ == SerializedConfigValue_SerializedField::VALUE_ORIGIN) || (v_ == SerializedConfigValue_SerializedField::UNKNOWN)) {
                    skipField(in);
                    goto end_switch1;;
                }
end_switch1:;
            }
        }

        if(v != nullptr)
            npc(m)->put(field, v);

    }
}

void com::typesafe::config::impl::SerializedConfigValue::writeValueData(::java::io::DataOutput* out, ::com::typesafe::config::ConfigValue* value) /* throws(IOException) */
{
    clinit();
    auto st = SerializedConfigValue_SerializedValueType::forValue(value);
    npc(out)->writeByte(npc(st)->ordinal());
    {
        ::com::typesafe::config::ConfigList* list;
        ::com::typesafe::config::ConfigObject* obj;
        {
            auto v = st;
            if((v == SerializedConfigValue_SerializedValueType::BOOLEAN)) {
                npc(out)->writeBoolean((npc(npc((java_cast< ConfigBoolean* >(value)))->unwrapped()))->booleanValue());
                goto end_switch2;;
            }
            if((v == SerializedConfigValue_SerializedValueType::NULL_)) {
                goto end_switch2;;
            }
            if((v == SerializedConfigValue_SerializedValueType::INT)) {
                npc(out)->writeInt((npc(npc((java_cast< ConfigInt* >(value)))->unwrapped()))->intValue());
                npc(out)->writeUTF(npc((java_cast< ConfigNumber* >(value)))->transformToString());
                goto end_switch2;;
            }
            if((v == SerializedConfigValue_SerializedValueType::LONG)) {
                npc(out)->writeLong((npc(npc((java_cast< ConfigLong* >(value)))->unwrapped()))->longValue());
                npc(out)->writeUTF(npc((java_cast< ConfigNumber* >(value)))->transformToString());
                goto end_switch2;;
            }
            if((v == SerializedConfigValue_SerializedValueType::DOUBLE)) {
                npc(out)->writeDouble((npc(npc((java_cast< ConfigDouble* >(value)))->unwrapped()))->doubleValue());
                npc(out)->writeUTF(npc((java_cast< ConfigNumber* >(value)))->transformToString());
                goto end_switch2;;
            }
            if((v == SerializedConfigValue_SerializedValueType::STRING)) {
                npc(out)->writeUTF(npc((java_cast< ConfigString* >(value)))->unwrapped());
                goto end_switch2;;
            }
            if((v == SerializedConfigValue_SerializedValueType::LIST)) {
                auto list = java_cast< ::com::typesafe::config::ConfigList* >(value);
                npc(out)->writeInt(npc(list)->size());
                for (auto _i = npc(list)->iterator(); _i->hasNext(); ) {
                    ::com::typesafe::config::ConfigValue* v = java_cast< ::com::typesafe::config::ConfigValue* >(_i->next());
                    {
                        writeValue(out, v, java_cast< SimpleConfigOrigin* >(npc(list)->origin()));
                    }
                }
                goto end_switch2;;
            }
            if((v == SerializedConfigValue_SerializedValueType::OBJECT)) {
                auto obj = java_cast< ::com::typesafe::config::ConfigObject* >(value);
                npc(out)->writeInt(npc(obj)->size());
                for (auto _i = npc(npc(obj)->entrySet())->iterator(); _i->hasNext(); ) {
                    ::java::util::Map_Entry* e = java_cast< ::java::util::Map_Entry* >(_i->next());
                    {
                        npc(out)->writeUTF(java_cast< ::java::lang::String* >(npc(e)->getKey()));
                        writeValue(out, java_cast< ::com::typesafe::config::ConfigValue* >(npc(e)->getValue()), java_cast< SimpleConfigOrigin* >(npc(obj)->origin()));
                    }
                }
                goto end_switch2;;
            }
end_switch2:;
        }
    }

}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SerializedConfigValue::readValueData(::java::io::DataInput* in, SimpleConfigOrigin* origin) /* throws(IOException) */
{
    clinit();
    auto stb = npc(in)->readUnsignedByte();
    auto st = SerializedConfigValue_SerializedValueType::forInt(stb);
    if(st == nullptr)
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Unknown serialized value type: "_j)->append(stb)->toString());

    {
        int32_t vi;
        ::java::lang::String* si;
        int64_t vl;
        ::java::lang::String* sl;
        double vd;
        ::java::lang::String* sd;
        int32_t listSize;
        ::java::util::List* list;
        int32_t mapSize;
        ::java::util::Map* map;
        {
            auto v = st;
            if((v == SerializedConfigValue_SerializedValueType::BOOLEAN)) {
                return new ConfigBoolean(origin, npc(in)->readBoolean());
            }
            if((v == SerializedConfigValue_SerializedValueType::NULL_)) {
                return new ConfigNull(origin);
            }
            if((v == SerializedConfigValue_SerializedValueType::INT)) {
                auto vi = npc(in)->readInt();
                auto si = npc(in)->readUTF();
                return new ConfigInt(origin, vi, si);
            }
            if((v == SerializedConfigValue_SerializedValueType::LONG)) {
                auto vl = npc(in)->readLong();
                auto sl = npc(in)->readUTF();
                return new ConfigLong(origin, vl, sl);
            }
            if((v == SerializedConfigValue_SerializedValueType::DOUBLE)) {
                auto vd = npc(in)->readDouble();
                auto sd = npc(in)->readUTF();
                return new ConfigDouble(origin, vd, sd);
            }
            if((v == SerializedConfigValue_SerializedValueType::STRING)) {
                return new ConfigString_Quoted(origin, npc(in)->readUTF());
            }
            if((v == SerializedConfigValue_SerializedValueType::LIST)) {
                auto listSize = npc(in)->readInt();
                ::java::util::List* list = new ::java::util::ArrayList(listSize);
                for (auto i = int32_t(0); i < listSize; ++i) {
                    auto v = readValue(in, origin);
                    npc(list)->add(v);
                }
                return new SimpleConfigList(origin, list);
            }
            if((v == SerializedConfigValue_SerializedValueType::OBJECT)) {
                auto mapSize = npc(in)->readInt();
                ::java::util::Map* map = new ::java::util::HashMap(mapSize);
                for (auto i = int32_t(0); i < mapSize; ++i) {
                    auto key = npc(in)->readUTF();
                    auto v = readValue(in, origin);
                    npc(map)->put(key, v);
                }
                return new SimpleConfigObject(origin, map);
            }
end_switch3:;
        }
    }

    throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Unhandled serialized value type: "_j)->append(static_cast< ::java::lang::Object* >(st))->toString());
}

void com::typesafe::config::impl::SerializedConfigValue::writeValue(::java::io::DataOutput* out, ::com::typesafe::config::ConfigValue* value, SimpleConfigOrigin* baseOrigin) /* throws(IOException) */
{
    clinit();
    auto origin = new SerializedConfigValue_FieldOut(SerializedConfigValue_SerializedField::VALUE_ORIGIN);
    writeOrigin(npc(origin)->data, java_cast< SimpleConfigOrigin* >(npc(value)->origin()), baseOrigin);
    writeField(out, origin);
    auto data = new SerializedConfigValue_FieldOut(SerializedConfigValue_SerializedField::VALUE_DATA);
    writeValueData(npc(data)->data, value);
    writeField(out, data);
    writeEndMarker(out);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SerializedConfigValue::readValue(::java::io::DataInput* in, SimpleConfigOrigin* baseOrigin) /* throws(IOException) */
{
    clinit();
    AbstractConfigValue* value = nullptr;
    SimpleConfigOrigin* origin = nullptr;
    while (true) {
        auto code = readCode(in);
        if(code == SerializedConfigValue_SerializedField::END_MARKER) {
            if(value == nullptr)
                throw new ::java::io::IOException(u"No value data found in serialization of value"_j);

            return value;
        } else if(code == SerializedConfigValue_SerializedField::VALUE_DATA) {
            if(origin == nullptr)
                throw new ::java::io::IOException(u"Origin must be stored before value data"_j);

            npc(in)->readInt();
            value = readValueData(in, origin);
        } else if(code == SerializedConfigValue_SerializedField::VALUE_ORIGIN) {
            npc(in)->readInt();
            origin = readOrigin(in, baseOrigin);
        } else {
            skipField(in);
        }
    }
}

void com::typesafe::config::impl::SerializedConfigValue::writeField(::java::io::DataOutput* out, SerializedConfigValue_FieldOut* field) /* throws(IOException) */
{
    clinit();
    auto bytes = npc(npc(field)->bytes)->toByteArray_();
    npc(out)->writeByte(npc(npc(field)->code)->ordinal());
    npc(out)->writeInt(npc(bytes)->length);
    npc(out)->write(bytes);
}

void com::typesafe::config::impl::SerializedConfigValue::writeEndMarker(::java::io::DataOutput* out) /* throws(IOException) */
{
    clinit();
    npc(out)->writeByte(npc(SerializedConfigValue_SerializedField::END_MARKER)->ordinal());
}

com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue::readCode(::java::io::DataInput* in) /* throws(IOException) */
{
    clinit();
    auto c = npc(in)->readUnsignedByte();
    if(c == npc(SerializedConfigValue_SerializedField::UNKNOWN)->ordinal())
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"field code "_j)->append(c)
            ->append(u" is not supposed to be on the wire"_j)->toString());

    return SerializedConfigValue_SerializedField::forInt(c);
}

void com::typesafe::config::impl::SerializedConfigValue::skipField(::java::io::DataInput* in) /* throws(IOException) */
{
    clinit();
    auto len = npc(in)->readInt();
    auto skipped = npc(in)->skipBytes(len);
    if(skipped < len) {
        auto bytes = new ::int8_tArray((len - skipped));
        npc(in)->readFully(bytes);
    }
}

void com::typesafe::config::impl::SerializedConfigValue::writeExternal(::java::io::ObjectOutput* out) /* throws(IOException) */
{
    if(npc((java_cast< AbstractConfigValue* >(value)))->resolveStatus() != ResolveStatus::RESOLVED)
        throw new ::java::io::NotSerializableException(u"tried to serialize a value with unresolved substitutions, need to Config#resolve() first, see API docs"_j);

    auto field = new SerializedConfigValue_FieldOut(SerializedConfigValue_SerializedField::ROOT_VALUE);
    writeValue(npc(field)->data, value, nullptr);
    writeField(out, field);
    field = new SerializedConfigValue_FieldOut(SerializedConfigValue_SerializedField::ROOT_WAS_CONFIG);
    npc(npc(field)->data)->writeBoolean(wasConfig);
    writeField(out, field);
    writeEndMarker(out);
}

void com::typesafe::config::impl::SerializedConfigValue::readExternal(::java::io::ObjectInput* in) /* throws(IOException, ClassNotFoundException) */
{
    while (true) {
        auto code = readCode(in);
        if(code == SerializedConfigValue_SerializedField::END_MARKER) {
            return;
        } else if(code == SerializedConfigValue_SerializedField::ROOT_VALUE) {
            npc(in)->readInt();
            this->value = readValue(in, nullptr);
        } else if(code == SerializedConfigValue_SerializedField::ROOT_WAS_CONFIG) {
            npc(in)->readInt();
            this->wasConfig = npc(in)->readBoolean();
        } else {
            skipField(in);
        }
    }
}

com::typesafe::config::ConfigException* com::typesafe::config::impl::SerializedConfigValue::shouldNotBeUsed()
{
    clinit();
    return new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(npc(SerializedConfigValue::class_())->getName())->append(u" should not exist outside of serialization"_j)->toString());
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::SerializedConfigValue::valueType()
{
    throw shouldNotBeUsed();
}

java::lang::Object* com::typesafe::config::impl::SerializedConfigValue::unwrapped()
{
    throw shouldNotBeUsed();
}

com::typesafe::config::impl::SerializedConfigValue* com::typesafe::config::impl::SerializedConfigValue::newCopy(::com::typesafe::config::ConfigOrigin* origin)
{
    throw shouldNotBeUsed();
}

java::lang::String* com::typesafe::config::impl::SerializedConfigValue::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getSimpleName())->append(u"(value="_j)
        ->append(static_cast< ::java::lang::Object* >(value))
        ->append(u",wasConfig="_j)
        ->append(wasConfig)
        ->append(u")"_j)->toString();
}

bool com::typesafe::config::impl::SerializedConfigValue::equals(::java::lang::Object* other)
{
    if(dynamic_cast< SerializedConfigValue* >(other) != nullptr) {
        return canEqual(other) && (this->wasConfig == npc((java_cast< SerializedConfigValue* >(other)))->wasConfig) && (npc(this->value)->equals(npc((java_cast< SerializedConfigValue* >(other)))->value));
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::SerializedConfigValue::hashCode()
{
    auto h = int32_t(41) * (int32_t(41) + npc(value)->hashCode());
    h = int32_t(41) * (h + (wasConfig ? int32_t(1) : int32_t(0)));
    return h;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SerializedConfigValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SerializedConfigValue", 46);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SerializedConfigValue::getClass0()
{
    return class_();
}

