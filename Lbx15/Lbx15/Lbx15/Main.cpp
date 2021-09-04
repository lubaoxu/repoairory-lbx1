#include "Main.h"
#include <stdio.h>

int jolly(void);
int dent(void);
/*函数声明*/
int fuction(double n1, double n2, double n3, double n4) {
	double sum =( n1 + n2 + n3 + n4);
	printf("sum = %f\n", sum*sum);
	return 0;
}

int fuction(double n1, double n2, double n3, double n4);


int main(void) {
	jolly();
	jolly();
	jolly();

	fuction(1.1, 5, 1.3, 1.4);
	return 0;

  }
int jolly(void)
{
	/*函数定义*/
	printf("For he's a jolly good fellow!\n");
	return 0;
}

