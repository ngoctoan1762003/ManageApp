#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"
#include "monhang.h"
#include <iostream>

using namespace std;
template <class TValue> class LinkedList
{
private:
    Node<TValue>* head;
    Node<TValue>* tail;
public:
    LinkedList<TValue>(){
        head=NULL;
        tail=NULL;
    }
    void CreateList(){
        head=NULL;
        tail=NULL;
    }
    void AddHead(Node<TValue>* node){
        if(head==NULL){
            head=node;
            tail=node;
        }
        else{
            node->next=head;
            head=node;
        }
    }
    void AddTail(Node<TValue>* node){
        if (head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
    }
    void RemoveAfterIndex(int index){
        Node<TValue>* node=GetNode(index);
        if(node!=NULL){
            Node<TValue>* p=node->next;
            if(p!=NULL){
                if(tail==p) tail=node;
                node->next=p->next;
                delete p;
            }
        }
        if(index==-1){
            Node<TValue>* p=head;
            head=head->next;
            delete p;
        }
    }
    int GetSize(){
        int count = 0;
        Node<TValue>* node = head;
        while (node != NULL)
        {
            count++;
            node = node->next;
        }
        return count;
    }
    Node<TValue>* Search( TValue value){
        Node<TValue>* node=head;
        while(node!=NULL && *node->value!=value) node=node->next;
        if(node!=NULL) return node;
        return NULL;
    }
    Node<TValue>* GetNode(int index){
        Node<TValue>* node = head;
        int i = 0;
        while (node != NULL && i != index)
        {
            node = node->next;
            i++;
        }
        if (i == index && node != NULL)
            return node;
        return NULL;
    }
    Node<TValue>& operator[](int index){
        Node<TValue> *node=GetNode(index);
        return *node;
    }
    void clear(){
        /*Node<TValue> *node=new Node<TValue>;
        while(head!=NULL){
            node=head;
            head=head->next;
            free(node);
        }*/
        head=new Node<TValue>;
        head=NULL;
    }
};

#endif // LINKEDLIST_H
