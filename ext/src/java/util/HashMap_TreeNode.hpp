// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/LinkedHashMap_Entry.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace util {
typedef ::SubArray< ::java::util::Map_Entry, ::java::lang::ObjectArray > Map_EntryArray;
typedef ::SubArray< ::java::util::HashMap_Node, ::java::lang::ObjectArray, Map_EntryArray > HashMap_NodeArray;
}  // namespace util
}  // namespace java

struct default_init_tag;

class java::util::HashMap_TreeNode final
    : public LinkedHashMap_Entry
{

public:
    typedef LinkedHashMap_Entry super;

private:
    static bool $assertionsDisabled_;

public: /* package */
    HashMap_TreeNode* left {  };
    HashMap_TreeNode* parent {  };
    HashMap_TreeNode* prev {  };
    bool red {  };
    HashMap_TreeNode* right {  };

protected:
    void ctor(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* val, HashMap_Node* next);

public: /* package */
    static HashMap_TreeNode* balanceDeletion(HashMap_TreeNode* root, HashMap_TreeNode* x);
    static HashMap_TreeNode* balanceInsertion(HashMap_TreeNode* root, HashMap_TreeNode* x);
    static bool checkInvariants(HashMap_TreeNode* t);
    HashMap_TreeNode* find(int32_t h, ::java::lang::Object* k, ::java::lang::Class* kc);
    HashMap_TreeNode* getTreeNode(int32_t h, ::java::lang::Object* k);
    static void moveRootToFront(HashMap_NodeArray* tab, HashMap_TreeNode* root);
    HashMap_TreeNode* putTreeVal(HashMap* map, HashMap_NodeArray* tab, int32_t h, ::java::lang::Object* k, ::java::lang::Object* v);
    void removeTreeNode(HashMap* map, HashMap_NodeArray* tab, bool movable);
    HashMap_TreeNode* root();
    static HashMap_TreeNode* rotateLeft(HashMap_TreeNode* root, HashMap_TreeNode* p);
    static HashMap_TreeNode* rotateRight(HashMap_TreeNode* root, HashMap_TreeNode* p);
    void split(HashMap* map, HashMap_NodeArray* tab, int32_t index, int32_t bit);
    static int32_t tieBreakOrder(::java::lang::Object* a, ::java::lang::Object* b);
    void treeify(HashMap_NodeArray* tab);
    HashMap_Node* untreeify(HashMap* map);

    // Generated
    HashMap_TreeNode(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* val, HashMap_Node* next);
protected:
    HashMap_TreeNode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

private:
    virtual ::java::lang::Class* getClass0();
};
