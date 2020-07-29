#include<stdio.h>
#include<stdlib.h>
int main()
{
 int num=0;
 printf("Enter the number to check whether it is even or odd :\n");
 scanf("%d",&num);
 (num%2==0)?printf("Enterd number %d is an even number ",num):printf("Enterd number %d is odd number",num);
 return 0;
}
