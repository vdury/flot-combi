#include <iostream>
#include <utility>
#include <list>
#include <vector>

class Edge {
private :

  int Ext1;
  int Ext2;
  int Cost;
  int Demand;

public :
  Edge(const int & ext1, const int & ext2, const int & co, const int & de);
  ~Edge();

  int getCost() const;
  int getDemand() const;
  int getExt1() const;
  int getExt2() const;
};

std::ostream & operator<<(std::ostream & os, const Edge & ed);



class CARPData {
private :

  int VehCapacity;
  int NbNodes;
  int NbVehicles;
  std::vector<std::list<Edge> > Graph;

public :
  CARPData(const char* filename);
  ~CARPData();
  int getVehicleCapacity() const;
  int getSize() const;
  int getNbVeh() const;
  std::vector<std::list<Edge> > & getVectorNodes();
  std::list<Edge> & getEdgesListOfNode(const int & i);
};

std::ostream & operator<<(std::ostream & os, CARPData & carp);
