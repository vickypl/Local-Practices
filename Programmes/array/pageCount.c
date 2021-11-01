#include<stdio.h>
 int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
    int noOfPagesToTurn = 0, temp = 0;

    //starting from the beginning
    if(p == 1 || p == n || (p % 2 == 0 && n - p == 1)){
        noOfPagesToTurn = 0;
    }else{
        int startingPage = 2;
        noOfPagesToTurn = 0;
        for(; startingPage < n; startingPage+=2){
            noOfPagesToTurn++;
            if(startingPage == p || (startingPage + 1) == p){
                break;
            }
        }
        //check if book's max page is odd or even
        if(n % 2 == 0){
            startingPage = n - 2;
        }else{
            startingPage = n - 3;
        }
        temp = 0;
        for(; startingPage > 1; startingPage-=2){
            temp++;
            if(startingPage == p || (startingPage + 1) == p){
                break;
            }        
        }
        if(temp < noOfPagesToTurn){
            noOfPagesToTurn = temp;
        }
    }

    return noOfPagesToTurn;
}
int main() {
	int n,p;
//	printf("Enter the value of n,p.\n");
	scanf("%d %d", &n,&p);
	int x=pageCount(n,p);
	printf("%d\n", x);
}