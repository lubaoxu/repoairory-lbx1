#include <stdio.h>
#include "Main.h"
/*two_func.c -- һ���ļ��а����������� */
void butler(void);  /* ANSI/ISO C����ԭ�� */
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void) /*�������忪ʼ */
{
	printf("you rang, sir?\n");
}

