
/*
	THE CELEBRITY PROBLEM QUESTION
*/

// A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
// A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
// Note: Follow 0 based indexing.
 

// Example 1:

// Input:
// N = 3
// M[][] = {{0 1 0},
//          {0 0 0}, 
//          {0 1 0}}
// Output: 1
// Explanation: 0th and 2nd person both
// know 1. Therefore, 1 is the celebrity. 

public class Celebrity {
	
	public static void main(String[] args) {



/* 		int[][] matrix = {{0, 1, 0},
						  {0, 0, 0}, 
						  {0, 1, 0}}; */
		
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

	System.out.println("+++++++++++++++++");

		int[] arr = new int[matrix.length];
		int count;
		for(int i=0; i<arr.length; i++) {
			count=0;
			for(int j=0; j<arr.length; j++) {
				if(matrix[j][i]==1) {
					count++;
				}
			}
			System.out.println("count: "+count);
			arr[i]=count;
		}
		boolean flag=false;
		int num=-1;
		for(int k=0; k<arr.length; k++) {
			if(arr[k]==arr.length-1) {
				flag=true;
				num=k;
			}
		}
		int row=num;
		int count2=0;
		for(int z=0; z<arr.length; z++) {
			if(matrix[row][z]==0) {
				count2++;
			}
		}
		if(count2>=arr.length && flag==true) {
			System.out.println("Yes Celebrity is "+num);
		} else {
			System.out.println("NO Celebrity found..");
		}

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