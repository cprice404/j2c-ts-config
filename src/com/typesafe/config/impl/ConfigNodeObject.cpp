// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeObject.java
#include <com/typesafe/config/impl/ConfigNodeObject.hpp>

#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/impl/AbstractConfigNode.hpp>
#include <com/typesafe/config/impl/AbstractConfigNodeValue.hpp>
#include <com/typesafe/config/impl/ConfigNodeComplexValue.hpp>
#include <com/typesafe/config/impl/ConfigNodeField.hpp>
#include <com/typesafe/config/impl/ConfigNodeInclude.hpp>
#include <com/typesafe/config/impl/ConfigNodePath.hpp>
#include <com/typesafe/config/impl/ConfigNodeSingleToken.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/PathParser.hpp>
#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>

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
com::typesafe::config::impl::ConfigNodeObject::ConfigNodeObject(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNodeObject::ConfigNodeObject(::java::util::Collection* children) 
    : ConfigNodeObject(*static_cast< ::default_init_tag* >(0))
{
    ctor(children);
}

void com::typesafe::config::impl::ConfigNodeObject::ctor(::java::util::Collection* children)
{
    super::ctor(children);
}

com::typesafe::config::impl::ConfigNodeObject* com::typesafe::config::impl::ConfigNodeObject::newNode(::java::util::Collection* nodes)
{
    return new ConfigNodeObject(nodes);
}

bool com::typesafe::config::impl::ConfigNodeObject::hasValue(Path* desiredPath)
{
    for (auto _i = npc(children_)->iterator(); _i->hasNext(); ) {
        AbstractConfigNode* node = java_cast< AbstractConfigNode* >(_i->next());
        {
            if(dynamic_cast< ConfigNodeField* >(node) != nullptr) {
                auto field = java_cast< ConfigNodeField* >(node);
                auto key = npc(npc(field)->path())->value();
                if(npc(key)->equals(desiredPath) || npc(key)->startsWith(desiredPath)) {
                    return true;
                } else if(npc(desiredPath)->startsWith(key)) {
                    if(dynamic_cast< ConfigNodeObject* >(npc(field)->value()) != nullptr) {
                        auto obj = java_cast< ConfigNodeObject* >(npc(field)->value());
                        auto remainingPath = npc(desiredPath)->subPath(npc(key)->length());
                        if(npc(obj)->hasValue(remainingPath)) {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}

com::typesafe::config::impl::ConfigNodeObject* com::typesafe::config::impl::ConfigNodeObject::changeValueOnPath(Path* desiredPath, AbstractConfigNodeValue* value, ::com::typesafe::config::ConfigSyntax* flavor)
{
    auto childrenCopy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(super::children_));
    auto seenNonMatching = false;
    auto valueCopy = value;
    for (auto i = npc(childrenCopy)->size() - int32_t(1); i >= 0; i--) {
        if(dynamic_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i))) != nullptr) {
            auto t = npc((java_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i)))))->token();
            if(flavor == ::com::typesafe::config::ConfigSyntax::JSON && !seenNonMatching && t == Tokens::COMMA()) {
                npc(childrenCopy)->remove(i);
            }
            continue;
        } else if(!(dynamic_cast< ConfigNodeField* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i))) != nullptr)) {
            continue;
        }
        auto node = java_cast< ConfigNodeField* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i)));
        auto key = npc(npc(node)->path())->value();
        if((valueCopy == nullptr && npc(key)->equals(desiredPath)) || (npc(key)->startsWith(desiredPath) && !npc(key)->equals(desiredPath))) {
            npc(childrenCopy)->remove(i);
            for (auto j = i; j < npc(childrenCopy)->size(); j++) {
                if(dynamic_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(j))) != nullptr) {
                    auto t = npc((java_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(j)))))->token();
                    if(Tokens::isIgnoredWhitespace(t) || t == Tokens::COMMA()) {
                        npc(childrenCopy)->remove(j);
                        j--;
                    } else {
                        break;
                    }
                } else {
                    break;
                }
            }
        } else if(npc(key)->equals(desiredPath)) {
            seenNonMatching = true;
            AbstractConfigNodeValue* indentedValue;
            auto before = i - int32_t(1) > 0 ? java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i - int32_t(1))) : static_cast< AbstractConfigNode* >(nullptr);
            if(dynamic_cast< ConfigNodeComplexValue* >(value) != nullptr && dynamic_cast< ConfigNodeSingleToken* >(before) != nullptr && Tokens::isIgnoredWhitespace(npc((java_cast< ConfigNodeSingleToken* >(before)))->token()))
                indentedValue = npc((java_cast< ConfigNodeComplexValue* >(value)))->indentText(before);
            else
                indentedValue = value;
            npc(childrenCopy)->set(i, npc(node)->replaceValue(indentedValue));
            valueCopy = nullptr;
        } else if(npc(desiredPath)->startsWith(key)) {
            seenNonMatching = true;
            if(dynamic_cast< ConfigNodeObject* >(npc(node)->value()) != nullptr) {
                auto remainingPath = npc(desiredPath)->subPath(npc(key)->length());
                npc(childrenCopy)->set(i, npc(node)->replaceValue(npc((java_cast< ConfigNodeObject* >(npc(node)->value())))->changeValueOnPath(remainingPath, valueCopy, flavor)));
                if(valueCopy != nullptr && !npc(node)->equals(java_cast< AbstractConfigNode* >(npc(super::children_)->get(i))))
                    valueCopy = nullptr;

            }
        } else {
            seenNonMatching = true;
        }
    }
    return new ConfigNodeObject(childrenCopy);
}

