import java.util.*;

public class CelebrityBest {
	
	public static void main(String args[]) {

		int[][] matrix= {{0, 1, 1, 1, 1},
           				 {1, 0, 0, 1, 0},
           				 {1, 0, 0, 1, 0},
           				 {0, 0, 0, 0, 0},
           				 {0, 1, 0, 1, 0}};
		
/* 		int[][] matrix= {{0, 0, 1, 0},
           				 {0, 0, 1, 0},
           				 {0, 0, 0, 0},
           				 {0, 0, 1, 0}}; */
	
		printMat(matrix);
		System.out.println("Answer ::"+celebFinder(matrix));
	}
	
	public static int celebFinder(int matrix[][]) {
		Stack<Integer> stack = new Stack<Integer>();
		int elected=0;
		for(int i=0; i<matrix.length; i++) {
			stack.push(i);
		}
		while(stack.size()>=2) {
			int a=stack.pop();
			int b=stack.pop();
			if(matrix[a][b]==1) {
				stack.push(b);
			} else {
				stack.push(a);
			}
		}
		if(stack.isEmpty())
			return -1;
			
		elected=stack.pop();
		for(int j=0; j<matrix.length; j++) {
			if(j!=elected && matrix[elected][j]==1 && matrix[j][elected]!=0)
				return -1;
		}
		System.out.println(elected+" is celeb");
		return elected;
	}
	
	public static void printMat(int[][] matrix) {
        for (int i=0; i<matrix.length; i++) {
         	for (int j=0; j<matrix.length; j++) {
         		System.out.print(" "+matrix[i][j]);
         	}
         	System.out.println();
        }
	}
}