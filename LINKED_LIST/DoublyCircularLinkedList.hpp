#ifndef DOUBLYCIRCULARLINKEDLIST_HPP
#define DOUBLYCIRCULARLINKEDLIST_HPP

class DoublyCircularLinkedList{
    
  private: 
           
       struct Node{
        int value;
        Node *next;
        Node *prev;
        Node(int v, Node *nxt, Node *prv);
        Node(int v);
    };
    
    Node *head = nullptr;
    Node *tail = nullptr;
    int list_size = 0;
    
public:
    DoublyCircularLinkedList();
 

        int size();
        bool isEmpty();

        int peekHead();

        bool isPresent(int key);
        void freeList();

        void print();

        void addHead(int value);
        void addTail(int value);
        int removeHead();
        int removeTail();

    
    ~DoublyCircularLinkedList();

};

#endif // DOUBLYCIRCULARLINKEDLIST_HPP