com::typesafe::config::impl::ConfigNodeObject* com::typesafe::config::impl::ConfigNodeObject::setValueOnPath(::java::lang::String* desiredPath, AbstractConfigNodeValue* value)
{
    return setValueOnPath(desiredPath, value, ::com::typesafe::config::ConfigSyntax::CONF);
}

com::typesafe::config::impl::ConfigNodeObject* com::typesafe::config::impl::ConfigNodeObject::setValueOnPath(::java::lang::String* desiredPath, AbstractConfigNodeValue* value, ::com::typesafe::config::ConfigSyntax* flavor)
{
    auto path = PathParser::parsePathNode(desiredPath, flavor);
    return setValueOnPath(path, value, flavor);
}

com::typesafe::config::impl::ConfigNodeObject* com::typesafe::config::impl::ConfigNodeObject::setValueOnPath(ConfigNodePath* desiredPath, AbstractConfigNodeValue* value, ::com::typesafe::config::ConfigSyntax* flavor)
{
    auto node = changeValueOnPath(npc(desiredPath)->value(), value, flavor);
    if(!npc(node)->hasValue(npc(desiredPath)->value())) {
        return npc(node)->addValueOnPath(desiredPath, value, flavor);
    }
    return node;
}

java::util::Collection* com::typesafe::config::impl::ConfigNodeObject::indentation()
{
    auto seenNewLine = false;
    auto indentation = new ::java::util::ArrayList();
    if(npc(children_)->isEmpty()) {
        return indentation;
    }
    for (auto i = int32_t(0); i < npc(children_)->size(); i++) {
        if(!seenNewLine) {
            if(dynamic_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(children_)->get(i))) != nullptr && Tokens::isNewline(npc((java_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(children_)->get(i)))))->token())) {
                seenNewLine = true;
                npc(indentation)->add(new ConfigNodeSingleToken(Tokens::newLine(nullptr)));
            }
        } else {
            if(dynamic_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(children_)->get(i))) != nullptr && Tokens::isIgnoredWhitespace(npc((java_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(children_)->get(i)))))->token()) && i + int32_t(1) < npc(children_)->size() && (dynamic_cast< ConfigNodeField* >(java_cast< AbstractConfigNode* >(npc(children_)->get(i + int32_t(1)))) != nullptr || dynamic_cast< ConfigNodeInclude* >(java_cast< AbstractConfigNode* >(npc(children_)->get(i + int32_t(1)))) != nullptr)) {
                npc(indentation)->add(java_cast< AbstractConfigNode* >(npc(children_)->get(i)));
                return indentation;
            }
        }
    }
    if(npc(indentation)->isEmpty()) {
        npc(indentation)->add(new ConfigNodeSingleToken(Tokens::newIgnoredWhitespace(nullptr, u" "_j)));
    } else {
        auto last = java_cast< AbstractConfigNode* >(npc(children_)->get(npc(children_)->size() - int32_t(1)));
        if(dynamic_cast< ConfigNodeSingleToken* >(last) != nullptr && npc((java_cast< ConfigNodeSingleToken* >(last)))->token() == Tokens::CLOSE_CURLY()) {
            auto beforeLast = java_cast< AbstractConfigNode* >(npc(children_)->get(npc(children_)->size() - int32_t(2)));
            auto indent = u""_j;
            if(dynamic_cast< ConfigNodeSingleToken* >(beforeLast) != nullptr && Tokens::isIgnoredWhitespace(npc((java_cast< ConfigNodeSingleToken* >(beforeLast)))->token()))
                indent = npc(npc((java_cast< ConfigNodeSingleToken* >(beforeLast)))->token())->tokenText();

            indent = ::java::lang::StringBuilder(indent).append(u"  "_j)->toString();
            npc(indentation)->add(new ConfigNodeSingleToken(Tokens::newIgnoredWhitespace(nullptr, indent)));
            return indentation;
        }
    }
    return indentation;
}

