#include <stdio.h>
 
int factorial(int a)
{
	if(a==0)
	return 1;
	return a*factorial(a-1);
}
 
int main(void) 
{
    int n, fact;
    printf("Kindly enter any number\n");
    scanf("%d",&n);
    fact = factorial(n);
    printf("The factorial of the number is %d\n", fact);
	return 0;
}
