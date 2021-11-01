#include<stdio.h>
#include<stdlib.h>

int max=-1,temp,buy,sell;

void get_max_profit(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			temp=arr[i]-arr[j];
			if (temp>= 0 && temp>max)
			{
				if (arr[i]>arr[j])
				{
					buy=arr[j];
					sell=arr[i];
				}
				max=temp;
			}
		}
	}
	printf("On buying the stock at %d and selling it at %d. \n", buy,sell);
	printf("Max profit: %d\n", max);
}

int main() {
	int stockprize[6] = {10, 7, 5, 8, 11, 9};
	get_max_profit(stockprize, 6);

}