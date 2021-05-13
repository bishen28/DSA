#ifndef STACKA_HPP
#define STACKA_HPP

class StackA{
private:
    static const int MIN_CAPACITY = 10;
    int* data;
    int stack_top = -1;
    int capacity;
public:
    StackA(); 
    StackA(int capacity);
    ~StackA(); 
         
    int size();
    bool isEmpty();          
    int top();
    void push(int value);          
    int pop();          
    void print();
};

#endif // STACKA_HPP
