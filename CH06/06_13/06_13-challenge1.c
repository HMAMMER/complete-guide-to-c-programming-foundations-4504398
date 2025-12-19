#include <stdio.h>
#include <stdlib.h>

#define SIZE 32

struct person fill(void);
void output(struct person y);

struct person
{
	char name[SIZE];
	int id;
};

/* main program */
int main()
{
	struct person you;

	/* fill the structure */
	you = fill();

	/* output the structure */
	output(you);

	return 0;
}

struct person fill(void)
{
	static struct person user;

	printf("Enter an ID: ");
	scanf("%d", &user.id);
	printf("Enter your name: ");
	scanf("%s", user.name);

	return user;
}

void output(struct person user)
{
	printf("ID %d belongs to %s\n", user.id, user.name);
}
