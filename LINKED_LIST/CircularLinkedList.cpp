#include "CircularLinkedList.hpp"
#include <iostream>
using namespace std;
CircularLinkedList::Node::Node(int v, Node *n){
    value = v;
    next = n;
}
CircularLinkedList::Node::Node(int v){
    value = v;
    next = nullptr;
}
CircularLinkedList::CircularLinkedList(){
    tail = nullptr;
    list_size =0;
}

int CircularLinkedList::size(){
     return list_size; 
}
bool CircularLinkedList::isEmpty(){
    return list_size==0;
}
int CircularLinkedList::front(){
    if(list_size==0){
        cout << "no element is present";
        return -1;
    }else{
        return tail->next->value;
    }
}

void CircularLinkedList::addHead(int value){
    Node *newNode = new Node(value);
    if(tail==nullptr){
        tail = newNode;
        tail->next = newNode;
    }else{
        newNode->next = tail->next;
        tail->next = newNode;
    }
   list_size++;
   return; 
}


void CircularLinkedList::addTail(int value){
    Node *newNode = new Node(value);
    if(tail==nullptr){
        tail = newNode;
        tail->next = newNode;
    }else{
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
    list_size++;
    return;
}

int CircularLinkedList::removeHead(){  // might be lengthy code
    Node *deleteMe = nullptr;
    int num = 0;
    if(tail==tail->next){
        num = tail->value;
        deleteMe = tail;
        tail = nullptr;
        delete deleteMe;
        list_size--;
        return num;
    }
    if(tail==nullptr){
        cout << "not any head is present";
        return INT_MIN;
    }else{
        deleteMe = tail->next;
        tail->next = deleteMe->next;
        num = deleteMe->value;
        delete deleteMe;
        list_size--;
        return num;
    }
}

bool CircularLinkedList::isPresent(int data){
   
      if(tail==tail->next){
          if(tail->value==data) return true;
          else return false;
      }else{
          Node *head = tail->next;
          for(int i=0;i<list_size;i++){
              if(head->value==data) return true;
              head = head->next;
          }
      }
     return false;
}
void CircularLinkedList::print(){
    if(tail==nullptr){
        cout << "no element is present";
    }else{
      Node *head = tail->next;
      Node *curr = head;
      do{
          cout << curr->value << " ";
          curr = curr->next;
      }while(curr!=head);
      
    /*  for(int i=0;i<list_size;i++){  // this is  another method for print 
     *
          cout << head->value << " ";
          head = head->next;
      } 
      */
    }
  return;
}
void CircularLinkedList::freeList(){
    if(tail==nullptr)return;
    
    Node *head = tail->next;
    Node *curr = head;
    Node *deleteMe = nullptr;
    do{
        deleteMe = curr;
        curr = curr->next;
        delete deleteMe;
    }while(curr!=head);
     tail = nullptr;
     list_size = 0;
   return;
}

bool CircularLinkedList::removeNode(int key){  // done good approach 
                                                 // also try by using do while loop
    if(tail==nullptr) return false;
   
    Node *head = tail->next;
    Node *deleteMe = nullptr;
    Node *curr = head;

    if(head->value==key){
        
        if(head->next==tail){
            deleteMe = tail;
            tail = nullptr;
            delete deleteMe;
            list_size=0;
            
        }else{
            deleteMe = head;
            tail->next = deleteMe->next;
            delete deleteMe;
            list_size--;
            
        }
        
        return true;
    }
    
    while(head!=tail){
        if(head->next->value==key){
            deleteMe = head->next;
            head->next = deleteMe->next;
            delete deleteMe;
            list_size--;
            return  true;
        }else{
            head = head->next;
        }
        
    }
   return false;
}

CircularLinkedList* CircularLinkedList::copyListReversed(){
    CircularLinkedList *cll;
    Node *curr = tail->next;
    Node *head = curr;
    
    if(curr!=nullptr){
        cll->addHead(head->value);
        curr = curr->next;
    }
    while(curr!=head){
        cll->addHead(curr->value);
        curr = curr->next;
    }
return cll;
}
CircularLinkedList* CircularLinkedList::copyList(){
    
    CircularLinkedList *cll;
    Node *curr = tail->next;
    Node *head = curr;
    
    if(curr!=nullptr){
        cll->addTail(head->value);
        curr = curr->next;
    }
    while(curr!=head){
        cll->addTail(curr->value);
        curr = curr->next;
    }
return cll;
    
    
    
}
CircularLinkedList::~CircularLinkedList(){
}

