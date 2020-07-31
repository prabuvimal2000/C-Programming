#include<stdio.h>
#include<stdlib.h>
int add(int x ,int y)
{
    int z=x+y;
    return z;
}
int main()
{
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    int (*ptr)(int,int);
    ptr=&add;
    sum=add(a,b);
    printf("%d ",sum);
    return 0;
}
