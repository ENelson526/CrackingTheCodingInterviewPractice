/*
    Given two strings, write a method to decide if one if a permutation of the other
*/

#include <iostream>
#include <string>

bool checkPermutation(std::string s, std::string s2)
{
    if (s.length() != s2.length())
        return false;

    int letters1[128], letters2[128];
    for (int i = 0; i < s.length(); ++i)
        letters1[s[i]]++;
    
    for (int i = 0; i < s2.length(); ++i)
        letters2[s2[i]]++;

    for (int i = 0; i < s.length(); ++i)
    {
        if (letters1[i] != letters2[i])
            return false;
    }
    return true;
}

bool book_answer(std::string s, std::string t)
{
    if (s.length() != t.length()) return false;

    int letters[128];
    for (int i = 0; i < s.length(); ++i)
        letters[s[i]]++;

    for (int i = 0; i < t.length(); ++i)
    {
        letters[s[i]]--;
        if (letters[s[i]] < 0)
            return false;
    }
    return true;
}



int main(int argc, char* argv[])
{
    if (checkPermutation(argv[1], argv[2]))
        std::cout << argv[2] << " is a permutation of " << argv[1] << std::endl;
    else
        std::cout << argv[2] << " is NOT a permutation of " << argv[1] << std::endl;
    
}