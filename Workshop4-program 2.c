// Workshop4 - Program 2
#include<stdio.h>

int processPrimes (int n){
	int i; 
	if (n<=1)
		return 0;
	for (i = 2; i<=n; i++){
		if (n%2==0)
		return 0;
	}
	return 1;
}

void minMaxDigits (int n){
	int digit; 
	int min, max;
	digit = n%10;
	n = n/10;
	min = max =digit;
	while (n>0){
		digit = n%10;
		n = n/10;
		if (min > digit)
			min = digit;
		if (max < digit)
			max = digit;
	}
	printf("Min digit is: %d\n", min);
	printf("Max digit is: %d\n\n", max);
}
int main ()
{
	int n, choice;
		
	do{
		printf("1- Process Primes\n");
		printf("2- print min, max digit in an integer\n");
		printf("3- Quit\n");
		printf("\nSelect your choice: ");
		scanf("%d", &choice);
		
		switch (choice){
			case 1:
				do{
				printf("\nEntered n: ");
				scanf("%d", &n);
				}while (n<0);
				if (processPrimes(n)==1){
					printf("It is a prime\n\n");
				} 
				else{
					printf("It's not a prime\n\n");
				}
				break;
			case 2:
				do{
					printf("Entered n: ");
					scanf("%d", &n);
				}while (n<0);
				minMaxDigits(n);
				break;
			default: 
				printf("Quit\n");
				break;	
		}
	}while (choice >0 && choice <3);
	return 0;
}
