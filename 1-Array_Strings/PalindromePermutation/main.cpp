/*
    Given a string, write a function to check if is a permutation of a palindrome.
    A palindrome is a word or phrase that is teh same forwards and backwards. A permutation
    is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
    You can ignore casing and non-letter data.
*/



#include <iostream>
#include <string>

std::string make_lowercase(std::string s)
{
    for (int i = 0; i < s.length(); ++i)
    {
        if ((int)s[i] >= 65 && (int)s[i] <= 90)
            s[i] += 32;
    }
    return s;
}


bool checkMaxOneOdd(int* table)
{
    bool found = false;
    for (int i = 0; i < sizeof(table)/sizeof(int); ++i)
    {
        if (found)
            return false;
        if (*(table + i) % 2 == 1)
            found = true;
    }
    return true;
}

void buildCharFrequencyTable(std::string s, int** table)
{
    s = make_lowercase(s);
    for (int i = 0; i < s.length(); ++i)
    {
        *(*table + (int)s[i]) += 1;
    }
}

bool isPermutation(std::string s)
{
    int* table = (int *)malloc(26 * sizeof(int));
    buildCharFrequencyTable(s, &table);
    for (int i = 0; i < 26; ++i)
        std::cout << i << " : " << *(table + i) << std::endl;
    return checkMaxOneOdd(table);
}

int main(int argc, char* argv[])
{
    if (argc < 2) return -1;
    if (isPermutation(argv[1]))
        std::cout << "True\n";
    else
        std::cout << "False\n";
    return 0;
}