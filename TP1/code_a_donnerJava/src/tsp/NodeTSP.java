package tsp;

import java.util.List;

import branchAndBound.Node;

public class NodeTSP implements Node<List<Integer>> {


    /** to create the first node ==> root note */
	public NodeTSP(double[][] matrix) {

	}

	/** useful to create the children */
	private NodeTSP(NodeTSP father, int u, int v, boolean selected) {

	}


	public String toString() {
		String s = "NODE TSP\n";
		return s;
	}

	public double getLB() {
		return 0;
	}

	
	public double getValue() {
		return -1;
	}

	public List<Integer> getSolution() {
		List<Integer> listCustomers = new ArrayList<Integer>();
		return listCustomers;
	}

	public boolean isFeasible() {
	    return false;
	}

	public boolean isLeaf() {
		return true;
	}

	public boolean hasNextChild() {
		return false;
	}

	public Node<List<Integer>> getNextChild() {
		Node<List<Integer>> child = null;
		return child;
	}

}