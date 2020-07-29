#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,sum=0;
 printf("Enter the size of an array : ");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the elemnets :\n");
 for(int i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
 for(int i=0;i<n;i++)
 {
     sum+=arr[i];
 }
 printf("The sum of array is = %d ",sum);
 return 0;
}
