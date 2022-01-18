#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>
#include <string>

template <class T>
class Node {
public:
    Node* next;
    T data;
    
    Node(T d)
    {
        this->data = d;
        this->next = nullptr;
    }

    void appendToTail(T d)
    {
        Node* n = this;
        while (n->next)
        {
            n = n->next;
        }
        n->next = new Node(d);
    }

    void printList()
    {
        Node* cur = this;
        while (cur)
        {
            std::cout << cur->data << std::endl;
            cur = cur->next;
        }
    }
};


#endif
