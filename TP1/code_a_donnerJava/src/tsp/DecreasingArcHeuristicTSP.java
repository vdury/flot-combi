package tsp;
import java.util.List;
import java.util.ArrayList;
import java.awt.Point;

/**
 * This heuristic sorts the arcs by increasing value and 
 * considers each arc in turn for insertion
 * An arc is inserted if and only if it does not create a subtour.
 * The method stops when a tour is obtained.
 */
public class DecreasingArcHeuristicTSP implements HeuristicTSP {

	/** TODO coder cette méthode */
	public double computeSolution(double[][] matrix, List<Integer> solution) {
		double value = 0.0;
		int i,j;
		int n = matrix[1].length;
		int m = n*(n - 1);
		//List<Point> tri_arcs = new List<>(); 
		//		for (i=0; i<
		//Point[] tab = new Point[m];
		List<> list = new ArrayList<>();
		for (i=0; i<n; i++) {
		    for (j= 0; j< n; j++) {
			if (i != j) {
			    list.append(i, j, matrix[i][j]);
			    //			    Collections.sort

			}
		    }
		}
		return value;
	}

}
