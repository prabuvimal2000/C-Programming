#include<stdio.h>
#include<math.h>
int main()
{
 int num=0,power=0;
 printf("Enter the number: ");
 scanf("%d",&num);
 printf("Entered the power: ");
 scanf("%d",&power);
 printf("%lf",pow(num,power));
 return 0;
}
