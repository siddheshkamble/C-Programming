#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 3.14;
	double d = 9.567;
	
	printf("Values from the varible are \n");
	printf("%c\n", ch);
	printf("%d\n",i);
	printf("%f\n", f);
	printf("%lf\n", d);

	printf("size of each varible \n");
	printf("Size of character : %d\n", sizeof(ch));
	printf("Size of integer : %d\n", sizeof(i));
	printf("Size of float : %d\n", sizeof(f));
	printf("Size of double : %d\n", sizeof(d));
	
	printf("Address of each varible \n");	
	printf("Address of character : %p\n", &ch);	
	printf("Address of integer : %p\n", &i);	
	printf("Address of float : %p\n", &f);	
	printf("Address of double : %p\n", &d);	
	
	return 0;
}
