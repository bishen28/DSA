#ifndef BST_HPP
#define BST_HPP
#include <vector>
using namespace std;
class BST
{
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
    BST();
    ~BST();
    
    // Problem on Binery search tree
    
    void CreateBinaryTree(int arr[], int size);
    Node *CreateBinaryTree(int arr[], int start, int end);
    void InsertNode(int value);
    Node *InsertNode(int value, Node *node);
    bool RFind(int value);
    bool Find(int value);
    bool Find2(int value);
    int FindMin();
    int FindMin(Node *root);
    int FindMax();
    int FindMax(Node *root);
    bool isBST3(Node *root);
    bool isBST();
    bool isBST(Node *curr, int min, int max);
    bool isBST2();
    //bool isBST2(Node *root, int& count);
    bool isBST2(Node *root, vector<int>& vec);
    void DeleteNode(int value);
    Node *DeleteNode(Node *node, int value);
    int LcaBST(int first, int second);
    int LcaBST(Node *curr, int first, int second);
    Node *trimOutsideRange(Node *curr, int min, int max);
    void trimOutsideRange(int min, int max);
    void printInRange(int min, int max);
    void printInRange(Node *root, int min, int max);
    int FloorBST(int val);
    int CeilBST(int val);

};

#endif // BST_HPP
