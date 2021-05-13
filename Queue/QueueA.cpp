#include "QueueA.hpp"
#include <iostream>
using namespace std;
    QueueA::QueueA(){
       data = new int[Capacity];    
    }

    bool QueueA::add(int value){
      if(queue_size>=Capacity){
          cout << "Queue is full";
          return false;
      }else{
          queue_size++;
          data[back] = value;
          back++;
          back = back%(Capacity);
      }
     return true;
    }
    
    
    int QueueA::remove(){
        int num = 0;
      if(front==back){
          cout << "The queue is empety";
          return -1;
      }else{
          num = data[front];
          front++;
          front%=Capacity;
      }
return num;
    }
    
    
    
    bool QueueA::isEmpty(){
        return queue_size==0;
    }
    int QueueA::size(){
        return queue_size;
    }










QueueA::~QueueA(){
    delete []data;
}

