#include <stdio.h>

int main()
{
	int iAges[5] = {20, 51, 52, 22, 17};
	int x;

	for (x = 0; x < 5; x++){
		printf(" I know someone who is %d years old\n", iAges[x]);
}

	return 0;
}


//Create an array of size 5, assign 5 int values to the array 
// Output saying I know someone who is %d from the array.