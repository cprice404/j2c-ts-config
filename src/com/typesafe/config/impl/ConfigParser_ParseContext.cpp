// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigParser.java
#include <com/typesafe/config/impl/ConfigParser_ParseContext.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_Parse.hpp>
#include <com/typesafe/config/ConfigException.hpp>
#include <com/typesafe/config/ConfigIncludeContext.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/impl/AbstractConfigNode.hpp>
#include <com/typesafe/config/impl/AbstractConfigNodeValue.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigConcatenation.hpp>
#include <com/typesafe/config/impl/ConfigIncludeKind.hpp>
#include <com/typesafe/config/impl/ConfigNodeArray_.hpp>
#include <com/typesafe/config/impl/ConfigNodeComment.hpp>
#include <com/typesafe/config/impl/ConfigNodeComplexValue.hpp>
#include <com/typesafe/config/impl/ConfigNodeConcatenation.hpp>
#include <com/typesafe/config/impl/ConfigNodeField.hpp>
#include <com/typesafe/config/impl/ConfigNodeInclude.hpp>
#include <com/typesafe/config/impl/ConfigNodeObject.hpp>
#include <com/typesafe/config/impl/ConfigNodePath.hpp>
#include <com/typesafe/config/impl/ConfigNodeRoot.hpp>
#include <com/typesafe/config/impl/ConfigNodeSimpleValue.hpp>
#include <com/typesafe/config/impl/ConfigNodeSingleToken.hpp>
#include <com/typesafe/config/impl/ConfigReference.hpp>
#include <com/typesafe/config/impl/FullIncluder.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SimpleConfigList.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/SubstitutionExpression.hpp>
#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/io/File.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/net/MalformedURLException.hpp>
#include <java/net/URL.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/LinkedList.hpp>
#include <java/util/List.hpp>
#include <java/util/ListIterator.hpp>
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
com::typesafe::config::impl::ConfigParser_ParseContext::ConfigParser_ParseContext(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigParser_ParseContext::ConfigParser_ParseContext(::com::typesafe::config::ConfigSyntax* flavor, ::com::typesafe::config::ConfigOrigin* origin, ConfigNodeRoot* document, FullIncluder* includer, ::com::typesafe::config::ConfigIncludeContext* includeContext) 
    : ConfigParser_ParseContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(flavor,origin,document,includer,includeContext);
}

