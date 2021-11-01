#include <stdio.h>
int main() 
{
    int n,i,max,ans;
    scanf("%d", &n);
    int arr[n],h[6];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    //    printf("H wala:- %d\n", h[arr[i]]);
        h[arr[i]]++;
    }
    
    max=h[1];
    for(i = 2; i < 6; i++)
    {
        if(max<h[i])
        {
            max=h[i];
            ans=i;
        }
   }
   printf("%d",ans);
  
   return 0;
}