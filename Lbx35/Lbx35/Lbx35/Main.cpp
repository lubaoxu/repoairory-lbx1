#include "Main.h"
#include <stdio.h>
int main(void) {
	unsigned int un = 98;
	short end = 300;
	long big = 43;
	long long verybig = 439834;
	printf("un =%u and not %d\n",un,un);
	printf("end =%hd and %d\n",end,end);
	printf("big=%ld and not %hd\n",big ,big);
	printf("verybig =%lld and not %ld\n",verybig,verybig);
	return 0;



}