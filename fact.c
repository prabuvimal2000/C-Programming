#include<stdio.h>
#include<stdlib.h>
int fact(int n)
{
    int fact =1;
    if(n==1)
    {
       return 1;
    }
    else
      {
        for(int i=n;i>0;i--)
        {
          fact*=i;
        }
       return fact;
      }
}
int main (void)
{
   printf("Enter the number to find factorial : "); 
   int num=0;
   scanf("%d",&num);
   printf("%d",fact(num));
   return 0;
}
