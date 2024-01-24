#include <stdio.h>
int main()
{
	int age;
	float GPA;
	char grade;

	printf("What is your age");
	scanf("%i", &age);
	printf("what is your gpa");
	scanf("%f", &GPA);
	printf("what is your letter grade");
	scanf(" %c", &grade);
	return 0;
}
