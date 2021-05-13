#ifndef TREE_HPP
#define TREE_HPP
#include <vector>
using namespace std;
class Tree{
    
private: 
    
    struct Node{
        int value;
        Node *lChild;
        Node *rChild;
        Node(int v);
        Node(int v,Node *l, Node *r);
    };
    Node *root;
    
public:
     Tree();
    ~Tree();
     void levelOrderBinaryTree(int arr[],int size);
     Node* levelOrderBinaryTree(int arr[], int start, int size);
     
     
     void PrintPreOrder();
     void PrintPreOrder(Node *node);
     void PrintPostOrder();
     void PrintPostOrder(Node *node);
     void PrintInOrder();
     void PrintInOrder(Node *node);
     void PrintBredthFirst();
     void PrintDepthFirst(); // without using system stack
     int  TreeDepth();
     int  TreeDepth(Node *root);
     void NthPreOrder(int index);
     void NthPreOrder(Node *node, int index, int& counter);  // NthPostOrder
     void NthPostOrder(int index);
     void NthPostOrder(Node *node, int index, int& counter);  // NthInOrder
     void NthInOrder(int index);
     void NthInOrder(Node *node, int index, int& counter);
     
     Tree* CopyTree();
     Node* CopyTree(Node *curr);
     Tree* CopyMirrorTree();
     Node* CopyMirrorTree(Node *curr);
     int   numNodes();
     int   numNodes(Node *curr);
     int   numLeafNodes();
     int   numLeafNodes(Node *curr);
     bool  isEqual(Tree *T2);
     bool  Identical(Node *node1, Node *node2);
     void  Free();
     void  FreeTree(Node* node);
     Node* treeToListRec();
     Node* treeToListRec(Node *curr);
     void  printAllPath();
     void  printAllPath(Node *curr, vector<int> &stk);
     int   LCA(int first, int second);
     Node* LCA(Node *curr, int first, int second);
     int   findMaxBT();
     int   findMaxBT(Node *curr);
     bool  searchBT(int value);
     bool  searchBT(Node *root, int value);
     //int   TreeDepth();
    // int   TreeDepth(Node *root);
     int   numFullNodesBT();
     int   numFullNodesBT(Node *curr);
     int   maxLengthPathBT();
     int   maxLengthPathBT(Node *curr);
     int   sumAllBT();
     int   sumAllBT(Node *curr);
     void  iterativePreOrder();
     void  iterativePostOrder();
     void  iterativeInOrder();

};

#endif // TREE_HPP
