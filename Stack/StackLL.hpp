#ifndef STACKLL_HPP
#define STACKLL_HPP

class StackLL{
    
private:
        struct Node{
           int value;
           Node *next;
           Node(int value, Node *n);
        };
       
       Node *head = nullptr;
       int stack_size = 0;
    
public:
  // Stack class API-methods .
  
     StackLL();
    ~StackLL();
     int size();
     bool isEmpty();
     int peek();
     void push(int value);
     int pop();
     void print();
     
};

#endif // STACKLL_HPP
