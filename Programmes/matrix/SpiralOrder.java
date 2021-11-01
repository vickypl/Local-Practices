public class SpiralOrder {
	
	public static void main(String[] args) {

		int[][] matrix = {
			{1, 2, 3, 4},		//00 01 02
			{4, 6, 7, 8},		//10 11 12
			{9, 10, 11, 12}
			{13, 14, 15, 16}		//20 21 22
		};

		printMatrix(matrix);
		System.out.println("+++++++++++++++++++++++++++++++++++++++");
		spiralOfMatrix(4, 4, matrix);
		
	}

	public static void spiralOfMatrix(int enrow, int encol, int[][] arr1)
	{
	    int i, rowind = 0, colind = 0;
	    while (rowind < enrow && colind < encol)
	    {
	        for (i = colind; i < encol; ++i)
	        {
	            System.out.print(" "+arr1[rowind][i]);
	        }
	        rowind++;
	        for (i = rowind; i < enrow; ++i)
	        {
	            System.out.print(" "+arr1[i][encol-1]);
	        }
	        encol--;
	        if ( rowind < enrow)
	        {
	            for (i = encol-1; i >= colind; --i)
	            {
	                System.out.print(" "+arr1[enrow-1][i]);
	            }
	            enrow--;
	        }
	        if (colind < encol)
	        {
	            for (i = enrow-1; i >= rowind; --i)
	            {
	                System.out.print(" "+arr1[i][colind]);
	            }
	            colind++;
	        }        
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