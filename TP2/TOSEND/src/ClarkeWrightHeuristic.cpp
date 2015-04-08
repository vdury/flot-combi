#include "CVRP.cpp"
#include "Tour.cpp"

double computeSolution(CVRPData data){
  std::list<Tour> liste_tournee; 
  int i;
  for(i=0; i<data.NbNodes; i++){
    liste_tournee.push_front(new Tour(data, i));
  }
  while(liste_tournee.size()>= 2){
    


  }
}
