// Bang cuu chuong 
#include<stdio.h>
#include<math.h>

int main ()
{
	int i,j;
	for (int i =1; i<=10; ++i){
		for (int j = 1; j<=10;++j){
			printf("%c %d x %2d = %3d", 179, j, i, i*j);
		}
		printf("%c\n",179);
	}
	return 0;
}
