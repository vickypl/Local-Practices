public class RotateMatrix90 {

			public static void main(String[] args) {
		
		int[][] matrix = {
			{1, 2, 3, 4},		//00 01 02
			{5, 6, 7, 8},
			{9, 10, 11, 12},		//10 11 12
			{13, 14, 15, 16}		//20 21 22
		};

		printMatrix(matrix);
		System.out.println("++++++++++roted matrix++++++++++");
		printMatrix(rotateBy90(matrix));
	}


	public static int[][] rotateBy90(int[][] matrix) {
		
		//roting by 90 means, tranponse the matrix and then reverse the individual colums;

		//transposing the matrix
		for(int i=0; i<matrix.length; i++) {
			for(int j=i+1; j<matrix[i].length; j++) {
				int temp = matrix[i][j];
				matrix[i][j]=matrix[j][i];
				matrix[j][i]=temp;
			}
		}

		//reversing the colums;
		int n=matrix.length;
		for(int i=0;i<n;i++){
			int top=0;
			int bottom = n-1;
			while(top<bottom){
				int temp = matrix[top][i];
				matrix[top][i]=matrix[bottom][i];
				matrix[bottom][i] = temp;
				top++;
				bottom--;
			}
		}

			return matrix;
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