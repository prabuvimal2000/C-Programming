#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int* parray[5];
	int a, b, c, d, e;
	int i;
	parray[0] = &a;
	parray[1] = &b;
	parray[2] = &c;
	parray[3] = &d;
	parray[4] = &e;
	a = 10;
	b = 100;
	c = 200;
	d = 300;
	e = 400;
	printf("Pointer to Array (parray) at %x\n", (int)parray);
	for (i = 0; i < 5; i++)
	{
		printf("Address stored at %x. Value stored at %x is %d\n", (int)(&parray[i]), (int)parray[i], *parray[i]);
	}
	printf("Pointer to Array incremented (parray+1) at %x\n", (int)(parray + 1));
	return 0;
}
