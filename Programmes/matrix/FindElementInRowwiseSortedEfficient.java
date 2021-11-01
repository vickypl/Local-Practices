public class FindElementInRowwiseSortedEfficient {
	
	public static void main(String[] args) {
		
		int[][] matrix = {
			{10, 20, 30},
			{15, 25, 80},
			{35, 90, 100}
		};

		printMatrix(matrix);
		findElement(matrix, 35);

	}

	public static void findElement(int[][] matrix, int ele) {
		int row=0;
		int col=matrix[row].length-1;
		while(row<matrix.length && col>=0) {
			if (matrix[row][col]==ele) {
				System.out.println("row: "+row+", col: "+col);
				break;
			}
			if (ele>matrix[row][col]) 
				row++;
			else
				col--;
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