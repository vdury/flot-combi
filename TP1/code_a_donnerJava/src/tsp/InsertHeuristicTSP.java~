package tsp;
import java.util.List;

/**
 * 
 * This heuristic iteratively appends a customer
 * to the current solution until a tour is obtained
 *
 */

public class InsertHeuristicTSP implements HeuristicTSP {

	/** TODO : coder cette méthode */
	public double computeSolution(double[][] matrix, List<Integer> solution) {
		double value = 0.0;
		double val_tmp = 0.0;
		int i = 0;
		int j;
		int n = matrix[i].length;
		solution.add(i);
		
		double m = 100000000;
		int k = -1;
		double[] tab = new double[n];
		

		/*for(; i<n; i++) {
		    while(solution.size() != n-1){
			for( j=0; j<n; j++){
			    if(matrix[i][j] < m && i != j && !solution.contains(j)){
				m = matrix[i][j];
				k = j;
			    }
			}
			solution.add(k);
			value += m;
			m=10000000;
			i = k;
		    }
		    tab[i] = value;
		    value = 0.0;
		    solution.clear();
		} //recherche de l'état initial
		
		double min = 10000;
		int etat = -1;
		
		for(i=0; i<n; i++) {
		    if (tab[i]<min) {
			min = tab[i];
			etat = i;
		    }
		    }*/
		int etat = 3;
		
		while(solution.size() != n-1){
		    for( j=0; j<n; j++){
			if(matrix[etat][j] < m && etat != j && !solution.contains(j)){
				m = matrix[etat][j];
				k = j;
			    }
			}
			solution.add(k);
			value += m;
			m=10000000;
			etat = k;
		    }
		return value;
	}
}
