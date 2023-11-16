#include<stdio.h>

/**
 * myStartupFun - start point
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - startupfun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
