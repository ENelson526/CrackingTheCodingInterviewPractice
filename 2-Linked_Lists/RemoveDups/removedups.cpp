/**
 * Remove Dups
 * Write code to remove duplicates from an unsorted linked list.
 * FOLLOW UP
 * How would you solve this problem if a temporary buffer is not allowed 
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include "LinkedList.hpp"

Node* removeDups(Node* list)
{
    std::vector<int> found;
    Node* newList = new Node(list->data);
    Node* cur = list->next;
    found.push_back(list->data);
    while (cur)
    {
        if (!std::count(found.begin(), found.end(), cur->data))
        {
            found.push_back(cur->data);
            newList->appendToTail(cur->data);
        }
        cur = cur->next;
    }
    return newList;
}




int main(int argc, char* argv[])
{
    Node* list = new Node(5);
    list->appendToTail(3);
    list->appendToTail(5);
    list->appendToTail(4);
    list->appendToTail(1);
    Node* noDups = removeDups(list);
    noDups->printList();
}