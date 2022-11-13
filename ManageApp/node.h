#ifndef NODE_H
#define NODE_H
#include <iostream>
template <class TValue> class Node
{
private:

public:
    TValue *value;
    Node<TValue> *next;

    void CreateNode(){
        value=NULL;
        next=NULL;
    }

};


#endif // NODE_H
