#include <stdio.h>

int min(int a, int b) {
	if (a>b)
	{
		return b;
	} else {
		return a;
	}
}



int max(int a, int b) {
	if (a>b)
	{
		return a;
	} else {
		return b;
	}
}


void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
}

int maxPro(int arr[]) {
	int minProd,maxProd,choice1,choice2,ans;
	int n=5;
	if (n==0)
	{
		printf("sss\n");
		//return -1;
	}
	minProd=arr[0];
	maxProd=arr[0];
	ans=arr[0];
	//int choice1, choice2;
	for (int i = 1; i < n; ++i)
	{
		choice1=minProd*arr[i];
		choice2=maxProd*arr[i];
		minProd=min(arr[i],min(choice1, choice2));
		printf("mi %d\n", minProd);
		maxProd=max(arr[i],max(choice1, choice2));
		printf("ma %d\n", maxProd);
		ans=max(ans, maxProd);
	}
	return ans;
}


int main(int argc, char const *argv[])
{
	int arr[10]={4,-1,-5,-3,5};
	print(arr, 5);
	int ddd=maxPro(arr);
	printf("Max prod: %d\n", ddd);
	return 0;
}