public class SnakePattern {
	
	public static void main(String[] args) {
		
		int[][] matrix = {
			{1, 2, 3},		//00 01 02
			{4, 5, 6},		//10 11 12
			{7, 8, 9}		//20 21 22
		};

		printMatrix(matrix);
		System.out.println("-------------------------------");
		printSnakePattern(matrix);


	}

	public static void printSnakePattern(int[][] matrix) {
		for (int i=0; i<matrix.length; i++) {
			if(i%2==0) {
				for (int j=0; j<matrix[i].length; j++) {
					System.out.print(matrix[i][j]+" ");
				}
			} else {
				for (int j=matrix[i].length-1; j>=0; j--) {
					System.out.print(matrix[i][j]+" ");
				}
			}
		}
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