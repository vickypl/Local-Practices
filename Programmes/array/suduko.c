#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 9
int i,j;

void sudukoPrint(int array[][9]) {
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			printf("%d  ", array[i][j]);
			if (j==8)
				{
					printf("\n");
				}
		}
	}
}

void sudokuIdentifire(int array[][9]) {
	bool status=true;
	int k,z;
	for (int i = 0; i < 9; ++i)
	{
		for (int i = 0; i < 9; ++i)
		{
			int temp=array[i][j];
			int test=temp;
			int x=0;
			while(x!=9) {
				if (temp==array[i][x])
				{
					if (test==array[i][x])
					{
						k=888;
						//continue;
					} else {
						printf("Array not valid..\n");
						k=1;
						status=false;
						break;
					}
				}
				x++;
			}
			int y=0;
			while(y!=9) {
				if (temp==array[y][j])
				{
					if (test==array[y][j])
					{	
						 z=999;
						//continue;
					} else {
						printf("Array not valid...\n");
						z=1;
						status=false;
						break;
					}
				}
				y++;
			}
		}
	}
	if ((status==true) && (k==888) && (z==999))
	{
		printf("This is valid Suduko..\n");
	} else {
		printf("This is InValid Suduko...\n");
	}
}

int main() {
	int n=9;
	int grid[N][N] = {
			{5,3,5,5,1,6,9,2,7},
			{2,9,6,8,5,7,4,3,1},
			{4,1,7,2,9,3,6,5,8},
			{5,6,9,1,3,4,7,8,2},
			{1,2,3,6,7,8,9,4,9},
			{7,4,8,5,2,9,9,6,3},
			{6,5,2,7,8,1,9,9,4},
			{9,8,1,3,4,5,7,7,6},
			{3,7,4,5,6,4,5,1,5}
			};
printf("======================================\n");
/*
for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			printf("[%d][%d]:%d  ", i,j,grid[i][j]);
		}
		if (j==9)
		{
			printf("||\n");
		}
	}
	*/
sudukoPrint(grid);
//printf("%d\n", grid[5][1]);
//int k=9;
//int t=1;
//while(t!=9) {
//	printf("xxxxxx\n");
//	if (t==5)
//	{
//		//continue;
//		break;
//	}
//	t++;
//}
//sudokuIdentifire(grid);
printf("=======================================\n");
//int ans=sudokuHelper(grid, 9, 9);
//printf("Answer:- %d\n", ans);
	return 0;
}