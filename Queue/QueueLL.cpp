#include "QueueLL.hpp"
#include <iostream>
using namespace std;

QueueLL::QueueLL()
{
}
QueueLL::Node::Node(int v, Node *n){         
            value = v;         
            next = n;
 }

int QueueLL::size(){
  return queue_size;
}
bool QueueLL::isEmpty(){
  return queue_size==0;
}   
      
int QueueLL::peek(){
  if(tail==nullptr) {
    cout << "queue is empety";
    return INT_MAX;
  }else{
    return tail->next->value;
  }    
} 
      
void QueueLL::push(int value){
    Node *newNode = new Node(value,nullptr);
    if(tail==nullptr){
        tail = newNode;
        tail->next = newNode;
    }else{
        newNode->next = tail->next;
        tail->next = newNode;
        tail = tail->next ;   
    }
    queue_size++;
    return;          
}        

int QueueLL::pop(){
     Node *deleteMe;
     int num = -1;
    if(tail==nullptr){
        cout << "queue is empety";
        return -1;
    }else{
        deleteMe = tail->next;
        num = deleteMe->value;
        if(queue_size==1){
            tail = nullptr;
        }else{
            tail->next = deleteMe->next;
            delete deleteMe;
        }
        queue_size--;
    }   
   return num;
}  

       
void QueueLL::print(){
    if(tail==nullptr){
        cout << "the queue is empety";
    }else{
        Node *curr = tail->next;    
        do{
            cout << curr->value << " "; 
            curr = curr->next;
        }while(curr!=tail->next);    
    }
}

QueueLL::~QueueLL(){
}

