// Workshop3- Program 6
#include<stdio.h>

int isFibonacci (int n)
{
	int t1=1, t2=1, f=1;
	if (n==1)
		return 0;
	while (f<n){
		f=t1+t2;
		t1=t2;
		t2=f;
	}
	if (n==f)
		return 1;
	
}
int main()
{
	int n; 
	do {
		printf("Entered n: ");
		scanf("%d", &n);
	}while (n<1);
	
	if (isFibonacci(n)==1){
		printf("It is a Fibonacci element.\n");
	}
	else{
		printf("It is not a Fibonacci element.\n");
	} 
	return 0;
}
