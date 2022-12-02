#include<stdio.h>

enum days {Monday = 2, Tuesday, Wednesday, Thrusday, Friday, Saturday, Sunday};

int main()
{
	enum days obj;
	
	printf("size of enum %d \n", sizeof(obj));
	printf("Monday : %d \n", Monday);
	printf("Tuesday : %d \n", Tuesday);
	printf("Wednesday : %d \n", Wednesday);
	printf("Thrusday : %d \n", Thrusday);	
	
	
	return 0;
}
