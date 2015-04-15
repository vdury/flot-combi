#ifndef __CVRP_HPP__
#define __CVRP_HPP__
#include <iostream>

class CVRPData {
private :
  int Capacity;
  int NbNodes;
  int ** Distances;
  int * Demands;

public :
  CVRPData(const char* filename);
  ~CVRPData();
  int getCapacity() const;
  int getSize() const;
  int** getDistances() const;
  int getDistance(const int & i, const int & j) const;
  int* getDemands() const;
  int getDemand(const int & i) const;
};

std::ostream & operator<<(std::ostream & os, const CVRPData & cvrp);

#endif
