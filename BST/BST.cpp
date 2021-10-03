#include "BST.hpp"
#include <iostream>
#include <vector>
using namespace std;

    BST::BST(){}
    void BST::CreateBinaryTree(int arr[], int size){
        CreateBinaryTree(arr,0,size-1);
    }
    BST::Node *BST::CreateBinaryTree(int arr[], int start, int end){
          if(start>end) return nullptr;
          int mid = (start+end)/2;
          Node *temp = new Node(arr[mid]);
          temp->lChild = CreateBinaryTree(arr,start,mid-1);
          temp->rChild = CreateBinaryTree(arr,mid+1,end);
          return temp;
    }
    void BST::InsertNode(int value){
        InsertNode(value,root);
    }
    BST::Node *BST::InsertNode(int value, Node *node){
          if(node==nullptr){
              Node *temp = new Node(value);
              return temp;
          }else{
              if(value<node->value) node->lChild = InsertNode(value, node->lChild);
              else  node->rChild = InsertNode(value, node->rChild);
          }
          return node;
    }
    bool BST::Find(int value){
        Node*curr = root;
        if(curr==nullptr){
            return false;
        }
        while(curr!=nullptr){
            if(value==curr->value)  return true;
            else if(value>curr->value)curr = curr->rChild;
            else  curr = curr->lChild;
        }
        return false;
    }
    bool BST::Find2(int value){
        Node*curr = root;
        if(curr==nullptr) return false;
        while(curr!=nullptr&&curr->value!=value){
           curr =  curr->value>value ? curr->lChild : curr->rChild;
        }
        return curr!=nullptr;
    }
    int BST::FindMin(){
        Node*curr = root;
        if(curr==nullptr){
            return -1;
        }
        while(curr->lChild) curr=curr->lChild;
        return curr->value;
    }
    int BST::FindMax(){
        Node*curr = root;
        if(curr==nullptr){
            return -1;
        }
        while(curr->rChild) curr=curr->rChild;
        return curr->value;
    }
        int BST::FindMin(Node *root){
        Node*curr = root;
        if(curr==nullptr){
            return -1;
        }
        while(curr->lChild) curr=curr->lChild;
        return curr->value;
    }
    
        int BST::FindMax(Node *root){
        Node*curr = root;
        if(curr==nullptr){
            return -1;
        }
        while(curr->rChild) curr=curr->rChild;
        return curr->value;
    }

    bool BST::isBST3(Node *root){
         if(root==nullptr) return true;
         if(root->lChild!=nullptr&&FindMax(root->lChild)<root->value) return false;
         if(root->rChild!=nullptr&&FindMin(root->rChild)>root->value) return false;
         return isBST3(root->lChild)&&isBST3(root->rChild); 
    }
    bool BST::isBST(){
        int min = FindMin(root);
        int max = FindMax(root);
        return isBST(root,min,max);
    }
    bool BST::isBST(Node *curr, int min, int max){
        if(root==nullptr) return true;
        if(root->value>min||root->value<max)return false;
        return isBST(curr->lChild,min,root->value)&&isBST(curr->rChild,root->value,max);
    }
    bool BST::isBST2(){
        vector<int> vec;
        return isBST2(root,vec);
    }
    bool BST::isBST2(Node *root, vector<int>& vec){
        static int isbst = 1;
        if(root==nullptr&&isbst) return true;
        else if(root==nullptr) return false;
        isBST2(root->lChild,vec);
        
        if(vec.size()==0){
            vec.push_back(root->value);
        }else{
            if(vec.back()<root->value) vec.push_back(root->value);
            else isbst = 0;
        } 
 
        isBST2(root->rChild,vec);
        if(isbst) return true;
        else return false;
    }
    

    void BST::DeleteNode(int value){
        root = DeleteNode(root,value);
    }
    BST::Node *BST::DeleteNode(Node *node, int value){
        Node *temp = nullptr;
        if(node!=nullptr){
            if(node->value==value){
                
                if(node->lChild==nullptr&&node->rChild==nullptr){
                    delete node;
                    return nullptr;
                  }
                  
                if(node->lChild==nullptr){
                temp = node->rChild;
                delete node;
                return temp;
                 }
                 
                if(node->rChild==nullptr){
                temp = node->lChild;
                delete node;
                return temp;
                 }
                 
                 int min = FindMin(node->rChild);
                 node->value = min;
                 node->rChild = DeleteNode(node->rChild,min);
            }else{
                
                if(value<node->value) DeleteNode(node->lChild,value); 
                else DeleteNode(node->rChild,value);
            }
        }else{
            cout << "The given key  does not exist in the BST";
        }
  
         return node;
    }
    int BST::LcaBST(int first, int second){
        return LcaBST(root,first,second);
    }
    int BST::LcaBST(Node *curr, int first, int second){
           if(curr==nullptr) return -1;
           
           while(curr!=nullptr){
               if(curr->value>first&&curr->value<second) return curr->value;
               else if(curr->value<first&&curr->value<second) curr=curr->rChild;
               else if(curr->value>first&&curr->value>second) curr=curr->lChild;
               
           }
           return -1;  
    }
   
//    void BST::trimOutsideRange(int min, int max){
//        trimOutsideRange(root,min,max);
//    }
//    BST::Node *BST::trimOutsideRange(Node *curr, int min, int max){
//        if(curr==nullptr)
//    }
    
    void BST::printInRange(int min, int max){
        printInRange(root,min,max);
    }
    void BST::printInRange(Node *root, int min, int max){
        
    }
    int BST::FloorBST(intval){
        
    }
    int BST::CeilBST(int val){
        
    }

BST::~BST(){
}
