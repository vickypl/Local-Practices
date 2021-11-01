#include<stdio.h>
int main()
{
	int t,n,arr[1000];//={1, 2, 3}; ///={4, 3, 2, 2, 2, 3, 2, 1, 2, 2, 2};
	int temp[1000],c;
	scanf("%d", &t);
	for(int i=0; i<t; i++) {
	    scanf("%d", &n);
	    for(int j=0; j<n; j++) {
	        scanf("%d", &arr[j]);
	    }

		int index,x;
		for (int k = 0; k < n; ++k)
		{
			c=0;
			for (int l = 0; l < n; ++l)
			{
				if (arr[k]==arr[l])
				{
					c++;
					if (c>n/2)
					{	
						index=k;
					}
				}
			}
			if (c>n/2)
			{
				x=c;
				index=arr[index];
			}
		}

		if (x>n/2)
		{
	        printf("%d\n", index);   			
		} else {
			printf("%d\n", -1);
		}
	}
	return 0;
}