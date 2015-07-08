// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/HashMap_TreeNode.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace util {
typedef ::SubArray< ::java::util::Map_Entry, ::java::lang::ObjectArray > Map_EntryArray;
typedef ::SubArray< ::java::util::HashMap_Node, ::java::lang::ObjectArray, Map_EntryArray > HashMap_NodeArray;
}  // namespace util
}  // namespace java

extern void unimplemented_(const char16_t* name);
java::util::HashMap_TreeNode::HashMap_TreeNode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::HashMap_TreeNode::HashMap_TreeNode(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* val, HashMap_Node* next)
    : HashMap_TreeNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(hash, key, val, next);
}

bool& java::util::HashMap_TreeNode::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::util::HashMap_TreeNode::$assertionsDisabled_;

void ::java::util::HashMap_TreeNode::ctor(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* val, HashMap_Node* next)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::HashMap_TreeNode::ctor(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* val, HashMap_Node* next)");
}

java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::balanceDeletion(HashMap_TreeNode* root, HashMap_TreeNode* x)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::balanceDeletion(HashMap_TreeNode* root, HashMap_TreeNode* x)");
    return 0;
}

java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::balanceInsertion(HashMap_TreeNode* root, HashMap_TreeNode* x)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::balanceInsertion(HashMap_TreeNode* root, HashMap_TreeNode* x)");
    return 0;
}

bool java::util::HashMap_TreeNode::checkInvariants(HashMap_TreeNode* t)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::util::HashMap_TreeNode::checkInvariants(HashMap_TreeNode* t)");
    return 0;
}

java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::find(int32_t h, ::java::lang::Object* k, ::java::lang::Class* kc)
{ /* stub */
    unimplemented_(u"java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::find(int32_t h, ::java::lang::Object* k, ::java::lang::Class* kc)");
    return 0;
}

java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::getTreeNode(int32_t h, ::java::lang::Object* k)
{ /* stub */
    unimplemented_(u"java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::getTreeNode(int32_t h, ::java::lang::Object* k)");
    return 0;
}

void java::util::HashMap_TreeNode::moveRootToFront(HashMap_NodeArray* tab, HashMap_TreeNode* root)
{ /* stub */
    clinit();
    unimplemented_(u"void java::util::HashMap_TreeNode::moveRootToFront(HashMap_NodeArray* tab, HashMap_TreeNode* root)");
}

java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::putTreeVal(HashMap* map, HashMap_NodeArray* tab, int32_t h, ::java::lang::Object* k, ::java::lang::Object* v)
{ /* stub */
    unimplemented_(u"java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::putTreeVal(HashMap* map, HashMap_NodeArray* tab, int32_t h, ::java::lang::Object* k, ::java::lang::Object* v)");
    return 0;
}

void java::util::HashMap_TreeNode::removeTreeNode(HashMap* map, HashMap_NodeArray* tab, bool movable)
{ /* stub */
    unimplemented_(u"void java::util::HashMap_TreeNode::removeTreeNode(HashMap* map, HashMap_NodeArray* tab, bool movable)");
}

java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::root()
{ /* stub */
    unimplemented_(u"java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::root()");
    return 0;
}

java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::rotateLeft(HashMap_TreeNode* root, HashMap_TreeNode* p)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::rotateLeft(HashMap_TreeNode* root, HashMap_TreeNode* p)");
    return 0;
}

java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::rotateRight(HashMap_TreeNode* root, HashMap_TreeNode* p)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::HashMap_TreeNode* java::util::HashMap_TreeNode::rotateRight(HashMap_TreeNode* root, HashMap_TreeNode* p)");
    return 0;
}

void java::util::HashMap_TreeNode::split(HashMap* map, HashMap_NodeArray* tab, int32_t index, int32_t bit)
{ /* stub */
    unimplemented_(u"void java::util::HashMap_TreeNode::split(HashMap* map, HashMap_NodeArray* tab, int32_t index, int32_t bit)");
}

int32_t java::util::HashMap_TreeNode::tieBreakOrder(::java::lang::Object* a, ::java::lang::Object* b)
{ /* stub */
    clinit();
    unimplemented_(u"int32_t java::util::HashMap_TreeNode::tieBreakOrder(::java::lang::Object* a, ::java::lang::Object* b)");
    return 0;
}

void java::util::HashMap_TreeNode::treeify(HashMap_NodeArray* tab)
{ /* stub */
    unimplemented_(u"void java::util::HashMap_TreeNode::treeify(HashMap_NodeArray* tab)");
}

java::util::HashMap_Node* java::util::HashMap_TreeNode::untreeify(HashMap* map)
{ /* stub */
    unimplemented_(u"java::util::HashMap_Node* java::util::HashMap_TreeNode::untreeify(HashMap* map)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::HashMap_TreeNode::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.TreeNode", 26);
    return c;
}

java::lang::Class* java::util::HashMap_TreeNode::getClass0()
{
    return class_();
}

