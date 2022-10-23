// Workshop4- Program 3
#include<stdio.h>

void fibonacciSequence (int n){
	int t1 = 1, t2 = 1, t;
	printf("the first %d Fibonacci numbers:\n",n);
	printf("%d ", t1);
	printf("%d ", t2);
	int i;
	for (i = 3; i<=n; i++){
		t =t1+t2;
		t1=t2;
		t2 = t;
		printf("%d ", t);
	}
	printf("\n\n");
}

int validDate(int d, int m, int y){
	int maxd = 31;
	if (d<1||d>31||m<1||m>12)
		return 0;
	if (m==4||m==6||m==9||m==11){
		maxd =30;
	}
	else if (m ==2){
		if ( y%400==0 ||  y%4==0 && y%100!=0 ) 
		maxd=29;
		else 
		maxd=28;
	}
	return d<=maxd;
}


int main()
{
	int n, choice;
	int d,m,y;
	do{
		printf("1-Fibonacci sequence\n");
		printf("2-Check a date\n");
		printf("3-Quit\n\n");
		printf("Select your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: 
				do{
					printf("Entered n: ");
					scanf("%d", &n);	
				}while (n<1);
				fibonacciSequence(n);
				break;
			case 2:
				printf("Entered day: ");
				scanf("%d", &d);
				printf("Entered month: ");
				scanf("%d", &m);
				printf("Entered year: ");
				scanf("%d", &y);
				
				if (validDate(d, m, y)==1){
					printf ("The date of %d/%d/%d is a valid date!\n\n", d, m ,y);
				}
				else{
					printf("The date of %d/%d/%d is not a valid date!\n\n", d, m ,y);
				}
				break;
		}
	}while (choice >0 && choice <3);
	return 0;
}
