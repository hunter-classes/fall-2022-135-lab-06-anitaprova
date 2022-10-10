main: main.o test-ascii.o caesar.o
	g++ -o main main.o test-ascii.o caesar.o

main.o: main.cpp test-ascii.h caesar.h
	g++ -c main.cpp 

test-ascii.o: test-ascii.cpp test-ascii.h
	g++ -c test-ascii.cpp

caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

tests: tests.o test-ascii.o caesar.o
	g++ -o tests tests.o test-ascii.o caesar.o

tests.o: tests.cpp doctest.h test-ascii.h caesar.h

clean:
	rm -f main.o tests.o test-ascii.o caesar.o
