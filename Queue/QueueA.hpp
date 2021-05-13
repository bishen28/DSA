#ifndef QUEUEA_HPP
#define QUEUEA_HPP

class QueueA{
private:    
    int queue_size = 0;
    int front = 0;
    int back = 0;
    int Capacity = 1000;
    int *data;
    
public:
    QueueA();
    
    bool add(int value);
    int remove();
    bool isEmpty();
    int size();
    
    ~QueueA();
};

#endif // QUEUEA_HPP
