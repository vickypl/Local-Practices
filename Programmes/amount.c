#include <stdio.h>

int main(void) {
 		int amount;
		int withdraw;
		float due;
		scanf("%d", &amount);
		scanf("%d", &withdraw);
		if(withdraw>amount) {
		    printf("Invalid amount..");
		} else if(withdraw%5!=0) {
		    printf("Invalid amount");
		} else {
		    due=amount-(withdraw+0.50);
	        printf("%.2f", due);
		}
	return 0;
}