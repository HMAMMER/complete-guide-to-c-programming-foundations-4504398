#include <stdio.h>

void add (int, int);
void subtract (int, int);
void multiply (int, int);

float divide (int, int);

int main()
{
	int a,b;

	printf("Enter two values, separated by a space: ");
	scanf("%d",&a);
	scanf("%d",&b);

	add(a,b);
	subtract(a,b);
	multiply(a,b);
	printf("%d / %d = %f\n",a,b,divide(a,b));
	
	return 0;
}

void add (int a, int b){
	printf("%d + %d = %d\n", a, b, a + b);
}

void subtract (int a, int b){
	printf("%d - %d = %d\n", a, b, a - b);
}

void multiply (int a, int b){
	printf("%d * %d = %d\n", a, b, a * b);
}

float divide (int a, int b){
	return (float) a / b;
}
// create the functions add, subtract nad multiply they are void with a sting output.

//divide function is to return a float value.