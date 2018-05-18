#include <stdio.h>
void swap(int *x, int *y)
{
	int t;
	printf("inner swap, before swap, x = %d(%x), y = %d(%x)\n",*x,x,*y,y);
	t=*x;
	*x=*y;
	*y=t;
	printf("inner swap, after swap, x = %d(%x), y = %d(%x)\n",*x,x,*y,y);
	return;
}
