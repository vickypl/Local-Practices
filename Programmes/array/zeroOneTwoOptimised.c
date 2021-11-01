#include <stdio.h>
//the famous dutch flag problem
void dutchFlag(int array[], int n)
{
    if(array && n)
    {
        int redIndex=0;
        int whiteIndex=0;
        int blueIndex=n-1;
        while(whiteIndex <= blueIndex)
        {
            if(array[whiteIndex] == 0)
            {
                array[whiteIndex] = 1;
                array[redIndex] = 0;
                redIndex++;
                whiteIndex++;
            }
            else if(array[whiteIndex]==1)
            {
                whiteIndex++;
            }
            else if(array[whiteIndex]==2)
            {
                array[whiteIndex] = array[blueIndex];
                array[blueIndex] = 2;
                blueIndex--;
            }
            else
                return;
        }
    }
}
int main()
{
    int k[]={1,0,1,2,0,2,2,0,2,1,2,1,0};
    int n=13;
	dutchFlag(k,n);
    for(int i=0;i<n;++i)
    {
        printf("%d ",k[i]);
    }
    printf("\n");
}