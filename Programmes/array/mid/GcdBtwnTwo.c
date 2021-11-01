#include <stdio.h>

int gcd(int a, int b) {
	if (a==b)
	{
		return a;
	}
	if(a%b==0) 
	{
		return b;
	}
	if (b%a==0)
	{
		return a;
	}
	if (a>b)
	{
		return (gcd((a%b),b));
	} else {
		return (gcd(a,(b%a)));
	}
}


int main(int argc, char const *argv[])
{
	int arr[5]={24,36,68,80,40};

	int x=gcd(24, 36);
	printf("%d\n", x vn   );



/*	int a=1,b=3,n=5;
	//int a=2,b=4,n=5;
	//printf("%d %d\n", arr[a],arr[b]);
	int item1=arr[a],item2,con=1;

		for (int j = a+1; j <=b; ++j)
		{
			if (item1>arr[j])
			{
				item1=arr[j];
			}
			con++;
		}
	//printf("con %d\n", con);
	int comn[1000],c=0,tell=1,ans;
	for (int i = 1; i <=item1; ++i)
	{
		int t=a;
		int tell=0;
		while(t<=b) {		
			if ((t%i)==0)
			{
				tell++;
			}
			if(tell==con) {
				ans=i;
			}
			t++;
		}
	}
		printf("Ans: %d\n", ans);

	//printf("%d\n", item1);


*/
	return 0;
}