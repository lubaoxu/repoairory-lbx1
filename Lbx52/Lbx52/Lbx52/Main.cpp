#include "Main.h"
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraodinary being."
int main(void)
{
	char name[40];
	printf("what's your name?");
	printf("%s ,name");
	printf("Hello,%s .%s\n",name,PRAISE);
	printf("your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
	return 0;

}