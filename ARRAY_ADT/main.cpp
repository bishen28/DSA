//#include <bits/stdc++.h>
#include <iostream> 
using namespace std; 

struct Array{
    int A[200]; //  max capacity of array
    int size;    /// here,size 
    int length;
};

void display(struct Array arr){
    for(int i = 0; i<arr.length;i++){
        cout << arr.A[i] << " ";
    }
}


int main(){ 
   
   struct Array arr;
   int n;
   cin >> n;
   arr.length = n;
   for(int i=0;i<n;i++){
       cin >> arr.A[i];
   }
   display(arr);
return 0; 
}

