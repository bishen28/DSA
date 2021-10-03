#include "Heap.hpp"
#include <vector> 
#include <iostream> 
using namespace std;

// we are here deleing with max heap element 


    Heap::Heap(){
        size = 0;
        arr.push_back(-1);
    }
    
    
    int Heap::leftChild(int i){
        if(2*i<=size) return 2*i;
        else return 0;
    }
    
    
    int Heap::rightChild(int i){
        if(2*i+1<=size) return 2*i+1;
        else return 0;
    }
    
    
    int Heap::parent(int i){
        return i/2;
    }
    
    
    void Heap::siftingDown(int position){    // This operation is also called "heapify".
        
        int i = position;
        int lc = 2*i;
        int rc = 2*i+1;
        int small = -1; // which index is small 
        
        if(lc<=size) small = lc;
        if(rc<=size && (arr[rc]-arr[lc]<0)) small = rc;
        
        if(small!=-1&&(arr[small]-arr[i])){
            swap(arr[small],arr[i]);
            siftingDown(small);
        }
    }
    
    
    void Heap::siftingUp(int position){
        int i = position;
        while(i>1&&arr[i]>arr[i/2]){
            swap(arr[i],arr[i/2]);i/=2;
        }
    }
    
    
    Heap::Heap(vector<int> &array_in){
        for(int i=0;i<array_in.size();i++){
            arr.push_back(arr[i]);
            size++;
        }
        for(int j=size/2;j>=1;j--){  // 1) all leaf is Heap 
             siftingDown(j);         // 2) we try to make all non-leaf node as a heap
        }      
    }

    bool Heap::isEmpty(){
        return size==0;
    }   
     
 
    int Heap::peek(){
       if(size==0) {
           cout << "The Heap is empty";
           return INT_MIN;
       }
     return arr[1];
    }
    
    
    void Heap::insert(int value){
         if(size==CAPACITY){
             cout << "The Heap is full";
             return;
         }
         arr.push_back(value);
         siftingUp(++size);
    }
    
    
    int Heap::remove(){
        if(size==0) {
           cout << "The Heap is empty, We can't remove anything";
           return INT_MIN;
        }
        int  removed = arr[0];
        swap(arr[0],arr[size--]);
        siftingDown(1);
        return removed;
    }   

     



    
    void Heap::heapSort(vector<int> &array_in){
        
    }

Heap::~Heap(){
}

