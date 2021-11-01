/*

#include<stdio.h>
#include<stdlib.h>

void print(int arr[], int n) {
	for (int m = 0; m < n; ++m)
	{
		printf("Sum[%d]:%d\n", m,arr[m]);
	}
}

void insertion(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		int j=i-1,key=arr[i];
		while(j >= 0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

int main() {
	int b,n,m;
	//printf("B N M\n");
	scanf("%d %d %d", &b,&n,&m);
	int keyboard[100000],usb[1000000],comp[1000000];
	int z=n*m,k=0;
	//printf("keyboard\n");
	for (int i = 0; i < n; ++i)
		{
			scanf("%d", &keyboard[i]);
		}
	//printf("usb\n");
	for (int i = 0; i < m; ++i)
		{
			scanf("%d", &usb[i]);
		}
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; j++)
		{
			comp[k]=keyboard[i]+usb[j];
			k++;
		}
	}
	insertion(comp, z); 

	int smallest=comp[0];
	for (int i = 1; i < z; ++i)
	{
		if (smallest>comp[i])
		{
			smallest=comp[i];
		}
	}

	if (smallest>b)
	{
		printf("%d\n", -1);
	} else {
		int dear,largest,i=0;
		for (int j=i+1; j < z; j++)
		{
			if(comp[i]<comp[j]) {
				comp[i]=comp[j];
			if (comp[j]<=b) {
					dear=comp[j];
				}
			}
		}
		printf("%d\n", dear);
	}
}

*/
#include <stdio.h>
int main()
{
    int b,usb[1000],key[1000],no=-1,i,j,n,m,result=0;
    scanf("%d %d %d",&b,&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&key[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&usb[j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            result=key[i]+usb[j];
            if(result>no && result<=b)
            {
                no=result;
            }
        }
    }
    printf("%d",no);
}