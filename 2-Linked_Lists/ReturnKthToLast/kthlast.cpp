/**
 * Return kth to Last
 * Implement an algorithm to find the kth to last element of a singly linked list
 */

#include "LinkedList.hpp"
#include <iostream>
#include <string>

Node* kthLast(Node* list, int k)
{
    int l = list->length();
    if (k > l)
    {
        std::cout << "k is too large\nPlease enter a value between 1 and 5\n";
        return nullptr;
    }
    l -= k;
    for (int i = 0; i < l; ++i)
        list = list->next;
    return list;
}


int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << "Please enter a kth value between (1-5)\n";
        return -1;
    }

    Node* list = new Node(4);
    list->appendToTail(3);
    list->appendToTail(1);
    list->appendToTail(5);
    list->appendToTail(8);

    try
    {
        Node* k = kthLast(list, std::stoi(argv[1]));
        if (k)
            std::cout << k->data << std::endl;
    }
    catch (std::invalid_argument e)
    {
        std::cout << "invalid input\n";
    }

    return 0;
}