#include <stdio.h>





int main(int argc, char const *argv[]) {
//	int arr[]={100, 30, 15, 10, 8, 25, 80};
//	int arr[]={2, 30, 15, 10, 8, 25, 80};
	int arr[]={10, 22, 5, 75, 65, 80};
	int n=sizeof(arr)/sizeof(arr[0]);
	int buy=0,sell=0,ans;
	int lmin,index=1;
	int sum=0;

	while(buy<2 && sell<2) {

		lmin=arr[0];
		if (sell>0)
		{
			lmin=arr[index];
		}
		for (int i = index; i < n; ++i)
		{
			if (lmin<arr[i])
			{
				lmin=arr[i-1];
				index=i-1;
				if (sell=1)												//2, 30, 15, 10, 8, 25, 80
				{														//100, 30, 15, 10, 8, 25, 80
					break;
				} else {
					continue;
				}
			}
			if (lmin>arr[i])
			{
				lmin=arr[i];
				index=i;
			}
		}
				printf("index %d\n", index);
		buy++;
		int lmax=arr[index];
		for (int i = index+1; i < n; ++i)
		{
			if (arr[i]>lmin)
			{
				lmax=arr[i];
				index=i;
				if (buy==2)
				{
					continue;
				} else {
					break;
				}
			}
		}
		if (lmax<lmin)
		{
			printf("Unble to make Profit..\n");
			//index=index+1;
		} else {
			printf("lmax %d\n", lmax);
			sum=sum+(lmax-lmin);
			index=index+1;			
		}
	}
	printf("Total Profit: %d\n", sum);

	return 0;
}