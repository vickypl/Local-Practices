#include <stdio.h>

void main()
   {
   	int arr1[10][10],i,j,n;
   	int det=0;
  
  
       printf("\n\nCalculate the determinant of a 3 x 3 matrix :\n");
       printf("-------------------------------------------------\n");  
	   printf("Input elements in the first matrix :\n");
       for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }  
	   printf("The matrix is :\n");
	   for(i=0;i<4;i++)
	   {
	    for(j=0;j<4 ;j++)
	   			{
	     			printf("%4d",arr1[i][j]);
	   			}
	     printf("\n");
	   }
	   for(i=0;i<4;i++)
	   {
     	 det = det + (arr1[0][i]*(arr1[1][(i+1)%4]*arr1[2][(i+2)%4] - arr1[1][(i+2)%4]*arr1[2][(i+1)%4]));
	   }
  		 printf("\nThe Determinant of the matrix is: %d\n\n",det);
  }