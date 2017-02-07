#ifndef _NODE_H_
#define _NODE_H_

class SimpleNode
{
private:
    int     item;
    SimpleNode*   next;

public:
    SimpleNode(int item, SimpleNode* next)
    {
        this->item = item;
        this->next = next;
    }

    ~SimpleNode()
    {
    }

    void setItem(int item)
    {
        this->item = item;
    }

    int getItem()
    {
        return item;
    }

    void setNextNode(SimpleNode* next)
    {
        this->next = next;
    }

    SimpleNode* getNextNode()
    {
        return next;
    }
};

#endif // _NODE_H_
