#include "Main.h"
#include <stdio.h>
#include <string.h>
#define DENSITY 62.3
int main() {
	float weight, volume;
	int size, letters;
	char name[40];
	printf("Hi! what's your weight in pounds?\n",name);
	scanf("%s",name);
	printf("%s what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("well, %s,your first name has %d letters,\n",name);
	return 0;
}