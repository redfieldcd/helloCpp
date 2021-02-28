all: vector

vector: vector.o
	g++ -o testVector testVector.cpp -I ~/github/helloCpp/include/ -std=c++11 vector.o

vector.o: ~/github/helloCpp/src/vector.cpp
	g++ -c ~/github/helloCpp/src/vector.cpp -I ~/github/helloCpp/include/ -std=c++11 

clean:
	rm -rf vector.o testVector.dSYM testVector
