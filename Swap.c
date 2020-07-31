#include<stdio.h>
#include<stdlib.h>
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void swap(int*,int*);
int main()
{
  int a,b;
  printf("Enter the two numbers : ");
  scanf("%d %d",&a,&b);
  swap(&a,&b);
  printf("After swap :%d %d",a,b);
}
