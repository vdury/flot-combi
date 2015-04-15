#ifndef __TOUR_HPP__
#define __TOUR_HPP__

#include <iostream>
#include <fstream>
#include <limits>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <vector>
#include <list>
#include"CVRP.hpp"

class Tour {
private :
  std::list<int> list_customer;
  double remaining_cap;
  CVRPData mydata;

public:
  Tour(const CVRPData &data, int new_customer);
  Tour(const Tour &t);
  void appendCustomer(int customer);
  Tour appendTour(const Tour &t);
  std::list<int> getCustomers() const;
  int getFirstCustomer() const;
  CVRPData getData()const;
  int getLastCustomer() const;  
  double getRemainingCapacity() const;
  Tour operator= (const Tour &t);

};

#endif
