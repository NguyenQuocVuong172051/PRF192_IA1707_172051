// Workshop3-Program 7
#include<stdio.h>

int sumDigits(int n)
{
	int sum =0;
	do{
		int remainder = n%10;
		n = n/10;
		sum+=remainder;
	}while (n>0);
	return sum;
}
int main ()
{
	int n, S;
	do{
		printf("Entered n: ");
		scanf("%d", &n);
		if (n>=0){
			S = sumDigits(n);
			printf("S = %d\n", S);
		}
	}while (n>=0);	
	
	return 0;
}
