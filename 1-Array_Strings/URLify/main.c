/*
    Write a method to replace all spaces in a string with '%20'. You may assume that the string
    has sufficient space at the end to hold the additional characters, and that you are given the "true"
    length of the string. 

    EXAMPLE: 
    Input:  "Mr John Smith  ", 13
    Output: "Mr%20John%20Smith"

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// len is the true length of the string, without the spaces
char* URL_ify(char* s, int len)
{
    char* newS = (char *)malloc(len * sizeof(char));
    const char* f = "%%20";
    for (int i = 0, j = 0; i < len; ++i, ++j)
    {
        if (*(s + i) != ' ')
            strcpy(newS + j, s + i);
        else
        {
            for (int x = 0; x < 3; ++x, ++j)
                strcpy(newS + j, f + x);
        }
    }

    return newS;
}


int main(int argc, char* argv[])
{
    char* s = URL_ify(argv[1], 13);
    printf("%s\n", s);
    return 0;
}