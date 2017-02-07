#ifndef _FILA_H_
#define _FILA_H_

#include "node.h"

class Queue
{
private:
    SimpleNode*   firstNode;  //head
    SimpleNode*   lastNode;   //tail
    int     totalNodesInQueue;

public:
    Queue();
    ~Queue();

    bool    isEmpty();
    int     getSize();
    void    enqueue(int item);
    int     dequeue();
    void    print();
};

#endif // _FILA_H_
