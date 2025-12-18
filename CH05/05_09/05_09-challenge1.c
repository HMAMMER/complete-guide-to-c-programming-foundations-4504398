#include <stdio.h>

void line (int, char);

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35,'*');

	return(0);
}

//draw a line of an inputted charater a given number of times

void  line(int num, char symb){
	while(num != 0){
		putchar(symb);
		num--;
	}

}