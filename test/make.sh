g++ -c ${PROJECT_HOME}/src/vector.cpp -I${PROJECT_HOME}/include/ -std=c++11
g++ -c ${PROJECT_HOME}/src/funcA.cpp -std=c++11
ar src vector.dylib vector.o
ar src collection.dylib funcA.o
g++ -o testVector testVector.cpp -I ${PROJECT_HOME}/include/ -std=c++11 vector.dylib

#g++ -o testVector testVector.cpp -I ${PROJECT_HOME}/include/ -std=c++11 funcA.o vector.o

#g++ -o testVector testVector.cpp -I ${PROJECT_HOME}/include/ -std=c++11 ${PROJECT_HOME}/src/funcA.cpp ${PROJECT_HOME}/src/vector.cpp 
