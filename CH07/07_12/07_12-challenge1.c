#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//

/* main program */
int main()
{
	char userInput[10];
	char upperOutput[10];
	int i;

	while(1)
	{
		printf("Command: ");
		
		fgets(userInput, 10, stdin);
		// fetch input
		for(i = 0; i < 10; i++){
			if (userInput[i] == '\n'){
				userInput[i] = '\0';
			}
		}
		// convert to uppercase
		// output "Processing command 'cmd'"
		printf("%s", userInput);
		// break the loop on `QUIT`
		if (userInput == "QUIT"){
			break;
		} 
	}

	return 0;
}
