public class CelebrityMOdified {
	
	public static void main(String[] args) {



/*  		int[][] matrix = {{0, 1, 0},
						  {0, 0, 0}, 
						  {0, 1, 0}};  */
		
/*  		int[][] matrix= {{0, 1, 1, 1, 1},
           				 {1, 0, 0, 1, 0},
           				 {1, 0, 0, 1, 0},
           				 {0, 0, 0, 0, 0},
           				 {0, 1, 0, 1, 0}}; */

 		int[][] matrix= {{0, 0, 1, 0},
           				 {0, 0, 1, 0},
           				 {0, 0, 0, 0},
           				 {0, 0, 1, 0}};

		printMat(matrix);

	System.out.println("+++++++++++++++++");

		int[] arr = new int[matrix.length];
		int count;
		int maxNum=-1;
		int IndexOfMax=-1;
		for(int i=0; i<arr.length; i++) {
			count=0;
			for(int j=0; j<arr.length; j++) {
				if(matrix[j][i]==1) {
					count++;
				}
			}
			if(count==matrix.length-1) {
				maxNum=count;
				IndexOfMax=i;
			}
		}
		int count2=0;
		for(int j=0; j<matrix.length; j++) {
			if(matrix[IndexOfMax][j]==0) {
				count2++;
			}
		}
		if(count2==matrix.length) {
			System.out.println("Yes the celeb is: "+IndexOfMax);
		} else {
			System.out.println("No celeb found");
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