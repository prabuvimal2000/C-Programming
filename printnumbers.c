#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter how many numbers you want to print : ");
    int num=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf("%d ",i);
    }
    return 0;
}
