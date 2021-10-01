#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int sum=0 ,i, ip;
    printf("Input upper limit of even number: ");
    scanf("%d",&ip);
    for(i=1;i<=ip;i++)
       {
         if(i%2!=0)
           {
         sum=sum+i;
           }
          else
          {

          }
       }
 printf("Sum of odd numbers from 1-%d: %d",ip,sum);
    return 0;
}
