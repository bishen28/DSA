#include "LinkedList.hpp"
#include <iostream>
using namespace std;
LinkedList::LinkedList(){
    head = nullptr;
    list_size = 0;
}
LinkedList::Node::Node(int v, Node *n){
    value = v;
    next  = n;
}
LinkedList::Node::Node(int v){
    value = v;
    next  = nullptr;
}

int  LinkedList::size(){
    return list_size;
}
bool LinkedList::isEmpty(){
    return head==nullptr;
}
void LinkedList::add_head(int v){
    head = new Node(v,head);
    list_size++;
}
void LinkedList::push_back(int v){
    Node *newNode = new Node(v, nullptr);
    Node *curr = head;
    
    if(curr==nullptr){  head = newNode; 
    list_size++;
    }
    
    while(curr->next!=nullptr){
        curr = curr->next;
    }
    list_size++;
    curr->next = newNode;
}
void LinkedList::display(){
    Node *curr = head;
    if(curr==nullptr){ 
        cout << "No element in linked list \n";        return; }
    while(curr!=nullptr){
        cout << curr->value << " ";
        curr = curr->next;
    }
    cout << endl;
    return;
}

void LinkedList::insert(int v, int pos){ /*need to verify*/
    Node *newNode = new Node(v);
    Node *curr= head;
    if(pos==1){
        newNode->next = head;
        head = newNode;
        list_size++;
        return ;
    }else{
       while(pos>=2){   // think about the condition in the while loop
           curr=curr->next;
           pos--;
           if(curr->next==nullptr) {
           cout << "no position is avaoble\n" ;
           return ;
          }
       } 
      // cout << "we are coming here \n";
       newNode->next = curr->next;
       curr->next = newNode;
       list_size++;
    }   
}
void LinkedList::insert_s(int v){        /*need to verify*/
    
    Node *newNode = new Node(v);
    Node *curr = head;
    
    if(curr==nullptr||curr->value>v){
        newNode->next = head;
        head = newNode;
        return ;
    }
    
    while(curr!=nullptr&&curr->next->value>v){
        curr = curr->next;
    } 
     newNode->next = curr->next;     
     curr->next = newNode; 
}
bool LinkedList::isPresent(int v){
    Node *curr = head;
    if(curr==nullptr){ return false;}
    if(curr->value==v){ return true;}
    while(curr->next!=nullptr){
        curr = curr->next;
    if(curr->value==v){ return true;}
    }
    return false;
}

// Delete element from the linked list

void LinkedList::removeHead(){  // pop_front() or you can also return the value of deleted node;
    Node *curr = head;
    if(curr==nullptr){
        return;
    }else{
        Node *deleteHead = head;
        head = curr->next;
        list_size--;
        delete deleteHead;
    }  
   return ; 
}
bool LinkedList::deleteNode(int v){  // only first occurance of node
    Node *curr = head;
    if(head->value==v){
        removeHead();
        return true;
    }
    while(curr->next!=nullptr){
         
         if(curr->next->value==v){
             Node *deleteMe = curr->next;
             curr->next = curr->next->next;
             list_size--;
             delete deleteMe;
             return true;
         }
         curr = curr->next;
    }
    return false;
}

bool LinkedList::deleteNodeS(int v){ // delete all occurance of the node of given value
    
// first while loop will delete all the nodes that are 
// at the front of the list
    Node *curr = head;
    Node *deleteMe;
    //Node *nextNode;
    while(curr!=nullptr&&curr->value==v){    //first while loop will delete all the nodes that are at the front of the list
        deleteMe = head;
        head = curr->next;
        curr = head;
        delete deleteMe;
         list_size--;
      
    }

  while(curr!=nullptr&&curr->next!=nullptr){
      if(curr->next->value==v){
          deleteMe = curr->next;
          curr->next = deleteMe->next;
          delete deleteMe;
          list_size--;
      }else{
          curr=curr->next;
      }
  }  
  return true;
}

 void LinkedList::freelist(){
    Node *curr=head;
    if(curr==nullptr) return;
    Node *deleteMe;
    while(curr!=nullptr){
        deleteMe = curr;
        curr=curr->next;
        delete deleteMe; 
        list_size--;
    }  
    head = nullptr; 
    return ;
}
 int  LinkedList::sum(){
         int sum1=0;
         Node *curr = head;
         while(curr!=nullptr){
             sum1+=curr->value;
             curr=curr->next;
         }
         return sum1;
     }
 int  LinkedList::findMax(){
          int Max = INT_MIN;
          Node *curr=head;
          while(curr!=nullptr){
              if(curr->value>Max) Max = curr->value;
              curr = curr->next;
          }
          
          return Max;
     }
 int  LinkedList::findMin(){
          int Min = INT_MAX;
          Node *curr=head;
          while(curr!=nullptr){
              if(curr->value<Min) Min = curr->value;
              curr = curr->next;
          }  
          return Min;
     }
 bool LinkedList::search(int key){
        Node *curr = head;
        while(curr!=nullptr){
            if(curr->value==key) return true;
            else curr=curr->next;
        }
           return false;
     }
 bool LinkedList::isSorted(){
         Node *curr=head;
         while(curr->next!=nullptr){
             if(curr->value<=curr->next->value);
                 else return false;
                 curr=curr->next;
         } 
         return true;
     }

 void LinkedList::removeDuplicate(){
     
     Node *curr = head;
     Node *deleteMe ;
         
    while(curr!=nullptr){
            if(curr->next!=nullptr&&curr->value==curr->next->value){
                deleteMe = curr->next;
                curr->next = curr->next->next;
                delete deleteMe;
                list_size--;
            }else{
               curr = curr->next; 
            }
         }
     return;
 }

