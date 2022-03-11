#include <iostream>

void testascii(std::string input)
{
    for (int x = 0; x < input.length(); x++)
    {
        std::cout << input[x] << " " << (int)input[x] << std::endl;
    }
}

int main()
{
    std::cout << "---------------Tests for Task A---------------" << std::endl;
    std::cout << "testascii('Cat :3 Dog') returns: \n";
    testascii("Cat :3 Dog");
    std::cout << "\n";
    std::cout << "testascii('Hello, World!') returns: \n";
    testascii("Hello, World!");
    std::cout << "\n";

    return 0;
}