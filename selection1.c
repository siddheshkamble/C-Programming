#include<stdio.h>
#include<stdbool.h>

// % Mod
//== Equality

bool CheckEven(int iNo)
{
	if((iNo % 2) == 0)
	{
		return true; 
	}
	else
	{
		return false; 
	}

}

int main()
{
	int iValue1 = 0;
	bool bRet = false;

	printf("Enter the number : \n");
	scanf("%d", &iValue1);

	bRet = CheckEven(iValue1);
	if(bRet == true)
	{
		printf("Number is Even \n");
	}
	else
	{
		printf("Number is Odd \n");
	}
	return 0;
}