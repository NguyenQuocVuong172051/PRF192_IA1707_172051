// Workshop2-Program 7
#include<stdio.h>
int main ()
{
	char c1, c2;
	printf("Entered 2 character: ");
	scanf("%c%c", &c1, &c2);
	
	int d,t; 
	if (c1>c2){
		t=c1; // Variable t for swapping 
		c1=c2;
		c2=t;
	}
	d = c2-c1; // Variable d showing difference 
	printf("Value of d: %d\n", d);
	char c;
	for (c=c1;c<=c2;c++){
		printf("%c-%d, %o, %X\n",c,c,c,c);
	}
	
	return 0;
}
