/**
 * Delete Middle Node
 * Implement an algorithm to delete a node in the middle (i.e., any node but
 * the first and last node, not necessarily the exact middle) of a singly linked list, given only access to
 * that node.
 * 
 * Input: the node c from the linked list a -> b -> c -> d -> e -> f
 * Result: nothing is returned, but the new linked list that looks like a -> b -> d -> e -> f 
*/

#include <iostream>
#include "LinkedList.hpp"


Node<char>* remove_middle(Node<char>* list, char c)
{
    Node<char>* prev = list;
    Node<char>* cur = list->next;

    while (cur)
    {
        if (cur->data == c)
        {
            prev->next = cur->next;
        }
        prev = cur;
        cur = cur->next;
    }
    return list;
}



int main(int argc, char* argv[])
{

    if (argc > 2)
    {
        std::cout << "Enter either b, c, d or e as an argument\n";
        return -1;
    }

    Node<char>* list = new Node<char>('a');

    list->appendToTail('b');
    list->appendToTail('c');
    list->appendToTail('d');
    list->appendToTail('e');
    list->appendToTail('f');

    list = remove_middle(list, argv[1][0]);
    list->printList();
}