/*Program to print mutliplication table of given number*/
#include<stdio.h>
int main()
{
	int i, n;
	printf("Enetr a number: ");
	scanf("%d", &n);
	for(i=0;i<=10;i++)
	printf("%d * %d = %d\n", i, n, i*n);
	return 0;
}
