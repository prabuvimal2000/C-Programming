#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=100;
    int* i_ptr=&i;
    printf("%d",i);
    printf("\n%u",i_ptr);
    printf("\n%u",&i);
    printf("\n%u",&i_ptr);
    printf("\n%d",*i_ptr);
    printf("\n%d",*(&i));
    return 0;
}
