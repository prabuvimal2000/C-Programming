#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
bool isEligible(int num)
{
    if(num>=18)
       return true;
    else
       return false;
}
int main(void)
{
   int num;
   scanf("%d",&num);
   if(isEligible(num))
        printf("Yes You eligible to vote");
   else
       printf("Sorry your not eligible to vote");
   return 0;
}
