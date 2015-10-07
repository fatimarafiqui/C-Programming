#include <stdio.h>
#include <math.h>
 
int factorial(int a)
{
    if(a==0)
    return 1;
    return a*factorial(a-1);
} 
 
void series(int x, int n)
{
	float sum=0
	int fact,i;
	for(i=1;i<=n;i++)
	{
		fact=factorial(i);
		sum= sum + (pow(x,i)/fact);
	}
	printf("The sum of the series is %d\n", sum);
}
 
 
 
int main(void) 
{
    int n,x;
    printf("Kindly enter any the value of x and n \n");
    scanf("%d", &x);
    scanf("%d", &n);
    series(x,n);
	return 0;
}
