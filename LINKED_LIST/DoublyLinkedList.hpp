#ifndef DOUBLYLINKEDLIST_HPP
#define DOUBLYLINKEDLIST_HPP

class DoublyLinkedList{
   private: 
    struct Node{
        int value;
        Node* next;
        Node* prev;
        Node(int v, Node *nxt, Node *prv);
        Node(int v);
    };
    Node *head;
    Node *tail;
    int list_size;

  public:
    DoublyLinkedList();
    
/* caution
1) take care of list_size in each operation.
Doubly Linked List -> In a Doubly Linked list, there are two pointers in each node. 
These pointers are called prev and next. The prev pointer of the node will point to the
node before it and the next pointer will point to the node next to the given node. 
In a doubly linked list, we keep track of both head of the linked list and tail of linked list 

For any linked list there are only three cases zero element, one element, and generally. 
For doubly linked list, we have a few more things 
1. null values (head and tail both can be modified) 
2. Only element (head and tail both can be modified) 
3. First element (head can be modified) 
4. General case 
5. Last element (tail can be modified) 

 */

  
 /* verified */   int size();           // done 
 /* verified */   bool isEmpty();       // done
 /* verified */   virtual int front();                  // return first element of list // or also called peek
 /* verified */   void addHead(int value);
 /* verified */   void addTail(int value);
 /* verified */   int removeHead();
 /* verified */   bool removeNode(int key);
 /* verified */   bool isPresent(int key);
/*  verified */    void freeList();
/*  verified */    void print();
/*  verified */    void reverseList();
/*  verified */    void copyListReversed(DoublyLinkedList& dll);
/*not  verified */    void copyList(DoublyLinkedList& dll);
/*not  verified */    void sortedInsert(int value);
/*not  verified */    void removeDuplicate();
    
/*not  verified */ // ===> the list_size  opertion for all the functions
                   // or else every thing may be verified
    ~DoublyLinkedList();

};

#endif // DOUBLYLINKEDLIST_HPP
