#include<stdio.h>

		// Structure Declaration
		// There is NO memory allocation at this point
struct Demo
{
	int i;
	float f;
	int j;
	double d;
};

int main()
{
		//structure object/ variable creation
		//memory gets allocated at this point
struct Demo obj1;
struct Demo obj2;
struct Demo obj3;

		//Member initiolization
obj1.d = 11.0;
obj2.i = 21;

printf("size of obj1 is : %d \n", sizeof(obj1));
printf("size of obj2 is : %d \n", sizeof(obj2));
printf("i of obj2 is : %d \n", obj2.i);

	return 0;
}