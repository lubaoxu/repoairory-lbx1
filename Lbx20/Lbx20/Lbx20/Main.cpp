#include "Main.h"
#include   <stdio.h>
int two(void);
int one_three(void);
int main(void) {
	printf("one\n");
	two();
	printf("three\n");
	return 0;

}
int two(void) {
	printf("two\n");
	return 0;
}