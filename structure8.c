#include<stdio.h>

struct Demo
{
	int i;		//4
	float f;	//4
	double d;	//8
};			//16

union Hello
{
	int i;		//4
	float f;	//4
	float f2;
	double d;	//8
};			//8

int main()
{
	struct Demo dobj;
	union Hello hobj;
	
	printf("size of structutr %d \n", sizeof(dobj));
	printf("size of union %d \n", sizeof(hobj));

	dobj.i = 11;
	dobj.f = 90.8;
	dobj.d = 90.5;
	
	hobj.f = 90.4;
	
	printf("value of int union %f \n",hobj.f);
	printf("value of int union %f \n",hobj.f2);
	printf("value of int union %lf \n",hobj.d);
	
	return 0;
}
