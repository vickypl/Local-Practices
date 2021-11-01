
//optimised
/*#include<stdio.h>
#include<stdbool.h> 
#include<math.h> 
  
bool isPowerOfTwo(int n) 
{ 
   if(n==0) 
   return false; 
  
   return (ceil(log2(n)) == floor(log2(n))); 
} 
  
int main() 
{ 
    isPowerOfTwo(31)? printf("Yes\n"): printf("No\n"); 
    isPowerOfTwo(64)? printf("Yes\n"): printf("No\n"); 
    return 0; 
} 

*/

//Correct but further optimisation needed


/*#include <stdio.h>
int main() {
    int num;
    int tempNum,flag;
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; ++i)
    {
    	scanf("%d",&num);
     
    	tempNum=num;
    	flag=0;
    	while(tempNum!=1)
    	{
        	if(tempNum%2!=0){
            	flag=1;
            	break;
        	}
        	tempNum=tempNum/2;
    	}
  
    	if(flag==0)
        	printf("YES\n");
    	else
    	    printf("NO\n"); 
    }
    return 0;
}
*/


























/*#include<stdio.h>
#include<stdbool.h>
int main()
{
	int t,i;
	int n,j;
	bool status=false;
	scanf("%d", &t);
	for(i=0; i<t; i++) {
	    scanf("%d", &n);
	    if (n!=1)
	    {
	    	int x=2,y=1;
	    	for (j = y; j <=n; ++j)
	    	{
	    		y=x*y;
	    		if (y==n)
	    		{
	    			status=true;
	    			break;
	    		}
	    	}
	 
	    	if(status) {
	        	printf("YES\n");    
	   		} else {
	        	printf("NO\n");
	    	}	    
		} else {
			printf("YESS\n");
		}
	} 
	return 0;
}


*/














/*#include <stdio.h>
#include <stdlib.h>

void reverse(int i) {
	if (i>5)
		exit(0);
	printf("%d\n", i);
	return reverse(i++);
}

int main() {
	reverse(1);
}





*/










/*void test(char c[]) {
	c=c+2;
	c--;
	printf("%c", *c);
}

int main() {
	char ch[5]={'p', 'o', 'u', 'r'};
	test(ch);
	return 0;
}*/