// workshop2- program 3
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
	int n, sum = 0;
	do {
		printf("entered n: ");
		scanf("%d",&n);
		sum = sum+n;
	}while (n!=0);
	printf("sum = %d", sum);
	return 0;
}
