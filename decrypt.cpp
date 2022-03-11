#include <iostream>

char shiftChar2(char c, int lshift)
{
    char result;
    if ((c >= 65) && (c <= 90))
    {
        if ((c - lshift) < 65)
        {
            result = c + 26 - lshift;
        }
        else
        {
            result = c - lshift;
        }
    }
    else if ((c >= 97) && (c <= 122))
    {
        if ((c - lshift) < 97)
        {
            result = c + 26 - lshift;
        }
        else
        {
            result = c - lshift;
        }
    }
    return result;
}

std::string decryptCaesar(std::string ciphertext, int rshift)
{
    std::string result = "";
    for (int x = 0; x < ciphertext.length(); x++)
    {
        if (isalpha(ciphertext[x]))
        {
            result += shiftChar2(ciphertext[x], rshift);
        }
        else
        {
            result += (ciphertext[x]);
        }
    }
    return result;
}
std::string decryptVigenere(std::string ciphertext, std::string keyword)
{
    std::string result = "";
    int shift, count = 0;
    for (int i = 0; i < ciphertext.length(); i++)
    {
        if (isalpha(ciphertext[i]))
        {
            shift = (int)keyword[count] - 97;
            result += shiftChar2(ciphertext[i], shift);
            count++;
        }
        else
        {
            result += ciphertext[i];
        }

        if (count >= keyword.length())
        {
            count = 0;
        }
    }
    return result;
}