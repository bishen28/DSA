#ifndef QUEUELL_HPP
#define QUEUELL_HPP

class QueueLL{
    
private : 
    struct Node{
        int value = 0;
        Node*  next;
        Node(int v, Node *n);
    };
    int queue_size = 0;
    Node *tail = nullptr;
    
public:
        QueueLL();
        
        int size();
        bool isEmpty();          
        int peek();         
        void push(int value);          
        int pop();          
        void print();
        
        ~QueueLL();

};

#endif // QUEUELL_HPP
