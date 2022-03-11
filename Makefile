main: main.o caesar.o vigenere.o decryption.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

tests: tests.o caesar.o vigenere.o decryption.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decryption.o: decrypt.cpp decrypt.h

main.o: main.cpp caesar.h vigenere.h decrypt.h

tests.o: tests.cpp doctest.h caesar.h vigenere.h decrypt.h

clean:
	rm -f main.o tests.o test-ascii.o caesar.o decrypt.o