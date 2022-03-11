#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  std::cout << "------------------------------Tests for task B------------------------------\n\n";
  std::cout << "shiftChar(\"A\", 10) returns: " << shiftChar('A', 10) << "\n";
  std::cout << "shiftChar(\"b\", 3) returns: " << shiftChar('b', 3) << "\n";
  std::cout << "shiftChar(\"C\", 5) returns: " << shiftChar('C', 5) << "\n\n";

  std::cout << "encryptCaesar(\"Hello, World!\", 10) returns: " << encryptCaesar("Hello, World!", 10) << "\n";
  std::cout << "encryptCaesar(\"123 Happy Spring!\", 2) returns: " << encryptCaesar("123 Happy Spring!", 2) << "\n\n";

  std::cout << "------------------------------Tests for task C------------------------------\n\n";
  std::cout << "encryptVigenere(\"Hello, world!\", \"cake\") returns: " << encryptVigenere("Hello, World!", "cake") << "\n";
  std::cout << "encryptVigenere(\"I love coding!\", \"cool\") returns: " << encryptVigenere("I love coding!", "cool") << "\n\n";
 
  std::cout << "------------------------------Tests for task D------------------------------\n\n";
  std::cout << "decryptCaesar(\"Rovvy, Gybvn!\", 10) returns: " << decryptCaesar("Rovvy, Gybvn!", 10) << "\n";
  std::cout << "decryptCaesar(\"123 Jcrra Urtkpi!\", 2) returns: " << decryptCaesar("123 Jcrra Urtkpi!", 2) << "\n\n";
  std::cout << "decryptVigenere(\"Jevpq, Wyvnd!\", \"cake\") returns: " << decryptVigenere("Jevpq, Wyvnd!", "cake") << "\n";
  std::cout << "decryptVigenere(\"K zcgg qcokbu!\", \"cool\") returns: " << decryptVigenere("K zcgg qcokbu!", "cool") << "\n\n";

  return 0;
}
