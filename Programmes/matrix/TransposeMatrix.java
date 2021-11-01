public class TransposeMatrix {
	
		public static void main(String[] args) {
		
		int[][] matrix = {
			{1, 2, 3},		//00 01 02
			{4, 5, 6},		//10 11 12
			{7, 8, 9}		//20 21 22
		};

		printMatrix(matrix);
		System.out.println("-------------------------------");
		printMatrix(transposeMatrix(matrix));
		System.out.println("-------------optimised---------------");
		printMatrix(transposeMatrixOptimised(matrix));
	}


	public static int[][] transposeMatrixOptimised(int[][] matrix) {
		int count=0;
		for(int i=0; i<matrix.length; i++) {
			for(int j=i+1; j<matrix[0].length; j++) {
				int temp=matrix[i][j];
				matrix[i][j]=matrix[j][i];
				matrix[j][i]=temp;
				count++;
			}
		}
		System.out.println("Number of swaps done: "+count);
		return matrix;
	}


	public static int[][] transposeMatrix(int[][] matrix) {
		int count=0;
		int[][] temp = new int[matrix.length][matrix[0].length];
		for (int i=0; i<matrix.length; i++) {
			for (int j=0; j<matrix[i].length; j++) {
				temp[j][i]=matrix[i][j];
				count++;
			}
		}
		System.out.println("Number of swaps done: "+count);
		return temp;
	}

	public static void printMatrix(int[][] matrix) {
		for (int i=0; i<matrix.length; i++) {
			for (int j=0; j<matrix[i].length; j++) {
				System.out.print(" "+matrix[i][j]);
			}
			System.out.println();
		}
	}
}