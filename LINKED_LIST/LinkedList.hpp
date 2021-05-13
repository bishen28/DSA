#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

class LinkedList{
   private: 
    struct Node{
       int value;
       Node *next;
       Node(int v, Node *n);                  
       Node(int v);
    };
    Node *head;
    int list_size; 
public:
     LinkedList();
    ~LinkedList();
     int size();
     bool isEmpty();
      
    // Other linkeclTabCtrld list methods.   
       
 /*verified*/    void add_head(int v);     // done
 /*verified*/    void push_back(int v);    // done
 /*verified*/    void insert(int v, int pos);    // done
 /*verified*/    void insert_s(int v);  // insert in sorted order    // done 
 /*verified*/    void display();           // done
 /*verified*/    bool isPresent(int v);    // done
    
    // delete element from linked list

/*verified*/      void removeHead();          // done
/*verified*/      bool deleteNode(int v);     // done
/*NOT verified*/  bool deleteNodeS(int v);     // done
/*NOT verified*/  void freelist();            // done
                   void reverse();            // done ;   "good problem"
                   void rere();           // not_done ;   "good problem"
                   Node*  recureverse(Node* curr);
                   
                   
                   void removeDuplicate();                      //  done             list must be sorted
                   LinkedList* CopyList();                       //done ;   "good problem"
                   LinkedList* CopyListReversed();                //done ;   "good problem"
/*NOT verified*/   bool IcompareList(LinkedList* ll);
                   bool RcompareList(LinkedList* ll);
                   bool compareList(Node *head1, Node *head2);
                   int findLength();                                  // done 
/*verified*/       int nthNodeFromBegining(int index);                //done ;   "good problem"
                   int nthNodeFromEnd(int index);                    //done ;   "good problem"
                   int nthNodeFromEnd2(int index);
                   bool loopdetect();
                   int looptypeDetect();
                  
// udemy course code
     int sum();               // done
     int findMax();          // done
     int findMin();          // done
     bool search(int key);    // done
     bool isSorted();          // done
     
     void concating();
     void merge2LL();
     void unionof2LL();
     void intrsectionfLL();
     
                   
};

#endif // LINKEDLIST_HPP
