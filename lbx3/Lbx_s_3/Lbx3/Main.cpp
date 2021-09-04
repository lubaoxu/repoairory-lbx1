#include "Main.h"
#include <stdio.h>
int main(void)
{
	int num;
	num = 77777;

	printf("I am a simple ");
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n", num);

	return 1213479;
}



//fathm_ft_.c--把2英寻转换成英尺
#include<stido.h>
int main(void)
{
	int feet, fathoms;

	fathoms = 2; 
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said % d feet!\n", 6 * fathoms);

	return 0;
}









/*two_func.c -- 一个文件中包含两个函数 */
#include <stdio.h>
void butler(void)； /* ANSI/ISO C函数原型 */
int main(void);
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void) /*函数定义开始 */
{
	printf("you rang, sir?\n");
}










