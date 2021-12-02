#include "Array.hpp"
#include <iostream>

Array::Array(){   //default constructor

    length = 1;
    size   = 1;
    A      = new int [size];
}
Array::Array(int length,int size){ // parametarize constructor

    this->length = length;
    this->size = size;
    A = new int [size];
}
Array::Array(Array &source){  // copy constructor
    //if(length>0) delete []A;
    length = source.length;
    size = source.size;
    int  *temp = new int [size];
    for(int i = 0; i < source.length; i++){
           temp[i] = source.A[i];
    }
    //delete []A;
    this->A = temp;
    temp = nullptr;

}
// Assignment operator
Array& Array::operator=(const Array& sourse){
    this->length = sourse.length;
    this->size = sourse.size;
    int  *temp = new int [size];
    for(int i = 0; i < length; i++){
           temp[i] = sourse.A[i];
    }
    this->A = temp;
    temp = nullptr;
    return *this;          // this is a way 
}
void Array::feed(){std ::cin >> length;std ::cin >> size;
for(int i=0;i<length;i++){ std::cin >> A[i];} }
void Array::Append (int num){
    if(length<size){
        A[length] = num;
        length++;
    }else{
        size = 2*size;
     int*temp = new int[size];
     for(int i = 0;i<length;i++){
         temp[i] = A[i];
     }
       delete []A;
       A = temp;
       temp = nullptr;
       A[length] = num;
       length++;
    }
}
void Array::insert(int num ,int index){
    if(length<size){
        int i;
        for(i = length;i>index;i--){
        A[i] = A[i-1];
        }
        A[i] = num;
        length++;
    }else{
      size = 2*size;
      int i;
      int*temp = new int[size];
      for(i=0;i<length;i++){
         temp[i] = A[i];
      }
       delete []A;
       A = temp;
       temp = nullptr;
        for(i=length;i>index;i--){
          A[i] = A[i-1];
        }
        A[i] = num; 
        length++;  
    }
}    
void Array::Delete(int index){}
int  Array::search(int key){}
void Array::reverse(){} 
//void Array::Union(Array sourse){}
void Array::Intersection(Array){}
int  Array::Max(){
    int max = INT_MIN;
    for(int i=0;i<length;i++){
        if(A[i]>max) max = A[i];}return max;
        }
int  Array::Min(){
    int min = INT_MAX;for(int i=0;i<length;i++){if(A[i]<min) min = A[i];}return min;}
void Array::Display(){
    for(int i = 0; i< length; i++){std:: cout << A[i] << " ";}std::cout<<"\n";}
int  Array::get_at_index(int index){
    if(index<length&&index>=0) return A[index];
}
void Array::set_at_index(int index,int num){ A[index] = num;}
int  Array::sum(){
     int sum = 0;
     for(int i=0;i<length;i++)
       sum+=A[i];
     return sum;
 }
int  Array::average(){
     int sum = 0;
     for(int i=0;i<length;i++) sum+=A[i];
     return sum/length;
   }
void Array::left_shift(){}                    // easy dont do it
void Array::left_rotate(int d){
    int n = length;
    int temp;
    for(int j=0;j<d;j++){
    temp = A[0];
    for(int i=0;i<n-1;i++){
     
    A[i] = A[i+1];
    }
    A[n-1]=temp;
    }
}
void Array::right_shift(){}                   // easy don't do it
void Array::right_rotate(int d){}             // easy don't do it
//void Array::insert_in_sorted(int key){}
void Array::Arrange_Negative_to_left(){}
bool Array::check_sorted(){
    int i;
    for(i=0;i<length-1;i++){
        if(A[i]>A[i+1]){
               return false;
        }
            }
            return true;
}

Array::~Array()
{
    delete []A;
}

