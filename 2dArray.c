#include<stdio.h>
#include<stdlib.h>
void fillArray(int arr[][8],int r,int c)
{
   for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
    {
      scanf("%d",&arr[i][j]);
    }
    printf("\n");
   }
   for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
}
int main()
{
 int row,col;
 printf("Enter the row : ");
 scanf("%d",&row);
 printf("Enter the col : ");
 scanf("%d",&col);
 int arr[row][col];
 fillArray(arr,row,col);
 return 0;
}
