#include <stdio.h>


void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		{
			printf("%d ", arr[i]);
		}
}



int main(int argc, char const *argv[])
{
	int arr1[10]={12, 32, 36, 43, 45, 76, 87, 88, 89, 98};
	int arr2[10]={32, 43, 45, 48, 57, 65, 76, 78, 79, 97};
	int arr3[10]={23, 32, 45, 47, 65, 67, 78, 87, 88, 89};

	int n=10;

	print(arr1, 10);
	printf("\n");
	print(arr2, 10);
	printf("\n");
	print(arr3, 10);
	printf("\n");
	int result[10];
	int x = 0, y = 0, z = 0, t=0;
	while (x < 10 && y < 10 && z < 10){
			if (arr1[x] == arr2[y] && arr2[y] == arr3[z]) 
			{
				result[t]=arr1[x];
				t++;
				x++;
				y++;
				z++;
			}
			else if (arr1[x] < arr2[y])
				x++;
			else if (arr2[y] < arr3[z])
				y++;
			else
				z++;
	}

	printf("Common Elements:- \n");
	print(result, t);

	return 0;
}