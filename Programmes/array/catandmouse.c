#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int a,b,c;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d %d", &a,&b,&c);
        int x=a-c;
        int y=b-c;
        if(x<y) {
            printf("Cat %c\n", 'A');
        } else if(x>y) {
            printf("Cat %c\n", 'B');
        } else {
            printf("Mouse %c\n", 'C');
        }
    }
    return 0;
}