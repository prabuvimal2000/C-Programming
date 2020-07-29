#include<stdio.h>
#include<stdlib.h>
int checklcm(int a,int b)
{
    int lcm=0,flag=1;
    lcm=(a>b)?a:b;
    while(flag!=0)
    {
       if(lcm%a==0 && lcm%b==0) 
       {
           flag=0;
           break;
       }
       lcm++;
    }
    return lcm;
}
int checkgcd(int a,int b)
{
    if(b==0)
      return a;
    return checkgcd(b,a%b);
}
int main()
{
 int num1,num2,gcd=0,lcm=0;
 printf("Enter the two number : ");
 scanf("%d %d",&num1,&num2);
  lcm = checklcm(num1,num2);
  gcd= checkgcd(num1,num2);
  printf("The lcm of two number is :%d\n",lcm);
  printf("The hcf/gcd of two number is : %d",gcd);
 return 0;
}
