/*
    Implement a function to check if a linked list is a palindrome.
*/



#include "LinkedList.hpp"


bool is_palindrome(Node<int>* n)
{
    size_t l = n->length();
    std::vector<int> ar;
    for (int i = 0; i < l; ++i)
    {
        ar.push_back(n->data);
        n = n->next;
    }

    for (int i = 0, j = ar.size() - 1; i < j; ++i, --j)
    {
        if (ar.at(i) != ar.at(j))
            return false;
    }
    return true;
}

int main()
{
    Node<int>* l1 = new Node<int>(1);
    l1->appendToTail(2); l1->appendToTail(3); l1->appendToTail(2); l1->appendToTail(1);
    Node<int>* l2 = new Node<int>(1);
    l2->appendToTail(8); l2->appendToTail(3); l2->appendToTail(2); l2->appendToTail(1);
    
    std::cout << is_palindrome(l1) << std::endl; // true
    std::cout << is_palindrome(l2) << std::endl; // false


    return 0;
}