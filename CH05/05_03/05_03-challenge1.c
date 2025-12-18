#include <stdio.h>

void line();

int main()
{
	puts("How to Fight Off a Robot Attack");
	line();
	puts("A Survival Guide for the 21st Century");
	line();

	return(0);
}


void line(){

int icount = 0;
while(icount < 40){
	printf("-");
	icount++;
 }
 printf("\n");
}
// Create line function, creates 40 (-) chars, is a void type function.