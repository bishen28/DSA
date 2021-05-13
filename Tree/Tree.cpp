#include "Tree.hpp"
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <utility>
using namespace std;
Tree::Tree(){
    root = nullptr;
}

Tree::Node::Node(int v){
    value = v;
    lChild = nullptr;
    rChild = nullptr;
}
Tree::Node::Node(int v, Node *l, Node*r){
    value = v;
    lChild = l;
    rChild = r;
}

     void Tree::levelOrderBinaryTree(int arr[],int size){ 
         root = levelOrderBinaryTree(arr, 0,size);
         cout << endl;
}
     Tree::Node *Tree::levelOrderBinaryTree(int arr[], int start, int size){
     if(start>=size) return nullptr;
    Node *tempNode = new Node(arr[start]);
    int left = 2*start + 1;
    int right  = 2*start + 2;
   // cout << left << " " << right << " ";
    if(left<size)  tempNode->lChild = levelOrderBinaryTree(arr,left,size);
    if(right<size) tempNode->rChild = levelOrderBinaryTree(arr,right,size);
   return tempNode ; 
}
     void Tree::PrintPreOrder(){
         cout << "PrintPreOrder:- " ;
         PrintPreOrder(root);
         cout << endl;
     }
     void Tree::PrintPreOrder(Node *curr){
         if(curr==nullptr) return;
         cout << curr->value << " " ;
         PrintPreOrder(curr->lChild);
         PrintPreOrder(curr->rChild);
     }
     void Tree::PrintPostOrder(){
         cout << "PrintPostOrder:- " ;
         PrintPostOrder(root);
         cout << endl;
     }
     void Tree::PrintPostOrder(Node *curr){
         if(curr==nullptr) return;
         PrintPostOrder(curr->lChild);
         PrintPostOrder(curr->rChild);
         cout << curr->value << " ";
         
     }
     void Tree::PrintInOrder(){
         cout << "PrintInOrder:- " ;
         PrintInOrder(root);
         cout << endl;
     }
     void Tree::PrintInOrder(Node *curr){
         if(curr==nullptr) return;
         PrintInOrder(curr->lChild);
         cout << curr->value << " ";
         PrintInOrder(curr->rChild);
     }
     void Tree::PrintBredthFirst(){
         queue<Node*> qu;
         static int f = 1;
         if(f){
             cout << "PrintBredthFirst:- " ;
             f = 0;
         }
         
         if(root==nullptr){
             cout << "No element in the tree \n";
             return;
         }
         qu.push(root);
         while(qu.empty()==false){
             Node *temp = qu.front(); qu.pop();
             cout << temp->value << " ";
             if(temp->lChild!=nullptr){
                 qu.push(temp->lChild);
             }
             if(temp->rChild!=nullptr){
                 qu.push(temp->rChild);
             }
         }
         cout << endl;
     }
     void Tree::PrintDepthFirst(){ // // without using system stack
         stack<Node*> st;
          static int f = 1;
         if(f){
             cout << "PrintDepthFirst:- " ;
             f = 0;
         }
         if(root==nullptr){
              cout << "No element in the tree \n";  
             return;
         }
         st.push(root);
         while(st.empty()==false){
             Node *temp = st.top();st.pop();
             cout << temp->value << " ";
             
             if(temp->rChild!=nullptr){
                 st.push(temp->rChild);
             }
             if(temp->lChild!=nullptr){
                 st.push(temp->lChild);
             }  
         }
         cout << endl;
     }
     int  Tree::TreeDepth(){
        int depth =   TreeDepth(root);
        return depth;  
     }
     int  Tree::TreeDepth(Node *curr){
         if(curr==nullptr) return 0;
         int ldepth = TreeDepth(curr->lChild);
         int rdepth = TreeDepth(curr->rChild);
         return ldepth>rdepth ? 1+ldepth : 1+rdepth;
     }
    
     void Tree::NthPreOrder(int index){
         int counter = 0;
         NthPreOrder(root,index,counter);
     }
     void Tree::NthPreOrder(Node *curr, int index, int& counter){ 
              if(curr==nullptr) return;
              counter++;
              if(counter==index){
                  cout << curr->value << " ";
              }
              NthPreOrder(curr->lChild,index,counter);
              NthPreOrder(curr->rChild,index,counter);
     }
     void Tree::NthPostOrder(int index){
         int counter = 0;
         NthPostOrder(root,index,counter);
     }
     void Tree::NthPostOrder(Node *curr, int index, int& counter){  
          if(curr==nullptr) return;
           NthPostOrder(curr->lChild,index,counter);
           NthPostOrder(curr->rChild,index,counter);
           counter++;
           if(counter==index){
               cout << curr->value << " ";
           }
          
     }
     void Tree::NthInOrder(int index){
         int counter = 0;
         NthInOrder(root,index,counter);
     }
     void Tree::NthInOrder(Node *curr, int index, int& counter){
         if(curr==nullptr) return;
         NthInOrder(curr->lChild,index,counter);
         counter++;
         if(counter==index){
               cout << curr->value << " ";
         }
         NthInOrder(curr->rChild,index,counter);
         
         
     }

     Tree *Tree::CopyTree(){
         Tree *T(nullptr);
         Node *curr = CopyTree(this->root);
         T->root = curr;
         return T;
     }
     Tree::Node *Tree::CopyTree(Node *curr){
         if(curr==nullptr) return nullptr;
         Node *TempNode = new Node(curr->value);
         TempNode->lChild = CopyTree(curr->lChild);
         TempNode->rChild = CopyTree(curr->rChild);
         return TempNode;
     }
     
   
     Tree *Tree::CopyMirrorTree(){
         Tree *T;
         Node *curr = CopyMirrorTree(root);
         T->root = curr;
         return T;
     }
      
     Tree::Node *Tree::CopyMirrorTree(Node *curr){
         if(curr==nullptr) return nullptr;
         Node *TempNode = new Node(curr->value);
         TempNode->rChild = CopyMirrorTree(curr->lChild);
         TempNode->lChild = CopyMirrorTree(curr->rChild);
         return TempNode;
         
     }
       
     int Tree::numNodes(){
         cout << "Total Number of Nodes:- ";
         return numNodes(root);
         
     }
     int Tree::numNodes(Node *curr){
         if(curr==nullptr) return 0;
         return 1+numNodes(curr->lChild) + numNodes(curr->rChild);
     }
     
     int Tree::numLeafNodes(){
         cout << "numLeafNodes:- ";
         return numLeafNodes(root);
     }
     int Tree::numLeafNodes(Node *curr){
         if(curr==nullptr) return 0;
         if(curr->lChild==nullptr&&curr->rChild==nullptr) return 1;
         return numLeafNodes(curr->lChild) + numLeafNodes(curr->rChild);
     }
    
     bool Tree::isEqual(Tree *T2){
         return Identical(this->root,T2->root);
     }
     
     bool Tree::Identical(Node *node1, Node *node2){
         if(node1==nullptr&&node2==nullptr) return true;
         if(node1==nullptr||node2==nullptr) return false;
return (Identical(node1->lChild,node2->lChild)&&Identical(node1->rChild,node2->rChild)&&node1->value==node2->value);

     }
     
     
     void Tree::Free(){
         FreeTree(this->root);
         this->root = nullptr;
     }
     
     void Tree::FreeTree(Node* curr){
         if(curr==nullptr) return;
         FreeTree(curr->lChild);
         FreeTree(curr->rChild);
         delete curr;
     }
     
     Tree::Node *Tree::treeToListRec(){
         Node *head = treeToListRec(root);
         return head;
     }
