#include <iostream>
#include "caesar.h"

char shiftChar(char c, int rshift)
{
    char result;
    if ((c >= 65) && (c <= 90))
    {
        if ((c + rshift) > 90)
        {
            result = c - 26 + rshift;
        }
        else
        {
            result = c + rshift;
        }
    }
    else if ((c >= 97) && (c <= 122))
    {
        if ((c + rshift) > 122)
        {
            result = c - 26 + rshift;
        }
        else
        {
            result = c + rshift;
        }
    }
    return result;
}

std::string encryptCaesar(std::string plaintext, int rshift)
{
    std::string result = "";
    for (int x = 0; x < plaintext.length(); x++)
    {
        if (isalpha(plaintext[x]))
        {
            result += shiftChar(plaintext[x], rshift);
        }
        else
        {
            result += (plaintext[x]);
        }
    }
    return result;
}
