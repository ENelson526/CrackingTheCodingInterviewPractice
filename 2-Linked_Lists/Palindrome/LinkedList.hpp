#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>
#include <vector>

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

        if (!n)
        {
            this->data = d;
        }

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

    int length()
    {
        int i = 0;
        Node* cur = this;
        while (cur)
        {
            i++;
            cur = cur->next;
        }
        return i;
    }
};


#endif