//     Tree::Node *Tree::treeToListRec(Node *curr){
//         if(curr==nullptr) return nullptr;
//         
//         Node *Head = nullptr, *Tail = nullptr;
//         
//         if(curr->lChild==nullptr&&curr->rChild==nullptr){
//             Head = Tail = curr;
//             return curr;
//         }
//         
//         if(curr->lChild!=nullptr){
//             Head = treeToListRec(curr->lChild);
//         }
// 
//     }
     
     void Tree::printAllPath(){
         vector<int> vec;
         printAllPath(root,vec);
     }
     void Tree::printAllPath(Node *curr, vector<int> &vec){
         if(curr) vec.push_back(curr->value);
         if(curr->lChild==nullptr&&curr->rChild==nullptr){
             for(int i=0;i<vec.size();i++){
                 cout << vec[i] << " ";
             }
             cout << endl;
         }
         
         if(curr->lChild)printAllPath(curr->lChild,vec);
         if(curr->rChild)printAllPath(curr->rChild,vec);
         vec.pop_back();
     }
     
     
     int Tree::LCA(int first, int second){
         Node *ans  = LCA(root,first,second);
         if(ans)return ans->value;
         else{
             cout << "LCA NOT FOUND";
             return -1;
         }
     }
     Tree::Node *Tree::LCA(Node *curr, int first, int second){
         if(curr==nullptr)return nullptr;
         if(curr->value==first||curr->value==second) return curr;
         Node *left,*right; 
         left = LCA(curr->lChild,first,second);
         right = LCA(curr->rChild,first,second);
         
         if(left&&right) return curr;
         else if(left) return left;
         else return right;
     }
     int Tree::findMaxBT(){
         int mx = findMaxBT(root);
         return mx;
     }
     int Tree::findMaxBT(Node *curr){
         
         int lmx ,rmx;
         lmx = rmx = INT_MIN;
         if(curr->lChild) lmx = findMaxBT(curr->lChild);
         if(curr->rChild) rmx = findMaxBT(curr->rChild);
         return  curr->value > (lmx>rmx ? lmx:rmx) ? curr->value : (lmx>rmx ? lmx:rmx);
     }
     
     bool Tree::searchBT(int value){
        bool x = searchBT(root,value);
        return x ? true:false;
    }
     bool Tree::searchBT(Node *curr, int value){
         if(curr==nullptr) return false;
         if(curr->value==value) return true;
         int l = searchBT(curr->lChild,value);
         if(l) return true;
         int r = searchBT(curr->lChild,value);
         if(r) return true;
         return false;
     }
  
     int Tree::numFullNodesBT(){
         int count = numFullNodesBT(root);
         return count;
     }
     int Tree::numFullNodesBT(Node *curr){
         int count = 0;
         if(curr==nullptr) return 0;
         
         count =  numFullNodesBT(curr->lChild) + numFullNodesBT(curr->rChild);
         if(curr->lChild && curr->rChild) count++;
         return count;
     }
     
     int Tree::maxLengthPathBT(){
         return maxLengthPathBT(root);
     }
     int Tree::maxLengthPathBT(Node *curr){
         if(curr==nullptr) return  0;
         int lh = TreeDepth(curr->lChild);
         int rh = TreeDepth(curr->rChild);
         int mx = lh+rh+1;
         int ldia = maxLengthPathBT(curr->lChild);
         int rdia = maxLengthPathBT(curr->rChild);
         if(ldia>mx) mx = ldia;
         if(rdia>mx) mx = rdia;
         return mx;
     }
     
     int Tree::sumAllBT(){
         int ans = sumAllBT(root);
         return ans;
     }
     int Tree::sumAllBT(Node *curr){
         if(curr==nullptr) return 0;
         else return sumAllBT(curr->lChild) + sumAllBT(curr->rChild) + curr->value;
     }
    
     void Tree::iterativePreOrder(){
        Node* curr = root;
        stack<Node*> stk;
        if(curr!=nullptr) stk.push(curr);
        while(stk.empty()==false){
            curr = stk.top();
            cout << curr->value << " ";
            stk.pop();
            stk.push(curr->rChild);
            stk.push(curr->lChild);
        } 
     }
     
     void Tree::iterativePostOrder(){
           stack<pair<Node*,int>>  stk;
           Node *curr = root;
           if(curr==nullptr) return;
           pair<Node*,int> p = {curr,0};
           stk.push(p);
           while(stk.empty()==false){
               p = stk.top();
               //cout << "YES\n";
               if(p.second==1){
                   cout << p.first->value << " ";
                   stk.pop();
               }else{
                  stk.top().second = 1; 
               //  p.second = 1; 
                 curr = p.first;
                 
                 if(curr->rChild!=nullptr){
                     p = {curr->rChild,0};
                     stk.push(p);
                 }
                 if(curr->lChild!=nullptr){
                     p = {curr->lChild,0};
                     stk.push(p);
                     
                 }
                 
               }   
           } 
            cout << endl;
     }
     void Tree::iterativeInOrder(){
         
         stack<pair<Node*,int>>  stk;
           Node *curr = root;
           if(curr==nullptr) return;
           pair<Node*,int> p = {curr,0};
           stk.push(p);
           while(stk.empty()==false){
               p = stk.top();
               stk.pop();
               curr = p.first;
               if(p.second==1){
                     cout << p.first->value << " ";
                 }else{
                    if(curr->rChild!=nullptr){
                     p = {curr->rChild,0};
                     stk.push(p);
                   }
                   pair<Node*,int> p = {curr,1};
                   stk.push(p);
                   if(curr->lChild!=nullptr){
                     p = {curr->lChild,0};
                     stk.push(p); 
                   }
                   
                 } 
           } 
            cout << endl;
     }

Tree::~Tree(){
}

