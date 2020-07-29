#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n=0,sum=0;
 printf("Enter the no.of input : ");
 scanf("%d",&n);
 int i=1;
 while(i<=n)
 {
   sum+=i;
   i++;
 }
 printf("%d",sum);
 return 0;
}
