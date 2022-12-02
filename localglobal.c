#include <stdio.h> 

int X= 10;		//Global variable (Data)

void Demo()
{
	int B = 30;	//Local variable (Stack)
	
	printf (" Value of B from Demo : %d \n", B);
	printf (" Value of X from Demo : %d \n", X);
}

int main () 
{
     int A = 20;	//Local variable (Stack)
     
     	printf (" Value of A from main : %d \n", A);
	printf (" Value of X from main : %d \n", X);
	
     Demo ();		//Function call
     
return 0;
}   
