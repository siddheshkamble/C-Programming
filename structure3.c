#include<stdio.h>

struct student
{
	int Marks;
	int Age;
	char Division;
};

int main()
{
	struct student Sid;
	struct student *ptr = NULL;

	ptr = &Sid;

	ptr->Marks = 90;
	ptr->Age = 21;
	ptr->Division = 'A';

	return 0;
}