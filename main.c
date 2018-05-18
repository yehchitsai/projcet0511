#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int summary(int init,int endpoint);
int main(int argc, char *argv[]) {
	int x=10, y = 5,t;
	int *yPtr;
	yPtr = &y;
	printf("call swap, before swap, x = %d(%x), y = %d(%x)\n",x,&x,y,&y);
	if(x>y)
		swap(&x,&y);
	
	printf("call swap, after swap, x = %d(%x), y = %d(%x)\n",x,&x,y,&y);
/*		

	
	
	printf("y=%d, yPtr = %x, *yPtr=%d\n",y,yPtr,*yPtr);
	y=10;
	printf("y=%d, yPtr = %x, *yPtr=%d\n",y,yPtr,*yPtr);
*/
//	printf("summary=%d\n",summary(1,10));
	return 0;
}
