#include "CVRP.hpp"
#include "Tour.hpp"
#include <iterator>

double computeSolution(CVRPData data){
  std::list<Tour> liste_tournee; 
  unsigned int i,j;
  int k;
  for(k=0; k<data.getSize(); k++){
    Tour T(data, k);
    liste_tournee.push_front(T);
  }
  double max = 0.0;
  int x, y;
  Tour tmp(0, 0);
  std::list<Tour>::iterator iter = liste_tournee.begin();
  std::list<Tour>::iterator iter2 = liste_tournee.begin();
  
  while(liste_tournee.size()>= 2){ 
    for(i=0; i<liste_tournee.size(); i++){
      std::advance(iter, 1);
      for(j=0; j<liste_tournee.size(); j++){
	std::advance(iter2, 1);
	if(i != j){
	  tmp = (*iter).appendTour(*iter2);
	  if(tmp.getRemainingCapacity() > max){
	    max = tmp.getRemainingCapacity();
	    x = i;
	    y = j;
	  }
	}
      }
    }
    iter = liste_tournee.begin();
    iter2 = liste_tournee.begin();
    std::advance(iter, x);
    std::advance(iter, y);
    iter = liste_tournee.erase(iter);
    iter2 = liste_tournee.erase(iter2);

    liste_tournee.push_back(tmp);
  }
 
  return liste_tournee.front().getRemainingCapacity();
}