void com::typesafe::config::impl::ConfigParser_ParseContext::ctor(::com::typesafe::config::ConfigSyntax* flavor, ::com::typesafe::config::ConfigOrigin* origin, ConfigNodeRoot* document, FullIncluder* includer, ::com::typesafe::config::ConfigIncludeContext* includeContext)
{
    super::ctor();
    lineNumber = 1;
    this->document = document;
    this->flavor = flavor;
    this->baseOrigin = origin;
    this->includer = includer;
    this->includeContext = includeContext;
    this->pathStack = new ::java::util::LinkedList();
    this->arrayCount = 0;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigParser_ParseContext::parseConcatenation(ConfigNodeConcatenation* n)
{
    if(flavor == ::com::typesafe::config::ConfigSyntax::JSON)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Found a concatenation node in JSON"_j);

    ::java::util::List* values = new ::java::util::ArrayList();
    for (auto _i = npc(npc(n)->children())->iterator(); _i->hasNext(); ) {
        AbstractConfigNode* node = java_cast< AbstractConfigNode* >(_i->next());
        {
            AbstractConfigValue* v = nullptr;
            if(dynamic_cast< AbstractConfigNodeValue* >(node) != nullptr) {
                v = parseValue(java_cast< AbstractConfigNodeValue* >(node), nullptr);
                npc(values)->add(v);
            }
        }
    }
    return ConfigConcatenation::concatenate(values);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::ConfigParser_ParseContext::lineOrigin()
{
    return npc((java_cast< SimpleConfigOrigin* >(baseOrigin)))->withLineNumber(lineNumber);
}

com::typesafe::config::ConfigException* com::typesafe::config::impl::ConfigParser_ParseContext::parseError(::java::lang::String* message)
{
    return parseError(message, nullptr);
}

com::typesafe::config::ConfigException* com::typesafe::config::impl::ConfigParser_ParseContext::parseError(::java::lang::String* message, ::java::lang::Throwable* cause)
{
    return new ::com::typesafe::config::ConfigException_Parse(lineOrigin(), message, cause);
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::ConfigParser_ParseContext::fullCurrentPath()
{
    if(npc(pathStack)->isEmpty())
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Bug in parser; tried to get current path when at root"_j);
    else
        return new Path(npc(pathStack)->descendingIterator());
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigParser_ParseContext::parseValue(AbstractConfigNodeValue* n, ::java::util::List* comments)
{
    AbstractConfigValue* v;
    auto startingArrayCount = arrayCount;
    if(dynamic_cast< ConfigNodeSimpleValue* >(n) != nullptr) {
        v = npc((java_cast< ConfigNodeSimpleValue* >(n)))->value();
    } else if(dynamic_cast< ConfigNodeObject* >(n) != nullptr) {
        v = parseObject(java_cast< ConfigNodeObject* >(n));
    } else if(dynamic_cast< ConfigNodeArray_* >(n) != nullptr) {
        v = parseArray_(java_cast< ConfigNodeArray_* >(n));
    } else if(dynamic_cast< ConfigNodeConcatenation* >(n) != nullptr) {
        v = parseConcatenation(java_cast< ConfigNodeConcatenation* >(n));
    } else {
        throw parseError(::java::lang::StringBuilder().append(u"Expecting a value but got wrong node type: "_j)->append(static_cast< ::java::lang::Object* >(npc(n)->getClass()))->toString());
    }
    if(comments != nullptr && !npc(comments)->isEmpty()) {
        v = npc(v)->withOrigin(npc(npc(v)->origin())->prependComments(new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(comments))));
        npc(comments)->clear();
    }
    if(arrayCount != startingArrayCount)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Bug in config parser: unbalanced array count"_j);

    return v;
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigParser_ParseContext::createValueUnderPath(Path* path, AbstractConfigValue* value)
{
    clinit();
    ::java::util::List* keys = new ::java::util::ArrayList();
    auto key = npc(path)->first();
    auto remaining = npc(path)->remainder();
    while (key != nullptr) {
        npc(keys)->add(key);
        if(remaining == nullptr) {
            break;
        } else {
            key = npc(remaining)->first();
            remaining = npc(remaining)->remainder();
        }
    }
    auto i = npc(keys)->listIterator(npc(keys)->size());
    auto deepest = java_cast< ::java::lang::String* >(npc(i)->previous());
    AbstractConfigObject* o = new SimpleConfigObject(npc(npc(value)->origin())->withComments(nullptr), ::java::util::Collections::/* <String, AbstractConfigValue> */singletonMap(deepest, value));
    while (npc(i)->hasPrevious()) {
        auto m = ::java::util::Collections::/* <String, AbstractConfigValue> */singletonMap(java_cast< ::java::lang::String* >(npc(i)->previous()), o);
        o = new SimpleConfigObject(npc(npc(value)->origin())->withComments(nullptr), m);
    }
    return o;
}

void com::typesafe::config::impl::ConfigParser_ParseContext::parseInclude(::java::util::Map* values, ConfigNodeInclude* n)
{
    AbstractConfigObject* obj;
    {
        ::java::net::URL* url;
        {
            auto v = npc(n)->kind();
            if((v == ConfigIncludeKind::URL)) {
                ::java::net::URL* url;
                try {
                    url = new ::java::net::URL(npc(n)->name());
                } catch (::java::net::MalformedURLException* e) {
                    throw parseError(::java::lang::StringBuilder().append(u"include url() specifies an invalid URL: "_j)->append(npc(n)->name())->toString(), e);
                }
                obj = java_cast< AbstractConfigObject* >(npc(includer)->includeURL(includeContext, url));
                goto end_switch0;;
            }
            if((v == ConfigIncludeKind::FILE)) {
                obj = java_cast< AbstractConfigObject* >(npc(includer)->includeFile(includeContext, new ::java::io::File(npc(n)->name())));
                goto end_switch0;;
            }
            if((v == ConfigIncludeKind::CLASSPATH)) {
                obj = java_cast< AbstractConfigObject* >(npc(includer)->includeResources(includeContext, npc(n)->name()));
                goto end_switch0;;
            }
            if((v == ConfigIncludeKind::HEURISTIC)) {
                obj = java_cast< AbstractConfigObject* >(npc(includer)->include(includeContext, npc(n)->name()));
                goto end_switch0;;
            }
            if((((v != ConfigIncludeKind::URL) && (v != ConfigIncludeKind::FILE) && (v != ConfigIncludeKind::CLASSPATH) && (v != ConfigIncludeKind::HEURISTIC)))) {
                throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"should not be reached"_j);
            }
end_switch0:;
        }
    }

    if(arrayCount > 0 && npc(obj)->resolveStatus() != ResolveStatus::RESOLVED)
        throw parseError(::java::lang::StringBuilder().append(u"Due to current limitations of the config parser, when an include statement is nested inside a list value, "_j)->append(u"${} substitutions inside the included file cannot be resolved correctly. Either move the include outside of the list value or "_j)
            ->append(u"remove the ${} statements from the included file."_j)->toString());

    if(!npc(pathStack)->isEmpty()) {
        auto prefix = fullCurrentPath();
        obj = npc(obj)->relativized(prefix);
    }
    for (auto _i = npc(npc(obj)->keySet())->iterator(); _i->hasNext(); ) {
        ::java::lang::String* key = java_cast< ::java::lang::String* >(_i->next());
        {
            auto v = npc(obj)->get(key);
            auto existing = java_cast< AbstractConfigValue* >(npc(values)->get(key));
            if(existing != nullptr) {
                npc(values)->put(key, npc(v)->withFallback(existing));
            } else {
                npc(values)->put(key, v);
            }
        }
    }
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigParser_ParseContext::parseObject(ConfigNodeObject* n)
{
    ::java::util::Map* values = new ::java::util::HashMap();
    auto objectOrigin = lineOrigin();
    auto lastWasNewline = false;
    auto nodes = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(npc(n)->children()));
    ::java::util::List* comments = new ::java::util::ArrayList();
    for (auto i = int32_t(0); i < npc(nodes)->size(); i++) {
        auto node = java_cast< AbstractConfigNode* >(npc(nodes)->get(i));
        if(dynamic_cast< ConfigNodeComment* >(node) != nullptr) {
            lastWasNewline = false;
            npc(comments)->add(npc((java_cast< ConfigNodeComment* >(node)))->commentText());
        } else if(dynamic_cast< ConfigNodeSingleToken* >(node) != nullptr && Tokens::isNewline(npc((java_cast< ConfigNodeSingleToken* >(node)))->token())) {
            lineNumber++;
            if(lastWasNewline) {
                npc(comments)->clear();
            }
            lastWasNewline = true;
        } else if(flavor != ::com::typesafe::config::ConfigSyntax::JSON && dynamic_cast< ConfigNodeInclude* >(node) != nullptr) {
            parseInclude(values, java_cast< ConfigNodeInclude* >(node));
            lastWasNewline = false;
        } else if(dynamic_cast< ConfigNodeField* >(node) != nullptr) {
            lastWasNewline = false;
            auto path = npc(npc((java_cast< ConfigNodeField* >(node)))->path())->value();
            npc(comments)->addAll(npc((java_cast< ConfigNodeField* >(node)))->comments());
            npc(pathStack)->push(path);
            if(npc((java_cast< ConfigNodeField* >(node)))->separator() == Tokens::PLUS_EQUALS()) {
                if(arrayCount > 0)
                    throw parseError(::java::lang::StringBuilder().append(u"Due to current limitations of the config parser, += does not work nested inside a list. "_j)->append(u"+= expands to a ${} substitution and the path in ${} cannot currently refer to list elements. "_j)
                        ->append(u"You might be able to move the += outside of the list and then refer to it from inside the list with ${}."_j)->toString());

                arrayCount += 1;
            }
            AbstractConfigNodeValue* valueNode;
            AbstractConfigValue* newValue;
            valueNode = npc((java_cast< ConfigNodeField* >(node)))->value();
            newValue = parseValue(valueNode, comments);
            if(npc((java_cast< ConfigNodeField* >(node)))->separator() == Tokens::PLUS_EQUALS()) {
                arrayCount -= 1;
                ::java::util::List* concat = new ::java::util::ArrayList(int32_t(2));
                AbstractConfigValue* previousRef = new ConfigReference(npc(newValue)->origin(), new SubstitutionExpression(fullCurrentPath(), true));
                AbstractConfigValue* list = new SimpleConfigList(npc(newValue)->origin(), ::java::util::Collections::singletonList(newValue));
                npc(concat)->add(previousRef);
                npc(concat)->add(list);
                newValue = ConfigConcatenation::concatenate(concat);
            }
            if(i < npc(nodes)->size() - int32_t(1)) {
                i++;
                while (i < npc(nodes)->size()) {
                    if(dynamic_cast< ConfigNodeComment* >(java_cast< AbstractConfigNode* >(npc(nodes)->get(i))) != nullptr) {
                        auto comment = java_cast< ConfigNodeComment* >(java_cast< AbstractConfigNode* >(npc(nodes)->get(i)));
                        newValue = npc(newValue)->withOrigin(npc(npc(newValue)->origin())->appendComments(::java::util::Collections::singletonList(npc(comment)->commentText())));
                        break;
                    } else if(dynamic_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(nodes)->get(i))) != nullptr) {
                        auto curr = java_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(nodes)->get(i)));
                        if(npc(curr)->token() == Tokens::COMMA() || Tokens::isIgnoredWhitespace(npc(curr)->token())) {
                        } else {
                            i--;
                            break;
                        }
                    } else {
                        i--;
                        break;
                    }
                    i++;
                }
            }
            npc(pathStack)->pop();
            auto key = npc(path)->first();
            auto remaining = npc(path)->remainder();
            if(remaining == nullptr) {
                auto existing = java_cast< AbstractConfigValue* >(npc(values)->get(key));
                if(existing != nullptr) {
                    if(flavor == ::com::typesafe::config::ConfigSyntax::JSON) {
                        throw parseError(::java::lang::StringBuilder().append(u"JSON does not allow duplicate fields: '"_j)->append(key)
                            ->append(u"' was already seen at "_j)
                            ->append(npc(npc(existing)->origin())->description())->toString());
                    } else {
                        newValue = npc(newValue)->withFallback(existing);
                    }
                }
                npc(values)->put(key, newValue);
            } else {
                if(flavor == ::com::typesafe::config::ConfigSyntax::JSON) {
                    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"somehow got multi-element path in JSON mode"_j);
                }
                auto obj = createValueUnderPath(remaining, newValue);
                auto existing = java_cast< AbstractConfigValue* >(npc(values)->get(key));
                if(existing != nullptr) {
                    obj = npc(obj)->withFallback(existing);
                }
                npc(values)->put(key, obj);
            }
        }
    }
    return new SimpleConfigObject(objectOrigin, values);
}

