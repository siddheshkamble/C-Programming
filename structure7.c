#include<stdio.h>

#pragma pack(1)
struct Demo
{
	int no;
	float f;
	char ch;
	float f1;
};

int main()
{
	struct Demo dobj;
	printf("size of structutr %d \n", sizeof(dobj));

	return 0;
}
