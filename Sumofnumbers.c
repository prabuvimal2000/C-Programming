#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n=0,sum=0,num=0;
 printf("Enter the no.of input : ");
 scanf("%d",&n);
 int i=1;
 printf("Enter the numbers :\n");
 while(i<=n)
 {
   scanf("%d",&num);
   sum+=num;
   i++;
 }
 printf("The sum is : %d",sum);
 return 0;
}
