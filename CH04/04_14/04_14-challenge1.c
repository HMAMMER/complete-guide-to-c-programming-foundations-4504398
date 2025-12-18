#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
	char cChoice = '\0';
	
	/* main program loop */
	int done = FALSE;
	while(!done)
	{
		
	printf("Enter a selection R(ight), L(eft), B(ack), Q(uit). ");
	scanf(" %c", &cChoice);

		switch (cChoice){
		 case 'R':
		 case 'r':
		 puts("move right");
		 break;

		 case 'L':
		 case 'l':
		 puts("move left");
		 break;
		 
		 case 'B':
		 case 'b':
		 puts("move back");
		 break;

		 case 'Q':
		 case 'q':
		 puts("Quitting");
		 done = TRUE;
		 break;
		
		 default: 
		 puts("invalid input");
		 break; 

		}
	}

	return 0;
}
