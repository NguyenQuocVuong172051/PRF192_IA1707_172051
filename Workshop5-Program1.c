// Dice Throws- Nem xuc xac 
#include<stdio.h>
#include<stdlib.h>

int intRandom (int min, int max){
	int random = 0;
	random = (rand()%(max-min+2)+1);
	return random;
}
int main ()
{
	int total,x,y,count;
	int i;
	printf("Dice Thrower");
	printf("\n");
	for (i = 0;i<12;i++){
		printf("=");
	}
	printf("\n");
	do{
		printf("Total sought: ");
		scanf("%d", &total);
	}while(total<2||total>12);
	
	count = 0;
	do{
		x = intRandom(2,6);
		y = intRandom(2,6);
		count++;
		printf("Result of throw %d: %d + %d\n",count, x,y);
	}while (x+y!=total);
	if (x+y==total){
		printf("You got your total in %d throws!\n",count);
	}
	return 0;
}

