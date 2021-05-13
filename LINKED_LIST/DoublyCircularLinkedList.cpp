#include "DoublyCircularLinkedList.hpp"
#include <iostream>

using namespace std;
DoublyCircularLinkedList::DoublyCircularLinkedList(){
    list_size = 0;
}
DoublyCircularLinkedList::Node::Node(int v, Node *nxt, Node *prv){
    value = v;
    next = nxt;
    prev = prv;
}
DoublyCircularLinkedList::Node::Node(int v){
    value = v;
    next = nullptr;
    prev = nullptr;
}
int DoublyCircularLinkedList::size(){
    return list_size;
}
bool DoublyCircularLinkedList::isEmpty(){
    return list_size==0;
}
int DoublyCircularLinkedList::peekHead(){
    if(list_size==0){
        cout << "EmptyListException \n";
        return -1;
    }
        return head->value;
    
}

bool DoublyCircularLinkedList::isPresent(int key){
    Node *curr = head;
    if(curr==nullptr) return false;
    
    do{
       if(curr->value==key) return true;
       curr = curr->next; 
    }while(curr!=head);
    return false ;
}

/*  if i delete the heap memory the  location of memory which is stored in  
    pointer will be automatically deleted or pointer still storing the
    address of that memory                                                           */
// 
void DoublyCircularLinkedList::freeList(){ // 
    Node *curr = head;
    if(head==nullptr) return;
    Node *deleteMe = nullptr;
    do{
        deleteMe = curr;
        curr = curr->next;
        delete deleteMe;
    }while(curr!=head);
    head = tail = nullptr;
    list_size=0;
}

void DoublyCircularLinkedList::print(){
  Node *curr = head;
  if(head==nullptr){
      cout << "no element is present" << endl;
      return;
  }
  do{
     cout << curr->value << " ";
     curr = curr->next; 
  }while(curr!=head);
  cout << endl;
}

void DoublyCircularLinkedList::addHead(int value){
    
    Node *newNode = new Node(value);
    
    if(head==nullptr){
        head = tail = newNode;
        head->next = head->prev = newNode;
    }else{
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
        tail->next = newNode;
        head = newNode;
    }
    list_size++;
return;
}
void DoublyCircularLinkedList::addTail(int value){
    Node *newNode = new Node(value);
    
    if(tail==nullptr){
        head = tail = newNode;
        tail->next = tail->prev = newNode;
    }else{
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
        tail->next = newNode;
        tail = newNode;
    }
return;
}

int DoublyCircularLinkedList::removeHead(){
    if(head==nullptr) return -1;
    
    Node *deleteMe = head;
    int num = 0;
    if(head==tail){
        num = deleteMe->value;
        delete deleteMe;
        head = tail = nullptr;
        return num;
    }else{
        num = deleteMe->value;
        tail->next = head->next;
        head->next->prev =  tail;
        head = head->next;
        delete deleteMe;
        return num;
    }
}

int DoublyCircularLinkedList::removeTail(){
     if(head==nullptr) return -1;
    
    Node *deleteMe = tail;
    int num = 0;
    if(head==tail){
        num = deleteMe->value;
        delete deleteMe;
        head = tail = nullptr;
        return num;
    }else{
        num = deleteMe->value;
        head->prev = tail->prev;
        tail->prev->next =  head;
        tail = tail->prev;
        delete deleteMe;
        return num;
    }
}

DoublyCircularLinkedList::~DoublyCircularLinkedList(){
}

