#include "Ejercicio01.h"

char Ejercicio01::lower(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return c;

    return (char)(c + 32);
}

bool Ejercicio01::isPalindrome(const char* phrase, int length)
{
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        if (!((phrase[start]>= 'a' && phrase[start]<= 'z')||(phrase[start]>='A' && phrase[start]<='Z')|| (phrase[start]>='0' && phrase[start]<= '9')) || phrase[start] == ' ')
        {
            start++;
        }
        else if (!((phrase[end] >= 'a' && phrase[end] <= 'z') || (phrase[end] >= 'A' && phrase[end] <= 'Z') || (phrase[end] >= '0' && phrase[end] <= '9')) || phrase[end]== ' ')
        {
            end--;
        }
        else if (lower(phrase[start] | 32) != lower(phrase[end] | 32))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}
