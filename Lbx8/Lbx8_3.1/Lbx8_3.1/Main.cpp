#define _CRT_SECURE_NO_WARNINGS
#include "Main.h"
#include <stdio.h>

int main(void)
{
	float weight;
	float value;

	printf("Are you worth your weight in platinum?");
	printf("Let's check it out.\n");
	printf("please enter your weight in pounds:");

	/*��ȡ�û�������         */
	scanf("%f", &weight);
	/*����׽�ļ۸���1700    */
	/*14.5833���ڰ�Ӣ��*/
	value = 1700.0 *weight * 14.5883;
	printf("weight=%f\n",weight);
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("YOU are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");




}