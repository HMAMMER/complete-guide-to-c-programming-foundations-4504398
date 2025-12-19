#include <stdio.h>

int main()
{
	struct date{
	 int day;
	 int month;
	 int year;
		
	};
	
	struct info{
	 struct date birthday;
	 float height;
	 char name[40];
	} hamish = {
		{24, 11, 2003},
		0.0019304,
		"Hamish McIntosh"
	}; 

	printf("%s was born on %d/%d/%d and is %f km tall\n",
			hamish.name,
			hamish.birthday.day,
			hamish.birthday.month,
			hamish.birthday.year,
			hamish.height
	);

	return 0;
}

//Create a structure that contains birthday, height in km (real number / float) and name (string)

//Birthday to be a nested structure with day month and year