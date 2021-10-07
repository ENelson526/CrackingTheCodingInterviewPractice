// Is Unique: Implement an algorithm to determine if a string has all unique characters. 
//            What if you can't use additional data structures?

#include <iostream>
#include <string>


bool isUniqueArray(std::string s)
{
    bool letters[128] = {false};

    for (int i = 0; i < s.length(); ++i)
    {
        if (letters[s[i]] == true)
        {
            std::cout << "Not all characters unique\n";
            return false;
        }
        letters[s[i]] = true;
    }
    std::cout << "All characters unique\n";
    return true;
}


bool isUniqueBitVector(std::string s)
{
    int checker = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        int val = s[i];
        if ((checker & (1 << val)) > 0)
        {
            std::cout << "Not all characters unique\n";
            return false;
        }
        checker |= (1 << val);
    }
    std::cout << "All characters unique\n";
    return true;
}


int main(int argc, char* argv[])
{
    isUniqueArray(argv[1]);
    isUniqueBitVector(argv[1]);
}



