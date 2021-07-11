#include <iostream> 
#include "Array.hpp"
using namespace std; 
/*
Array insert(Array arr, int num){ 
 
    if(arr.length<arr.size){
        arr.A[arr.length] = num;
        arr.length++;
    }else{
        arr.size = 2*arr.size;
     int*temp = new int[arr.size];
     for(int i = 0;i<arr.length;i++){
         temp[i] = arr.A[i];
     }
       delete []arr.A;
       arr.A = temp;
       temp = nullptr;
       arr.A[arr.length] = num;
       arr.length++;
    }
  return arr; 
}
*/
int main(){ 
   Array arr1;
   arr1.feed(); 
  // arr2.feed();
   ///arr1.Union();
   //arr1.left_rotate();
   //int x = arr1.check_sorted();
   //cout << x << endl;
   arr1.Display();
   
   
return 0; 
}

