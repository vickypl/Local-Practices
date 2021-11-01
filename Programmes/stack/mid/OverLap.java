import java.util.*;

public class OverLap {
	
	public static void main(String[] args) {

		int[][] matrix= {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
		
		Pair[] pairs = new Pair[matrix.length];		
		for(int i=0; i<matrix.length; i++) {
			pairs[i]=new Pair(matrix[i][0], matrix[i][1]);
		}
		Arrays.sort(pairs);
		
		Stack<Pair> stack = new Stack<Pair>();
		for(int i=0; i< pairs.length; i++) {
			if(i==0) {
				stack.push(pairs[i]);
			} else {
				Pair top = stack.peek();
				if(pairs[i].start>top.end) {
					stack.push(pairs[i]);
				} else {
					top.end=Math.max(top.end, pairs[i].end);
				}
			}
		}
		Stack<Pair> ans = new Stack<Pair>();
		while(!stack.isEmpty()) {
			ans.push(stack.pop());
		}
		
		while(!ans.isEmpty()) {
			Pair p = ans.pop();
			System.out.println("("+p.start+","+p.end+")");
		}
	}
}

class Pair implements Comparable<Pair> {
	int start;
	int end;
	
	public Pair(int start, int end) {
		this.start=start;
		this.end=end;
	}
	
	public int compareTo(Pair pair) {
		if(this.start!=pair.start) {
			return this.start-pair.start;
		} else {
			return this.end-pair.end;
		}
	}
}