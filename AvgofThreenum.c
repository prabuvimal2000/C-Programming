#include <stdio.h>
#include <stdlib.h>
float avg(int ,int,int);
int main(void)
{
	int num1,num2,num3;
	scanf("%d %d %d",&num1,&num2,&num3);
	float result=avg(num1,num2,num3);
	printf("%f",result);
}
float avg(int a,int b,int c)
{
    float avg=(a+b+c)/3;
    return  avg;
}
