#include <stdio.h> 

int main() {
    int n,k,arr[1000],count=0;
    scanf("%d %d", &n,&k);
    
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int j=0; j<n; j++) {
        if((arr[j]%k)==0) {
            count++;
        }
    }
    
    printf("%d", count);
	
	return 0;
}