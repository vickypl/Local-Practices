#include<stdio.h>
#include<stdlib.h>

int main() {
	int n,start[1000],end[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &start[i]);
	}
	for (int j = 0; j < n; ++j)
	{
		scanf("%d", &end[j]);
	}
	//int n=4,start[1000]={1, 4, 3, 1},end[1000]={15, 8, 5, 4};
	
	int p,l,target[100],t=0,freq[100],x=0,count=0,item_start,item_end;
		int master_start=start[0], master_end=end[0];
		for (l = master_start; l <=master_end; ++l)
		{
			for (int m = 1; m < n; ++m)
			{
				item_start=start[m], item_end=end[m];
				for (int o = item_start; o <=item_end; ++o)
				{
					if (l==o)
					{
						count++;
					}
				}
			}
			freq[x]=count;
			x++;
			count=0;
			target[t]=l;
			t++;
		}
		int largest,z=0,ans;
		for (int r=z+1; r <=x; r++)
		{
			if(freq[z]<freq[r]) {
				freq[z]=freq[r];
				largest=freq[z];
				ans=r;
			}
		}
		printf("%d\n", target[ans]);
}