package tsp;

public class LowerBoundTSP{

    public double getMinLine(double[][] matrix, int i){
	double min = 10000;
	int j = 0;
	for(; j<matrix[i].length; j++){
	    if (matrix[i][j] < min)
		min = matrix[i][j];
	}
	return min;
    }

    public double subMinLine(double[][] matrix, int n){
	int i,j;
	double minline;
	double sum = 0.0;
	for(i=0; i<n; i++){
	    minline = getMinLine(matrix, i);
	    sum += minline;
	    for(j=0; j<n; j++){
		matrix[i][j] -= minline;
	    }
	}
	return sum;
    }
	   

    public double getMinColumn(double[][] matrix, int j){
	double min = 10000;
	int i =0;
	for(; i<matrix[j].length; i++){
	    if (matrix[i][j] < min)
		min = matrix[i][j];
	}
	return min;
    }

    public double subMinColumn(double[][] matrix, int n){
	int i,j;
	double minline;
	double sum = 0.0;
	for(i=0; i<n; i++){
	    minline = getMinColumn(matrix, i);
	    sum += minline;
	    for(j=0; j<n; j++){
		matrix[j][i] -= minline;
	    }
	}
	return sum;
    }



    public double lowerBoundValue(double[][] matrix){
    	double[][] mat2 = matrix;
	double val = 0;
	int n = matrix[1].length;
	val += subMinLine(mat2, n);
	val += subMinColumn(mat2, n);
	return val;
    }

}
