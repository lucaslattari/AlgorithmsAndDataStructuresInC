#include <stdio.h>
#include "Fila.h"

Queue::Queue()
{
    firstNode           = nullptr;
    lastNode            = nullptr;
    totalNodesInQueue   = 0;
}

Queue::~Queue()
{
    for(int i = 0 ; i < totalNodesInQueue ; i++)
        dequeue();
}

bool Queue::isEmpty()
{
    return firstNode == nullptr;
}

int Queue::getSize()
{
    return totalNodesInQueue;
}

void Queue::enqueue(int item)
{
    SimpleNode* oldLastNode = lastNode;
    lastNode = new SimpleNode(item, nullptr);
    if(isEmpty())
        firstNode = lastNode;
    else
        oldLastNode->setNextNode(lastNode);
    totalNodesInQueue++;
}

int Queue::dequeue()
{
    if(totalNodesInQueue > 0)
    {
        int itemRemoved = firstNode->getItem();
        firstNode->setNextNode(firstNode->getNextNode());
        if(isEmpty())
            lastNode->setNextNode(nullptr);
        totalNodesInQueue--;
        return itemRemoved;
    }
    return -1;
}

void Queue::print()
{
    SimpleNode* current = firstNode;
    int queuePosition = 0;
    while(current != nullptr)
    {
        printf("Position %d = %d\n", queuePosition, current->getItem());
        current = current->getNextNode();
        queuePosition++;
    }
}
