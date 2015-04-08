#include <iostream>
#include <fstream>
#include <limits>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <vector>
#include <list>
#include"CVRP.cpp"

class Tour {
private :
  std::list<int> list_customer;
  int remaining_cap;
  CVRPData mydata;

public:
  Tour(const CVRPData &data, int new_customer);
  void appendCustomer(int customer);
  void appendTour(const Tour &t);
  std::list<int> getCustomers() const;
  int getFirstCustomer() const;
  int getLastCustomer() const;  
  int getRemainingCapacity() const;
};
