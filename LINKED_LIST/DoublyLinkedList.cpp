#include "DoublyLinkedList.hpp"
#include <iostream> 
using namespace std;
                         // constructor 
                           
DoublyLinkedList::DoublyLinkedList(){
            list_size = 0;
            head = nullptr;
            tail = nullptr;
}
DoublyLinkedList::Node::Node(int v, Node *nxt, Node *prv){
             value = v;
             next = nxt;
             prev = prv;
}
DoublyLinkedList::Node::Node(int v){
            value = v;
            next = nullptr;
            prev = nullptr;
}


       // Other  DoublyLinkedList methods.  

int DoublyLinkedList::size(){
    return list_size;
}                                                

bool DoublyLinkedList::isEmpty(){
     return list_size==0;
 }

int DoublyLinkedList::front(){
    if(list_size==0){
        cout << "empety list";
        return -1;
    }
   return head->value;
}

void DoublyLinkedList::addHead(int value){
    Node *newNode = new Node(value,nullptr,nullptr);
    if(list_size==0){
        head = tail = newNode;
    }else{
       newNode->next = head;
       head->prev = newNode;
       head = newNode; 
    }
    list_size++;
}


void DoublyLinkedList::addTail(int value){
    Node *newNode = new Node(value,nullptr,nullptr);
    if(list_size==0){
        head = tail = newNode;
    }else{
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;        
    }
    list_size++;
}

int DoublyLinkedList::removeHead(){
    
    if(list_size==0){
        cout << "EmptyListException";
        return -1;
    }
    
    Node *deleteMe =  head;
    int value = head->value;
    head = head->next; 
    
   
   if(head==nullptr){
       tail = nullptr;
   }else{
       head->prev = nullptr;
   }
   
   
   delete deleteMe;
   list_size--;
   return value; 
}

bool DoublyLinkedList::removeNode(int key){
    Node *curr = head;
    //Node *Next = nullptr;
    Node *deleteMe = nullptr;
    if(curr->value==key){
        removeHead();
        return true;
    }
    
    while(curr->next!=nullptr){
        
        if(curr->next->value==key){
            
            deleteMe = curr->next;
            curr->next = curr->next->next;
            
            if(curr->next==nullptr){
                tail = curr;
            }else{ 
                 curr->next->prev = curr;
            }
            
            delete deleteMe;
            list_size--;
            return true;
            
        }
        curr = curr->next;
    }
    return false;
}

bool DoublyLinkedList::isPresent(int key){
    Node *curr = head;
    
    while(curr!=nullptr){
        if(curr->value==key) return true;
        curr = curr->next;
    }
    
    return  false;
}

void DoublyLinkedList::freeList(){
    Node *curr = head;
    Node *deleteMe = nullptr;
    while(curr!=nullptr){
        deleteMe = curr;
        curr = curr->next;
        delete deleteMe;
    }
    head = tail = nullptr;
    list_size=0;  
}
 
void DoublyLinkedList::print(){
    Node *curr = head;
    if(head==nullptr){
        cout << "no element is present";
        return ;
    }
    while(curr!=nullptr){
        cout << curr->value << " ";
        curr = curr->next;
    }
    
    return;
}

void DoublyLinkedList::reverseList(){   //  reverse of doubly linked lost is very important and good concept
    Node *curr = head;
    Node *temp = nullptr;
    tail = head;
    while(curr!=nullptr){
        temp = curr->next;
        curr->next = curr->prev;
        curr->prev = temp;
        if(curr->prev==nullptr){
            head = curr;
            return;
        }
        curr = curr->prev;
    }
   return;
}


void DoublyLinkedList::copyListReversed(DoublyLinkedList& dll){
     Node *curr = head;
     while (curr != nullptr){
         dll.addHead(curr->value);
         curr = curr->next;
     }
}

void DoublyLinkedList::copyList(DoublyLinkedList& dll1){   // need to verify
    Node *curr = head;                                    // can also done by adding tail method;
    Node *newNode = nullptr;
    if(head==nullptr){
        dll1.head = nullptr;
        dll1.tail = nullptr;
        return ;
    }else{
        newNode = new Node(curr->value);
        dll1.head = newNode;
        Node *curr1 = newNode;
        
        while(curr->next!=nullptr){
            curr = curr->next;
            newNode = new Node(curr->value,nullptr,curr1);
            curr1->next = newNode;
            curr1 = newNode;
            
        }
    }
return ;
}


void DoublyLinkedList::sortedInsert(int value){
     
    Node *curr = head;
    Node *newNode = new Node(value,nullptr,nullptr); 
    
    if(curr==nullptr){
        head = newNode;
        tail = newNode;
        list_size++;
        return;
    }
    
    if(head->value>=value){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        list_size++;
        return;
    }

   while(curr->next!=nullptr&&curr->next->value>value){
       curr=curr->next;
   }
       
   if(curr->next==nullptr){
       tail = newNode;
       newNode->prev = curr;
       curr->next = newNode;
       list_size++;
   }else{
         newNode->next = curr->next;
         newNode->prev = curr;
         curr->next = newNode;
         newNode->next->prev = newNode;
         list_size++;
/*   the below first thought came in to my mind 
//       newNode->next = curr->next;
//       curr->next->prev = newNode;
//       curr->next = newNode;
//       newNode->prev = curr;
*/
   }
       
 return ;  
}


void DoublyLinkedList::removeDuplicate(){  // given that the list is sorted
    Node *curr = head;
    Node *deleteMe = nullptr;
    if(head==nullptr){
        return;
    }
    while(curr!=nullptr&&curr->next!=nullptr){  // curr->next!=nullptr  => condition in side while loop is not good it should be curr!=nullptr
        if(curr->value==curr->next->value){
            deleteMe = curr->next;
            curr->next = deleteMe->next;
            
            if(deleteMe->next==nullptr){
                tail = curr;
                delete deleteMe;
            }else{
              deleteMe->next->prev = curr;
              delete deleteMe;  
            }
            
        }else{
            curr = curr->next;
        }
    }
   return;
}

DoublyLinkedList::~DoublyLinkedList(){
}

