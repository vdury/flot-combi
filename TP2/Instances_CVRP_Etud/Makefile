CC = g++ 
CPPFLAGS = -Wall  -Wextra 




test: CVRP.o Tour.o ClarkeWrightHeuristic.o parserCVRP.o
	$(CC) $(CPPFLAGS) $^ -o $@


CVRP.o: CVRP.hpp

Tour.o: Tour.hpp

ClarkeWrightHeuristic.o: CVRP.o Tour.o ClarkeWrightHeuristic.cpp

parserCVRP.o: parserCVRP.cpp

clean:
	rm *.o 

