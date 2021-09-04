#include "Main.h"
#include <stdio.h>
int main(void){
	float g, h;
	float tax, rate;


	g = 1e21;
	rate = 0.88;
		tax = rate * g;
		h = g + tax;
		printf("You owe $%f p;is $%d in taxes for a  total of $%d.\n",g,h);
		return 0;
}