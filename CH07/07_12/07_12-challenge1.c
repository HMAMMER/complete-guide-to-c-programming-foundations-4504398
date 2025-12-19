#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//

/* main program */
int main()
{
	char userInput[10];
	char userOutput[10];
	char quit = 'QUIT';
	char ch;
	int i = 0;

	while(1)
	{
		printf("Command: ");
		
		fgets(userInput, 10, stdin);
	
		while (userInput[i]) {
			ch = userInput[i];
			strcat(userOutput,(toupper(ch)));
			i++;
		}

		for(i = 0; i < 10; i++){
			if (userInput[i] == '\n'){
				userInput[i] = '\0';
			}
		} 

		printf("Processing command %s", userOutput);

		if( strcmp(userOutput,quit)==0 )
			break;
	}

	return 0;
}
