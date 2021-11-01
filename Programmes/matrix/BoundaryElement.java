public class BoundaryElement {
	
	public static void main(String[] args) {
		
		int[][] matrix = {
			{1, 2, 3, 6},		//00 01 02
			{4, 5, 6, 8},		//10 11 12
			{7, 8, 9, 2},
			{3, 9, 7, 2}		//20 21 22
		};

		printMatrix(matrix);
		System.out.println("====-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====");
		printBoundary(matrix);


	}

	static void printBoundary(int[][] matrix) {
		for (int i=0; i<matrix.length; i++) {
			for (int j=0; j<matrix[i].length; j++) {
				if (i == 0 || j == 0 || i == matrix.length - 1 || j == matrix[i].length - 1) {
                    System.out.print(matrix[i][j] + "\t");
                }// else {
                  //  System.out.print("\t");
                //}
			}
			//System.out.println();
		}
	}

	static void printMatrix(int[][] matrix) {
		for (int i=0; i<matrix.length; i++) {
			for (int j=0; j<matrix[i].length; j++) {
				System.out.print(" "+matrix[i][j]);
			}
			System.out.println();
		}
	}
}