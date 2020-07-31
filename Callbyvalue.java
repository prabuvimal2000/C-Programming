#include<stdio.h>
#include<stdlib.h>
void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("After swap :%d %d",x,y);
}
int main()
{
  int a,b;
  printf("Enter the two numbers : ");
  scanf("%d %d",&a,&b);
  swap(a,b);
  return 0;
}
