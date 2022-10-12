main: main.o test-ascii.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o test-ascii.o caesar.o vigenere.o decrypt.o

main.o: main.cpp test-ascii.h caesar.h vigenere.h decrypt.h
	g++ -c main.cpp 

test-ascii.o: test-ascii.cpp test-ascii.h 
	g++ -c test-ascii.cpp

caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

vigenere.o: vigenere.cpp vigenere.h
	g++ -c vigenere.cpp

decrypt.o: decrypt.cpp decrypt.h
	g++ -c decrypt.cpp

tests: tests.o test-ascii.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o test-ascii.o caesar.o vigenere.o decrypt.o

tests.o: tests.cpp doctest.h test-ascii.h caesar.h vigenere.h decrypt.h

clean:
	rm -f main tests main.o tests.o test-ascii.o caesar.o vigenere.o decrypt.o
