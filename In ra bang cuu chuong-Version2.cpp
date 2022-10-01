// Bang cuu chuong version 2
#include<stdio.h>
#include<math.h>

void top()
{
	printf("%c",218);
	for (int i=0; i<=10; i++)
	printf("%c",196);
	printf("%c",194);
	for (int i=0; i<=10; i++)
	printf("%c",196);
	printf("%c", 194);
	for (int i =0; i<=10;i++)
	printf("%c",196);
	printf("%c",191);
	printf("\n");
}

void mid()
{
	printf("%c", 195);
	for (int i = 0; i<=10;i++)
	printf("%c",196);
	printf("%c",197);
	for (int i = 0; i<=10;i++)
	printf("%c",196);
	printf("%c",197);
	for (int i = 0; i<=10;i++)
	printf("%c",196);
	printf("%c",180);
	printf("\n");
}

void bottom()
{
	printf("%c", 192);
	for (int i=0; i<=10; i++)
	printf("%c",196);
	printf("%c",193);
	for (int i=0; i<=10; i++)
	printf("%c",196);
	printf("%c",193);
	for (int i=0; i<=10; i++)
	printf("%c",196);
	printf("%c",217);
}

int main ()
{
	printf("=====**   BANG CUU CHUONG   **====\n\n");
	int i,j;
	top();
	
	for (i =1; i<=9; i++){
		for (j = 1; j<4; j++){
			printf("%c %d x %d = %2d",179,j,i,i*j);
		}
		printf("%c",179);
		printf("\n");
	} 
	mid();
	for (i =1; i<=9; i++){
		for (j = 4; j<7; j++){
			printf("%c %d x %d = %2d",179,j,i,i*j);
		}
		printf("%c",179);
		printf("\n");
	} 
	mid();
	for (i =1; i<=9; i++){
		for (j = 7; j<10; j++){
			printf("%c %d x %d = %2d",179,j,i,i*j);
		}
		printf("%c",179);
		printf("\n");
	}
	bottom();
	return 0;
}
