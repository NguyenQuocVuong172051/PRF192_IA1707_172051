// Workshop3-Program 4
#include<stdio.h>

int tinhGiaiThua (int n)
{
	int giaiThua = 1;
	int i;
	for (i =1; i<=n; i++){
		giaiThua = giaiThua*i;
	}
	return giaiThua;	
}
int main ()
{
	int n; 
	printf("Entered n: ");
	scanf("%d", &n);
	
	int giaiThua = tinhGiaiThua(n);
	printf("Ket qua cua %d! = %d", n, giaiThua);
	return 0; 	
}
