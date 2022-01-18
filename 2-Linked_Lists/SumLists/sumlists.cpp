#include "LinkedList.hpp"

std::string reversed_num(Node<int>* n)
{
    if (n->next)
    {
        return reversed_num(n->next).append(std::to_string(n->data));
    }
    return std::to_string(n->data);
}



int main()
{
    Node<int>* l1 = new Node<int>(7);
    Node<int>* l2 = new Node<int>(5);

    l1->appendToTail(1); l1->appendToTail(6);
    l2->appendToTail(9); l2->appendToTail(2);

    // 617 + 295 = 912
    std::cout << std::stoi(reversed_num(l1)) + std::stoi(reversed_num(l2)) << std::endl; 
    return 0;
}