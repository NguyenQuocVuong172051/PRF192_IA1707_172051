// Workshop2-program 4:
#include<stdio.h>
#include<math.h>

int main()
{
	int x,y; 
	do {
		printf("entered x: ");
		scanf("%d", &x);
		printf("entered y: ");
		scanf("%d", &y);
		
		int c = x;
		x=y;
		y=c;
		printf("x after swap: %d\n", x);
		printf("y after swap: %d\n\n", y);
	}while (x!=0 && y!= 0);
	return 0;
}
