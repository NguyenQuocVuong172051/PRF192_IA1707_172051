// Workshop5-Program 4
#include<stdio.h>
#include<math.h>
void quadraticEquation (double a, double b, double c){
	double x;
	if (a==0){
		x = -c/b;
		printf("Solution of %.2lfx^2 + %.2lfx+%.2lf: x = %.2lf",a,b,c,x);
	}
	else if (a!=0){
		double delta;
		double x1,x2;
		delta = b*b - 4*a*c;
		if (delta > 0){
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("\nEquation have 2 solutions: x1 = %.2lf, x2 = %.2lf\n\n",x1,x2);
		}
		else if (delta == 0){
			x1 = -b/(2*a);
			printf("\nEquation have unique solution: x = %.2lf\n\n",x1);
		}
		else{
			printf("\nEquation have no solution!\n\n");
		}
	}
}

double amount (double d, double r, double n){
	int P;
	P = d*pow((1+r),n);
	return P;
}
int main ()
{
	int choice;
	int a,b,c;
	double d,r,n; 
	do{
		printf("1- Quadratic equation\n");
		printf("2- Bank deposit problem\n");
		printf("3- Quit\n");
		printf("\nSelect your choice: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1: 
				printf("Entered coefficients of Quadratic equation:");
				scanf("%d%d%d",&a,&b,&c);
				quadraticEquation(a,b,c);
				break;
			case 2:
				do{
					printf("Entered deposit: ");
					scanf("%lf",&d);
				}while (d<0);
				do{
					printf("Entered yearly rate [0.0-1.0]:");
					scanf("%lf",&r);
				}while (r<0.0||r>1.0);
				do{
					printf("Entered number of year:");
					scanf("%lf",&n);
				}while (n<0);
				
				printf("Amount at the %.lf(th) year = %.2lf\n\n",n,amount(d,r,n));
				break;
			default:
				printf("\nQuit\n");
		}
	}while(choice>0&&choice<3);
	return 0;
}
