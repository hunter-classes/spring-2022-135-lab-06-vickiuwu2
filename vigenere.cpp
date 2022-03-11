#include <iostream>
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
    std::string result = "";
    int shift, count = 0;
    for (int i = 0; i < plaintext.length(); i++)
    {
        if (isalpha(plaintext[i]))
        {
            shift = (int)keyword[count] - 97;
            result += shiftChar(plaintext[i], shift);
            count++;
        }
        else
        {
            result += plaintext[i];
        }

        if (count >= keyword.length())
        {
            count = 0;
        }
    }
    return result;
}