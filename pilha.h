#ifndef _PILHA_H_
#define _PILHA_H_

#include "node.h"

class Stack
{
private:
    SimpleNode* first;
    int         totalElements;

public:
    Stack();
    ~Stack();

    bool isEmpty();
    int  getSize();
    void push(int item);
    int  pop();
    void print();
};

#endif // _PILHA_H_
