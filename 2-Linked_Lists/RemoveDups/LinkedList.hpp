// This code is from the book, Cracking the Coding interview
// except the printList function

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>

class Node {
public:
    Node* next;
    int data;
    
    Node(int d)
    {
        data = d;
        this->next = nullptr;
    }

    void appendToTail(int d)
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
