#include<stdio.h>
int main()
{
  int number,i,sum=0;
	printf("Enter a number to check whether it's a Perfect number or not : ");
	scanf("%d",&number);
	for(i=1; i < number;i++)
	{
		if(number%i==0)
		{
			sum += i;
		}
	}

	if(sum == number)
		printf("The given number %d is a Perfect number\n",number);
	else
		printf("The given number %d is not a Perfect number \n",number);
 return 0;
}

