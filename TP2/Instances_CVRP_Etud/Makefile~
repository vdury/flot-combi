CC = g++ 
CPPFLAGS = -Wall  -Wextra 

all: CVRP.o Tour.o ClarkeWrightHeuristic.o

CVRP.o: CVRP.hpp

Tour.o: Tour.hpp

ClarkeWrightHeuristic.o: CVRP.o Tour.o ClarkeWrightHeuristic.cpp

clean:
	rm *.o 