LinkedList* LinkedList::CopyListReversed(){
    LinkedList *tempLL= new LinkedList(); 
    Node *tempNode = nullptr;
    Node *tempNode2 = nullptr;
    Node *curr = head;
    
    while(curr!=nullptr){
        tempNode2 = new Node(curr->value,tempNode);
        curr=curr->next;
        tempNode = tempNode2;
        tempLL->list_size++;
    }
    tempLL->head = tempNode;
    return tempLL;
}

LinkedList* LinkedList::CopyList(){
    LinkedList *tempLL = new LinkedList();  
    Node *headNode = nullptr;
    Node *tailNode = nullptr; 
    Node *tempNode = nullptr; 
    Node *curr = head;
    
    if(curr==nullptr){
        tempLL->head = nullptr;
        tempLL->list_size =0;
        return tempLL; 
    }
    headNode  = new Node(curr->value,nullptr);
    tempLL->head = headNode;
    tailNode = headNode;
    curr = curr->next;
    while(curr!=nullptr){
        tempNode = new Node(curr->value,nullptr);
        tailNode->next = tempNode;
        tailNode = tailNode->next;
        curr = curr->next;
    }
    return tempLL;
}
 

bool LinkedList::IcompareList(LinkedList* ll){             /*not verified*/
    
    Node *head1 = ll->head;
    Node *head2 = head;
    if(head1!=nullptr&&head2!=nullptr) return true;
    
    while(head1!=nullptr&&head2!=nullptr){
        if(head1->value==head2->value){
          head1 = head1->next;
          head2 = head2->next;   
        }else return false;
    }
    return true;
}

bool LinkedList::compareList(Node *head1, Node *head2){     // this functon is call form the RcompareList
      if (head1 == nullptr && head2 == nullptr){
        return true;
      }
     else if ((head1 == nullptr) || (head2 == nullptr) || (head1->value != head2->value)){
            return false;
         }else{
            return compareList(head1->next, head2->next);
        }
} 
bool LinkedList::RcompareList(LinkedList* ll){
          return compareList(head, ll->head);
}
int LinkedList::nthNodeFromBegining(int index){
    if(index>list_size){
        cout << "error";
        return 0;
    }
    
   Node *curr =  head;
   while(--index){
       curr = curr->next;
   }
    
    
    
    return curr->value;
}
int LinkedList::nthNodeFromEnd(int index){
    Node *curr = head;
    index = (list_size-index)+1;
    
    if(index>list_size){
        cout << "error";
        return 0;
    }
    while(--index){
       curr = curr->next;
   }
    return curr->value;
}
bool LinkedList::loopdetect(){
     Node *fastPtr = nullptr;
     Node *slowPtr = nullptr;
     fastPtr = slowPtr = head;
     
     while(fastPtr->next!=nullptr&&fastPtr->next->next!=nullptr){
        fastPtr =  fastPtr->next->next;
        slowPtr =  slowPtr->next;
        if(slowPtr==fastPtr){
            cout << "loop detected";
            return true;
        }
     }
     cout << "loop does not detected";
    return false;
}
int LinkedList::looptypeDetect(){   
     Node *fastptr = nullptr;
     Node *slowptr = nullptr;
     
     fastptr = slowptr = head;
     
     while(fastptr->next!=nullptr&&fastptr->next->next!=nullptr){
         
         if(fastptr->next==head||fastptr->next->next==head){
             cout << "circular linked list";
             return 2;
         }
         slowptr = slowptr->next;
         fastptr = fastptr->next->next;
         
         if(slowptr==fastptr){
             cout << "loop detected";
             return 1;
         }
         
         
     }
    cout << "loop does not dected"; 
    return 0;
  
 }
void LinkedList::reverse(){     // more efficient solution
    Node  *curr = head;
    Node  *next =  nullptr;
    Node  *prev =  nullptr;
    if(curr==nullptr||curr->next==nullptr) return;
    
    while(curr!=nullptr){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next; 
    }
    head = prev;
    return;
}

 Node* LinkedList::recureverse(Node* curr){
    if(curr==nullptr||curr->next==nullptr){
        return curr;
    }else{
        Node *rest = recureverse(curr->next);
        curr->next->next = curr;
        curr->next = nullptr;
        return rest;
    }
    
}
void LinkedList::rere(){
    Node *curr = head;
    head = recureverse(curr);
}

 void LinkedList::concating(){
         
     }
 void LinkedList::merge2LL(){
         
     }
 void LinkedList::unionof2LL(){
         
     }
 void LinkedList::intrsectionfLL(){
     
         return ;
     }




LinkedList::~LinkedList(){
}