com::typesafe::config::impl::ConfigNodeObject* com::typesafe::config::impl::ConfigNodeObject::addValueOnPath(ConfigNodePath* desiredPath, AbstractConfigNodeValue* value, ::com::typesafe::config::ConfigSyntax* flavor)
{
    auto path = npc(desiredPath)->value();
    auto childrenCopy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(super::children_));
    auto indentation = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(this->indentation()));
    AbstractConfigNodeValue* indentedValue;
    if(dynamic_cast< ConfigNodeComplexValue* >(value) != nullptr && !npc(indentation)->isEmpty()) {
        indentedValue = npc((java_cast< ConfigNodeComplexValue* >(value)))->indentText(java_cast< AbstractConfigNode* >(npc(indentation)->get(npc(indentation)->size() - int32_t(1))));
    } else {
        indentedValue = value;
    }
    auto sameLine = !(npc(indentation)->size() > 0 && dynamic_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(indentation)->get(0))) != nullptr && Tokens::isNewline(npc((java_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(indentation)->get(0)))))->token()));
    if(npc(path)->length() > 1) {
        for (auto i = npc(super::children_)->size() - int32_t(1); i >= 0; i--) {
            if(!(dynamic_cast< ConfigNodeField* >(java_cast< AbstractConfigNode* >(npc(super::children_)->get(i))) != nullptr)) {
                continue;
            }
            auto node = java_cast< ConfigNodeField* >(java_cast< AbstractConfigNode* >(npc(super::children_)->get(i)));
            auto key = npc(npc(node)->path())->value();
            if(npc(path)->startsWith(key) && dynamic_cast< ConfigNodeObject* >(npc(node)->value()) != nullptr) {
                auto remainingPath = npc(desiredPath)->subPath(npc(key)->length());
                auto newValue = java_cast< ConfigNodeObject* >(npc(node)->value());
                npc(childrenCopy)->set(i, npc(node)->replaceValue(npc(newValue)->addValueOnPath(remainingPath, value, flavor)));
                return new ConfigNodeObject(childrenCopy);
            }
        }
    }
    auto startsWithBrace = !npc(super::children_)->isEmpty() && dynamic_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(super::children_)->get(0))) != nullptr && npc((java_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(super::children_)->get(0)))))->token() == Tokens::OPEN_CURLY();
    auto newNodes = new ::java::util::ArrayList();
    npc(newNodes)->addAll(indentation);
    npc(newNodes)->add(npc(desiredPath)->first());
    npc(newNodes)->add(new ConfigNodeSingleToken(Tokens::newIgnoredWhitespace(nullptr, u" "_j)));
    npc(newNodes)->add(new ConfigNodeSingleToken(Tokens::COLON()));
    npc(newNodes)->add(new ConfigNodeSingleToken(Tokens::newIgnoredWhitespace(nullptr, u" "_j)));
    if(npc(path)->length() == 1) {
        npc(newNodes)->add(indentedValue);
    } else {
        auto newObjectNodes = new ::java::util::ArrayList();
        npc(newObjectNodes)->add(new ConfigNodeSingleToken(Tokens::OPEN_CURLY()));
        if(npc(indentation)->isEmpty()) {
            npc(newObjectNodes)->add(new ConfigNodeSingleToken(Tokens::newLine(nullptr)));
        }
        npc(newObjectNodes)->addAll(indentation);
        npc(newObjectNodes)->add(new ConfigNodeSingleToken(Tokens::CLOSE_CURLY()));
        auto newObject = new ConfigNodeObject(newObjectNodes);
        npc(newNodes)->add(npc(newObject)->addValueOnPath(npc(desiredPath)->subPath(1), indentedValue, flavor));
    }
    if(flavor == ::com::typesafe::config::ConfigSyntax::JSON || startsWithBrace || sameLine) {
        for (auto i = npc(childrenCopy)->size() - int32_t(1); i >= 0; i--) {
            if((flavor == ::com::typesafe::config::ConfigSyntax::JSON || sameLine) && dynamic_cast< ConfigNodeField* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i))) != nullptr) {
                if(i + int32_t(1) >= npc(childrenCopy)->size() || !(dynamic_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i + int32_t(1)))) != nullptr && npc((java_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i + int32_t(1))))))->token() == Tokens::COMMA()))
                    npc(childrenCopy)->add(i + int32_t(1), new ConfigNodeSingleToken(Tokens::COMMA()));

                break;
            }
            if(startsWithBrace && dynamic_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i))) != nullptr && npc((java_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i)))))->token_ == Tokens::CLOSE_CURLY()) {
                auto previous = java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i - int32_t(1)));
                if(dynamic_cast< ConfigNodeSingleToken* >(previous) != nullptr && Tokens::isNewline(npc((java_cast< ConfigNodeSingleToken* >(previous)))->token())) {
                    npc(childrenCopy)->add(i - int32_t(1), new ConfigNodeField(newNodes));
                    i--;
                } else if(dynamic_cast< ConfigNodeSingleToken* >(previous) != nullptr && Tokens::isIgnoredWhitespace(npc((java_cast< ConfigNodeSingleToken* >(previous)))->token())) {
                    auto beforePrevious = java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i - int32_t(2)));
                    if(sameLine) {
                        npc(childrenCopy)->add(i - int32_t(1), new ConfigNodeField(newNodes));
                        i--;
                    } else if(dynamic_cast< ConfigNodeSingleToken* >(beforePrevious) != nullptr && Tokens::isNewline(npc((java_cast< ConfigNodeSingleToken* >(beforePrevious)))->token())) {
                        npc(childrenCopy)->add(i - int32_t(2), new ConfigNodeField(newNodes));
                        i -= 2;
                    } else {
                        npc(childrenCopy)->add(i, new ConfigNodeField(newNodes));
                    }
                } else
                    npc(childrenCopy)->add(i, new ConfigNodeField(newNodes));
            }
        }
    }
    if(!startsWithBrace) {
        if(!npc(childrenCopy)->isEmpty() && dynamic_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(npc(childrenCopy)->size() - int32_t(1)))) != nullptr && Tokens::isNewline(npc((java_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(npc(childrenCopy)->size() - int32_t(1))))))->token()))
            npc(childrenCopy)->add(npc(childrenCopy)->size() - int32_t(1), new ConfigNodeField(newNodes));
        else
            npc(childrenCopy)->add(new ConfigNodeField(newNodes));
    }
    return new ConfigNodeObject(childrenCopy);
}

com::typesafe::config::impl::ConfigNodeObject* com::typesafe::config::impl::ConfigNodeObject::removeValueOnPath(::java::lang::String* desiredPath, ::com::typesafe::config::ConfigSyntax* flavor)
{
    auto path = npc(PathParser::parsePathNode(desiredPath, flavor))->value();
    return changeValueOnPath(path, nullptr, flavor);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNodeObject::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNodeObject", 41);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNodeObject::getClass0()
{
    return class_();
}

