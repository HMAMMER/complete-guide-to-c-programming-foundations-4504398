#include <stdio.h>

int main()
{
	int quantity = 15;
	char item[20] = "Bananas";
	float price = 4.5;
	
	printf("You are going to purchase %d %s for $%.2f each. Your total today is %.2f", 
			quantity,
			item,
			price,
			quantity * price
	);
	
	return 0;
}




//shopping program

//declare three variables to be used, a string (charater array). A quantity (int) and item price (float).

//Use printf to tell the user about their purchase. e.g., you have purschased x number of x item for x price each and your total is ...