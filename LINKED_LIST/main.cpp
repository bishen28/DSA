#include <iostream>
#include "LinkedList.hpp"
#include "DoublyLinkedList.hpp"
#include "CircularLinkedList.hpp"
#include "DoublyCircularLinkedList.hpp"
using namespace std;

int main(){
	
 LinkedList ll;
 ll.add_head(2);
 ll.add_head(3);
 ll.add_head(4);
 ll.add_head(5);
 ll.add_head(6);
 ll.add_head(7);
 ll.display();
 ll.rere();
 ll.display();
// dcll.freeList();
// dcll.print();
return 0;
}

