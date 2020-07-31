#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* int_mem_ptr;
	int* int_mem_ptr_2;
	int index;
	char c;
	int n;
	printf("How many values you need: ");
	scanf("%d",&n);
	int_mem_ptr = (int*)malloc(n*sizeof(int));
	for (index = 0; index < n; index++)
		printf("The address is %u\n", (int)(int_mem_ptr + index));
	scanf("%c", &c);
	for (index = 0; index < n; index++)
  {
		*(int_mem_ptr + index) = index;
  }
	for (index = 0; index < n; index++)
  {
		printf("The value is %u\n", (int)(*(int_mem_ptr + index)));
   }
   free(int_mem_ptr);
	return 0;
}
