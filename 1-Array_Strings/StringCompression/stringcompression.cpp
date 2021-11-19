/**
 * String Compression
 * Implement a method to perform basic string compression using the counts
 * of repeated characters. For example, the string aabcccccaaa would become a2b1c5a3. If the 
 * "compressed" string would not become smaller than the original string, your method should return
 * the original string. You can assume the string has only uppercase and lowercase characters (a-z)
*/

#include <string>
#include <iostream>

std::string compression(std::string s)
{
    std::string comp = "";
    for (int i = 0; i < s.size();)
    {
        int count = 0;
        char c = s[i];
        while (s[i] == c)
        {
            if (i == s.size())
                break;
            i++;
            count++;
        }
        comp.append(c + std::to_string(count));
    }
    if (s.size() < comp.size())
        return s;
    else
        return comp;
}



int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << "Please enter a string to compress as an argument\n";
        return -1;
    }
    std::cout << compression(argv[1]) << std::endl;
    return 0;
}