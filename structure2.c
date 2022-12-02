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
	struct student Pooja;

	Sid.Marks = 90;
	Sid.Age = 23;
	Sid.Division = 'A';

	Pooja.Marks = 98;
	Pooja.Age = 21;
	Pooja.Division = 'B';

	printf("size of sid : %d \n", sizeof(Sid));
	printf("Marks of sid is: %d \n",Sid.Marks);
	
	return 0;
}