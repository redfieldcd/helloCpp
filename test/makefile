all: testVector

testVector: collection.a testVector.cpp
	g++ -o testVector testVector.cpp -I ${PROJECT_HOME}/include/ -std=c++11 collection.a

collection.a: vector.o funcA.o
	ar rcs collection.a vector.o funcA.o

vector.o: ${PROJECT_HOME}/src/vector.cpp
	g++ -c ${PROJECT_HOME}/src/vector.cpp -I ${PROJECT_HOME}/include/ -std=c++11 

funcA.o: ${PROJECT_HOME}/src/funcA.cpp
        g++ -c ${PROJECT_HOME}/src/funcA.cpp -std=c++11
clean:
	rm -rf vector.o testVector.dSYM testVector
