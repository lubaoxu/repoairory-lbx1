#include "Main.h"
#include <stdio.h>
int main() {
	int a, b;
	a = 5;
	b = 2; /*��7��*/
	b = a; /*��8��*/
	a = b; /*��9��*/
	printf("%d    %d\n", b, a);
	return 0;
}