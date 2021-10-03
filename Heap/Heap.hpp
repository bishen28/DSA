#ifndef HEAP_HPP
#define HEAP_HPP
#include <vector> 
using namespace std;
class Heap
{
 private:    
    static const int CAPACITY = 1000000;
    int size;           
    vector<int> arr; 
    void siftingDown(int position);
    void siftingUp(int position);
 public:
    Heap();
    int leftChild(int i);
    int rightChild(int i);
    int parent(int i);
    Heap(vector<int> &array_in);
    void insert(int value);
    int remove();          
    bool isEmpty();          
    int peek();
    static void heapSort(vector<int> &array_in);
    ~Heap(); 
};

#endif // HEAP_HPP
