#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 9.89;
	double d = 89.4234;

	char *cp = &ch;
	int *ip = &i;
	float *fp = &f;
	double *dp = &d;
	
	void *vp =&ch;
	
	printf("value of ch : %c \n", ch);
	printf("address of ch : %p \n", &ch);
	printf("Value inside cp : %p \n", cp);
	printf("Data refer by cp : %c \n", *cp);
	printf("size of ch %d \n", sizeof(ch));
	printf("size of cp %d \n", sizeof(cp));	
	
	printf("Data refer by vp : %c \n ", *(char *)vp);
	
	void *vp = &i;
	printf("Data refer by vp : %d \n", *(int *)vp);

return 0;
}
