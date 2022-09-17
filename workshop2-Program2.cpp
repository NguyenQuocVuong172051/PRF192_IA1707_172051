// Workshop 2 - Program 2
#include<stdio.h>
#include<math.h>

int main ()
{
	int income,n;
	printf("Your income this year: ");
	scanf("%d", &income); 
	printf("Entered dependents: ");
	scanf("%d", &n);
	
	int pa, pd, tf;
	pa = 9000000;
	pd = 3600000;
	tf = 12*(pa+n*pd);
	printf("Tax free income: %d\n", tf);
	
	int ti;
	ti = income - tf;
	if (ti<0){
		printf("tax income: 0\n");
	}
	else {
		printf("tax income: %d\n", ti);
	}
	
	int incometax;
	if (ti <= 5000000){
		incometax = ti*0.05;
		printf("Income tax: %d",incometax);
	}
	else if (ti> 5000001 && ti <=10000000){
		incometax = ti*0.1;
		printf("Income tax: %d",incometax);
	}
	else if (ti> 10000001 && ti <18000000){
		incometax = ti*0.15;
		printf("Income tax: %d",incometax);
	}
	else {
		incometax = ti*0.2;
		printf("Income tax: %d",incometax);
	}
	return 0;
}
