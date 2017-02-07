#include <stdio.h>
#include "pilha.h"

Stack::Stack()
{
    first           = nullptr;
    totalElements   = 0;
}

Stack::~Stack()
{
    for(int i = 0 ; i < totalElements ; i++)
        pop();
}

bool Stack::isEmpty()
{
    return first == nullptr;
}

int Stack::getSize()
{
    return totalElements;
}

void Stack::push(int item)
{
    SimpleNode* oldFirst = first;
    first = new SimpleNode(item, oldFirst);
    totalElements++;
}

int Stack::pop()
{
    if(totalElements > 0)
    {
        int item = first->getItem();
        first = first->getNextNode();
        totalElements--;
        return item;
    }
    return -1;
}

void Stack::print()
{
    SimpleNode* current = first;
    int stackPosition = 0;
    while(current != nullptr)
    {
        printf("Position %d = %d\n", stackPosition, current->getItem());
        current = current->getNextNode();
        stackPosition++;
    }
}
