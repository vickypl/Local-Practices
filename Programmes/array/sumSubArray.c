#include <stdio.h>
#include<stdbool.h>

int main() {
    int arr[100]={1, 3, 9, 4, 7, 2, 5};
    int num;
    bool diss=false;
    scanf("%d", &num);
    int item1, item2;
    for(int i=0; i<7; i++) {
        for(int j=i+1; j<7; j++) {
            item1=arr[i], item2=arr[j];
            if((item1+item2)==num) {
                printf("%d+%d=%d\n", item1,item2,num);
                printf("======\n");
                diss=true;
            }
        }
    }
    if (!diss)
    {
        printf("No compitable numbers found..\n");
    }
	return 0;
}