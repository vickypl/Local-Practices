#include <stdio.h>

int m;
void printMatrix(int arr[][m], int n, int m) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			printf("[%d]   ", arr[i][j]);
			if (j==n-1)
			{
				printf("\n");
			}
		}
	}
}


void spiralOfMatrix(int enrow, int encol, int arr1[][m])
{
    int i, rowind = 0, colind = 0;
    while (rowind < enrow && colind < encol)
    {
        for (i = colind; i < encol; ++i)
        {
            printf("%d ", arr1[rowind][i]);
        }
        rowind++;
        for (i = rowind; i < enrow; ++i)
        {
            printf("%d ", arr1[i][encol-1]);
        }
        encol--;
        if ( rowind < enrow)
        {
            for (i = encol-1; i >= colind; --i)
            {
                printf("%d ", arr1[enrow-1][i]);
            }
            enrow--;
        }
        if (colind < encol)
        {
            for (i = enrow-1; i >= rowind; --i)
            {
                printf("%d ", arr1[i][colind]);
            }
            colind++;
        }        
    }
}


void spiralMatrix(int arr[][m], int n, int m) {

	int firstRow=0, lastRaw=n-1, firstColumn=0, lastColumn=m-1, pointer=0;

	while(firstColumn<=lastRaw && firstColumn<=lastColumn) {
		for (int i = firstRow; i <=lastColumn; ++i)
		{
			printf("%d ", arr[pointer][i]);
		}
		pointer++;
		for (int i = pointer; i <=lastRaw; ++i)
		{
			printf("%d ", arr[i][lastColumn]);
		}
		lastColumn--;
		if (pointer<=lastRaw)
		{
			for (int i = lastColumn; i >= firstColumn; --i)
			{
				printf("%d ", arr[lastRaw][i]);
			}
			lastRaw--;
		}
		if (pointer<=lastColumn)
		{
			for (int i = lastRaw; i >= pointer; --i)
			{
				printf("%d ", arr[i][firstColumn]);
			}
			firstColumn++;
		}
	}

	printf("\n");

}



int main(int argc, char const *argv[])
{
/*	int n=4;
	m=4;
	int arr[4][4]={
		{1, 2, 3, 4},      //row 1
    	{5, 6, 7, 8},      //row 2
    	{9, 10, 11, 12},
    	{13, 14, 15, 16},
	};*/
	int n=3;
	m=3;
	int arr[3][3]={
		{1, 2, 3},      //row 1
    	{4, 5, 6},      //row 2
    	{7, 8, 9},
	};
	printMatrix(arr, n, m);
	//spiralPrint(n, m, arr);
	spiralMatrix(arr, n, m);
	spiralOfMatrix(n, m, arr);
	return 0;
}