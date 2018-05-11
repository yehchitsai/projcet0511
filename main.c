#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int init,endpoint=10,summary;
	for(init=0,summary=0;init<endpoint;init++)
		summary=summary+init;
	printf("summary=%d\n",summary);
	return 0;
}
