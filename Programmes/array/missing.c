#include <stdio.h>
#include <stdbool.h>
int main() {
	int c[100];
	int n,max,x;
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
	    scanf("%d", &max);
	    for(int j=0; j<max-1; j++) {
	        scanf("%d", &c[j]);
	    }

	   int z=1;
	    for(int k=0; k<=max; k++) {
	        if(z!=c[k]) {
	           printf("%d\n", z);	            
	            break;
	        }
	        z++;
	    }
	}
	return 0;
}