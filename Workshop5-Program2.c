// Ball Lottery 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int intRandom (int min, int max){
	int random = 0;
	random = (rand()%(max-min+1)+1);
	return random;
}
int main ()
{
	int total,x,y,count;
	int i;
	printf("Ball Lottery");
	printf("\n");
	for (i = 0;i<12;i++){
		printf("=");
	}
	printf("\n");
	do{
		printf("Total sought: ");
		scanf("%d", &total);
	}while(total<2||total>20);
	count = -1;
	do{
		count+=2;
		x = intRandom(1,10);
		y = intRandom(1,10);
		printf("Result of %d picks and %d: %d + %d\n",count,count+1, x,y);
	}while (x+y!=total);
	if (x+y==total){
		printf("You got your total in %d picks!\n",count+1);
	}
	return 0;
}

