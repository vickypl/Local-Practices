#include <stdio.h>


int maxArea(int arr[], int len) {

	int length=len,widthCount,height=0,area=0,maxwidth=0;

	for (int i = 0; i < length; ++i)
	{
		widthCount=0;
		for (int j = i+1; j < length; ++j)
		{
			widthCount++;
			if (widthCount>=maxwidth && arr[j]<=arr[i])
			{
				maxwidth=widthCount;
				height=arr[j];
				area=maxwidth*height;
			}
		}
	}
	return area;
}


int main(int argc, char const *argv[])
{
	//int arr[]={1, 2, 1};
	//int arr[]={4, 3, 2, 1, 4};
	int arr[]={1, 8, 6, 2, 5, 4, 8, 3, 7};
	
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("Max Area: %d\n", maxArea(arr, length));

//	printf("Max area we got is: %d\n", area);

	return 0;
}