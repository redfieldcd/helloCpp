all: vector

vector: vector.o
	g++ -o testVector testVector.cpp -I ${PROJECT_HOME}/include/ -std=c++11 vector.o

vector.o: ${PROJECT_HOME}/src/vector.cpp
	g++ -c ${PROJECT_HOME}/src/vector.cpp -I ${PROJECT_HOME}/include/ -std=c++11 

clean:
	rm -rf vector.o testVector.dSYM testVector
