#include <iostream>
#include "Tree.hpp"
#include "Heap.hpp"
#include <vector> 
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> arr(n);   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Heap h(arr);
    
	return 0;
}
