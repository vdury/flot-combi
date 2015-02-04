package tsp;
import java.util.List;

public class MainTSP {

	
	private static char stringtoCode(String s){
		if(s.equals("-h1") || s.equals("--heuristic1")) return 'h';
		if(s.equals("-h2") || s.equals("--heuristic2")) return 'H';
		if(s.equals("-e") || s.equals("--exact")) return 'e';
		if(s.equals("-l1") || s.equals("--lowerbound")) return 'l';
		return '0';
	}
	
	
	/** run the test 
	 * 
	 * 
	 * 
	 * */
	public static void main(String args[]) {
		TestTSP tt = new TestTSP();		
		tt.loadFile(args[1]);

		List<Double> listRes; // list of results
		
		switch(stringtoCode(args[0])){		
		case 'h' : // heuristic
			listRes = tt.testHeuristic(new InsertHeuristicTSP());
			System.out.println("Heuristic insertion : " + TestTSP.avgVal(listRes)
					+ " on average");
			break;
		case 'H' : // heuristic
			listRes = tt.testHeuristic(new DecreasingArcHeuristicTSP());
			System.out.println("Heuristic decreasing arcs : " + TestTSP.avgVal(listRes)
					+ " on average");
			break;			
		case 'e' : // exact
			listRes = tt.testBranchAndBound(Integer.parseInt(args[2]));
			System.out.println("Exact : " + TestTSP.avgVal(listRes) + " on average");
			break;
		case 'l' :
			listRes = tt.testLowerBound(new LowerBoundTSP());
			System.out.println("Lower bound : " + TestTSP.avgVal(listRes) + " on average");
			break;
		default :  // error
			System.out.println("Argument Error\nSyntax : TestTSP -{h1,h2,e,l} instanceName timeLimit");
		}
	}

	
	
	
}
