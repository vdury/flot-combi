#include "Tour.hpp"

Tour::Tour(const CVRPData &data, int new_customer):  remaining_cap(data.getCapacity()), mydata(data)
{
  list_customer.push_front(new_customer);
}

void Tour::appendCustomer(int customer){
  int old_cust = list_customer.back();
  list_customer.push_back(customer);
  remaining_cap -= mydata.getDistance(old_cust,customer);
}

Tour Tour::appendTour(const Tour &t){
  int tmp;
  Tour t2(*this);
  std::list<int> new_list = t.getCustomers();
  for(unsigned int i=0; i<new_list.size(); i++){
    tmp = new_list.front();
    new_list.pop_front();
    t2.appendCustomer(tmp);
    t2.remaining_cap -= mydata.getDistance(list_customer.back(), tmp);
  }
  return t2;
}

std::list<int> Tour::getCustomers() const{
  std::list<int> my_list( list_customer);
  return my_list;
}

int Tour::getFirstCustomer() const{
  int fst = list_customer.front();
  return fst;
}

int Tour::getLastCustomer() const{
  int lst = list_customer.back();
  return lst;
}

CVRPData Tour::getData()const{
  return mydata;
}

double Tour::getRemainingCapacity() const{
  return remaining_cap;
}

Tour::Tour(const Tour &t):list_customer(t.getCustomers()), remaining_cap(t.getRemainingCapacity()), mydata(t.getData())
{}



Tour Tour::operator= (const Tour &t){
  Tour tmp(t);
  return tmp;
}

