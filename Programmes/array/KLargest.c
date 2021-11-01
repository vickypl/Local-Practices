#include <stdio.h>
int temp[6], t=0;

int cou=0;
void large(int arr[], int size, int k) {
	//cou++;
	if (t==k)
	{
		return;
	}
	int largest=arr[0];
	int index;

	for (int i = 0; i < size; ++i)
	{
		if (largest<arr[i]) {			
			largest=arr[i];
			index=i;
		}
	}
	printf("lolo %d\n", largest);
	temp[t]=largest;
	t++;
	for (int z = index; z < size; ++z)
	{
		if (arr[z+1]=='\0')
		{
			break;
		}
		arr[z]=arr[z+1];
	}
	large(arr, size-1, k);
}


void del(int arr[], int size, int ele) {
	int ind;
	for (int i = 0; i < size; ++i)
	{
		if (ele==arr[i])
		{
			ind=i;
			break;
		}
	}
	for (int k = ind; k < size; ++k)
	{
		arr[k]=arr[k+1];
	}
}


void pf(int arr[], int sz) {
	for (int i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int arr[] = {12, 5, 787, 1, 23};
	int size=sizeof(arr)/sizeof(arr[0]);

	pf(arr, size);

	int k=3;

	large(arr, size, k);

	pf(arr, size-k);
	printf("===============\n");

	pf(temp, k);

//		printf("%d\n", cou);
	return 0;
}






