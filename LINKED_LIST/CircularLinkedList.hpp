#ifndef CIRCULARLINKEDLIST_HPP
#define CIRCULARLINKEDLIST_HPP

class CircularLinkedList{
    
private:
    struct Node{
        int value;
        Node *next;
        Node(int value);
        Node(int value, Node *ptr);
    };
    Node *tail;
    int list_size;         
          
public:
    CircularLinkedList();
    

    int size();
    bool isEmpty();
    int front();
    
    // Other methods.
            
    void addHead(int value);
    void addTail(int value);
    int removeHead();
    bool isPresent(int data);
    void print();
    void freeList();
    bool removeNode(int key);
    CircularLinkedList* copyListReversed();
    CircularLinkedList* copyList();
    
    ~CircularLinkedList();        
};

#endif // CIRCULARLINKEDLIST_HPP
