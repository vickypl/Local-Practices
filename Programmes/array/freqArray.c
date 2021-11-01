#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[12]={1, 2, 5, 4, 3, 2, 1, 1, 6, 7, 3, 3};
	int count,i,j,freq[12];
	freq[i]=-1;

    for(i=0; i<12; i++)
    {
        count = 1;
        for(j=i+1; j<12; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<12; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}