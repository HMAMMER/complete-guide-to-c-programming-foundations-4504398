#include <stdio.h>

int main()
{
	int artifacts,rooms,paintings,sculptures;

	rooms = 12;
	paintings = 16;
	sculptures = 4;

	artifacts = (rooms * paintings) + (rooms * sculptures);

	printf("This museum has %d artifacts\n",artifacts);

	return(0);
}

 // 12 rooms

 // Each room has 16 painting and 4 sculptures

 // write an equation that calculates the total number of artifacts in the museum and output the result.

 // Correct answer is 240.