#include<stdio.h>

int Multiplication(int iNo1, int iNo2)
{
	int iAns = 0;
	iAns = iNo1*iNo2;
	return iAns;
}

int main()
{
	int iA = 10, iB = 11;
	int iRet = 0;

	iRet = Multiplication (iA,iB);
	printf("Multiplication is %d \n", iRet);

	return 0;
}