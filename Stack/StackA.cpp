#include "StackA.hpp"
#include <iostream>
using namespace std;

StackA::StackA() : StackA(MIN_CAPACITY){
    
}

StackA::StackA(int Capacity){
        data = new int[Capacity];
        capacity = Capacity;
}

bool StackA::isEmpty(){
    return stack_top == -1;
}
int StackA::size(){
    return stack_top+1;
}
         
int StackA::top(){
    if(stack_top==-1){
        cout << "StackA is empety";
        return INT_MIN;
    }else{
        return data[stack_top];
    }
}
    
void StackA::push(int value){
    
     if (size() == capacity){
        int *temp = data;
        capacity = 2 * capacity;
        data = new int[capacity];
        
        for(int i = stack_top; i > -1; i--){
            data[i] = temp[i];
        }
        
       delete[] temp;
       cout << "stack size doubled" << std::endl;
     }
     
      stack_top++;
      data[stack_top] = value; 
return ;   
}
        
int StackA::pop(){   // we can also reduce size of the the stack 
    int pop_data = -1;
        if(isEmpty()){
            cout << "StackA is empety";
            return pop_data;
        }
     pop_data = data[stack_top];
     stack_top--;      
     return pop_data;
}   
       
void StackA::print(){
    for(int i= stack_top;i>-1;i--){
        cout << data[i] << " ";
    }   
}

StackA::~StackA(){
    delete [] data;
}

