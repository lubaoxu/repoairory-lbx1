#include "Main.h"
#include <stdio.h>
int main(void) {
	float aboat = 43432;
	double abet = 2534;
	long double dip = 432;
		printf("%f can be written %e\n",aboat,aboat);
		printf("And it's %a in hexadecimal,powers of 2 notation\n,aboat");
		printf("%f can be written %Fe\n",abet,abet);
		printf("%Lf can be written %Le\n",dip,dip);
	return 0;
}