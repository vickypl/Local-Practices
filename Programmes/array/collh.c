#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
    int x,n,arr[1000];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    insertion(arr, n);
    printf("%d\n", arr[n-3]);
    return 0;
}