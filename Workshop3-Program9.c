//Workshop3-Program 9
#include<stdio.h>
#include<math.h>
int kiem_tra_UCLN(int a, int b)
{
	int USCLN;
	if (a==0||b==0){
		USCLN = a+b;
	}
	else (a!=0 && b!=0);{
		while (a!=b){
			if (a>b){
				a = a-b;
			}
			else {
				b = b-a;
			}
		}
	USCLN = b;
	}
	return USCLN;
}
		

int main()
{
	int a,b;
	printf("Entered a: ");
	scanf("%d", &a);
	printf("Entered b: ");
	scanf("%d", &b);
	
	int UCLN=kiem_tra_UCLN(a,b);
	printf("\nUCLN cua a,b: %d",UCLN);
	return 0;
}
