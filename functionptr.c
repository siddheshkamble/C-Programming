#include<stdio.h>

//function defination
void Fun ()
{
	printf("inside function \n");
}

int main()
{
	Fun();  //function call
	
	void (*fptr)();
	
	// fptr is a pointer 
	// which points to the function that 
	// function accept nothing and that 
	// function returns nothing
	
	fptr = Fun;
	
	fptr();
	
return 0;
}