com::typesafe::config::impl::SimpleConfigList* com::typesafe::config::impl::ConfigParser_ParseContext::parseArray_(ConfigNodeArray_* n)
{
    arrayCount += 1;
    auto arrayOrigin = lineOrigin();
    ::java::util::List* values = new ::java::util::ArrayList();
    auto lastWasNewLine = false;
    ::java::util::List* comments = new ::java::util::ArrayList();
    AbstractConfigValue* v = nullptr;
    for (auto _i = npc(npc(n)->children())->iterator(); _i->hasNext(); ) {
        AbstractConfigNode* node = java_cast< AbstractConfigNode* >(_i->next());
        {
            if(dynamic_cast< ConfigNodeComment* >(node) != nullptr) {
                npc(comments)->add(npc((java_cast< ConfigNodeComment* >(node)))->commentText());
                lastWasNewLine = false;
            } else if(dynamic_cast< ConfigNodeSingleToken* >(node) != nullptr && Tokens::isNewline(npc((java_cast< ConfigNodeSingleToken* >(node)))->token())) {
                lineNumber++;
                if(lastWasNewLine && v == nullptr) {
                    npc(comments)->clear();
                } else if(v != nullptr) {
                    npc(values)->add(npc(v)->withOrigin(npc(npc(v)->origin())->appendComments(new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(comments)))));
                    npc(comments)->clear();
                    v = nullptr;
                }
                lastWasNewLine = true;
            } else if(dynamic_cast< AbstractConfigNodeValue* >(node) != nullptr) {
                lastWasNewLine = false;
                if(v != nullptr) {
                    npc(values)->add(npc(v)->withOrigin(npc(npc(v)->origin())->appendComments(new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(comments)))));
                    npc(comments)->clear();
                }
                v = parseValue(java_cast< AbstractConfigNodeValue* >(node), comments);
            }
        }
    }
    if(v != nullptr) {
        npc(values)->add(npc(v)->withOrigin(npc(npc(v)->origin())->appendComments(new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(comments)))));
    }
    arrayCount -= 1;
    return new SimpleConfigList(arrayOrigin, values);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigParser_ParseContext::parse()
{
    AbstractConfigValue* result = nullptr;
    auto comments = new ::java::util::ArrayList();
    auto lastWasNewLine = false;
    for (auto _i = npc(npc(document)->children())->iterator(); _i->hasNext(); ) {
        AbstractConfigNode* node = java_cast< AbstractConfigNode* >(_i->next());
        {
            if(dynamic_cast< ConfigNodeComment* >(node) != nullptr) {
                npc(comments)->add(npc((java_cast< ConfigNodeComment* >(node)))->commentText());
                lastWasNewLine = false;
            } else if(dynamic_cast< ConfigNodeSingleToken* >(node) != nullptr) {
                auto t = npc((java_cast< ConfigNodeSingleToken* >(node)))->token();
                if(Tokens::isNewline(t)) {
                    lineNumber++;
                    if(lastWasNewLine && result == nullptr) {
                        npc(comments)->clear();
                    } else if(result != nullptr) {
                        result = npc(result)->withOrigin(npc(npc(result)->origin())->appendComments(new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(comments))));
                        npc(comments)->clear();
                        break;
                    }
                    lastWasNewLine = true;
                }
            } else if(dynamic_cast< ConfigNodeComplexValue* >(node) != nullptr) {
                result = parseValue(java_cast< ConfigNodeComplexValue* >(node), comments);
                lastWasNewLine = false;
            }
        }
    }
    return result;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigParser_ParseContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigParser.ParseContext", 50);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigParser_ParseContext::getClass0()
{
    return class_();
}

