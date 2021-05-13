#include "StackLL.hpp"
#include <iostream>
using namespace std;

StackLL::StackLL(){
}

StackLL::Node::Node(int v, Node *n){
    value = v;
    next  = n;
}

int StackLL::size(){
    return stack_size;
}

bool StackLL::isEmpty(){
    return stack_size==0;
}

int StackLL::peek(){
    if(head==nullptr){
        cout << "the Stack is empety";
        return -1;
    }
    return head->value;
}

void StackLL::push(int value){
    head = new Node(value,head);
    stack_size++;
    return;
}


int StackLL::pop(){
    if(head==nullptr){
        cout << "the stack is empety";
        return -1;
    }
    Node *deleteMe = head;
    head = head->next;
    int v = deleteMe->value;
    delete deleteMe;
    stack_size--;
    return v;
}

void StackLL::print(){
    
    Node *curr = head;
    if(curr!=nullptr)
        cout << "The Stack is empety";
        
    while(curr!=nullptr){
        cout << curr->value << " ";
        curr = curr->next;
    }
    
}

StackLL::~StackLL(){
}

