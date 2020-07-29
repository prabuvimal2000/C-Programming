#include<stdio.h>
#include<stdlib.h>
int power(int base,int power)
{
  int result =1;
  for(int i=1;i<=power;i++)
  {
    result*=base;
  }
  return result;
}
int main()
{
 printf("Enter the number : ");
 int n=0,p=0;
 scanf("%d",&n);
 printf("Enter the power : ");
 scanf("%d",&p);
 printf("%d",power(n,p));
 return 0;
}
