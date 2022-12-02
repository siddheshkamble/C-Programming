#include<stdio.h>

	// 11		son
	// 21		daughter
	//51		mom
	//101		father
	
int main()
{
	int iToken = 0;

	printf("Enter the token number : \n");
	scanf("%d", &iToken);

	switch(iToken)
	{
		case 11:
			printf("Got Son sandles \n");
			break;
		case 21:
			printf("Got daughter sandles \n");
			break;
		case 51:
			printf("Got mom sandles \n");
			break;
		case 101:
			printf("Got father sandles \n");
			break;
		default:
			printf("No Token \n");
			break;
	}
	return 0;
}
