#include <stdio.h>
int fibbo=0;
int fibbonaci(int a)
{
	int i;
	if (a==0)
	return 0;
	if (a==1)
	return 1;
	for (i=2;i<=a;i++)
	{
		fibbo= fibbonaci(i-1)+fibbonaci(i-2);      
	}
	return fibbo;
}
 
int main(void) 
{
    int n,term;
    printf("Kindly enter any number\n");
    scanf("%d",&n);
    term = fibbonaci(n);
    printf("The term of fibbonaci series is %d\n", fibbo);
	return 0;
}
