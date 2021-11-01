#include<stdio.h>

int main() {
    int in,n,i,j,k;
    int array[100];
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i)
    {
    	int number,sum1=0,sum2=0;
    	scanf("%d", &in);
       for(j=0; j<in-1; j++) {
	        scanf("%d", &array[j]);
	        sum2=sum2+array[j];
	    }
	    for(k=1;k<=in;k++)
        {
            sum1=sum1+k;
        }
      
	    number=sum1-sum2;
	    printf("%d\n", number);
	}
}