#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[101],n,i,count,freq[101];
	//printf("Enter the value of n: \n");
	scanf("%d", &n);
	//printf("Enter the values of array:-\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	freq[i]=-1;
	for (i = 0; i < n; ++i)
	{	
		count=1;
		for (int j=i+1; j < n; ++j)
		{
			if (arr[i]==arr[j])
			{
				count++;
				freq[j]=0;
			}
		}
		if (freq[i]!=0)
		{
			freq[i]=count;
		}
	}

	int sum=0;
for (int i = 0; i < n; ++i)
{
	sum+=freq[i]/2;
}
printf("%d\n", sum);

/*

#include<stdio.h>
#include<stdlib.h>

int main {

int n,i,j,c,count=0;
scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++) scanf("%d",&arr[i]);

for(i=0;i<n;i++){
    c=1;
    if(arr[i]!=0){
        for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            c++;
            arr[j]=0;
        }
    }
    count+=c/2;
    }
}

printf("%d",count);

}

*/

}