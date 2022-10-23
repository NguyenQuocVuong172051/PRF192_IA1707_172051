#include<stdio.h>
#include<stdlib.h>
int validDate (int d, int m, int y){
	int maxd=31;
	if(d <1 || d>31 || m<1 || m >12) 
		return 0 ;
	if( m ==4 || m == 6 || m ==9 || m == 11) 
		maxd = 30;
	else if(m==2){
		if ( y%400==0 || y%4==0 && y%100!=0 ) 
			maxd=29;
		else 
			maxd=28;
	}
	return d<=maxd;
}

void printAscii(char c1 , char c2){ 
	char c;
  	if (c1 > c2){ 
	  c=c1 ; c1=c2 ;c2=c ;
  	}
  	for ( c=c1 ; c<= c2; c++)
  	printf("%c: %3d, %3Xh\n",c,c,c);
}
int main ()
{
	int choice;
	int d,m,y;
	char c1,c2;
	do{
		
  		printf("1- Processing date data");
  		printf("\n2- Character data");
  		printf("\n3- Quit");
  		printf("\nSelect your choice: ");
  		scanf("%d%*c",&choice);
  		
  		switch (choice){
  			case 1: 
				printf("Enter the day: " ); 
				scanf("%d", &d);
  				printf("Enter the month:"); 
				scanf("%d", &m);
  				printf("Enter the year: "); 
				scanf("%d", &y);
  				if (validDate(d, m, y)==1) {
				printf ("\nThe date of %d/%d/%d is a valid date!\n\n", d, m ,y);
				}
				else{
				printf("\nThe date of %d/%d/%d is not a valid date!\n\n", d, m ,y);
				}
				break;
			case 2:
  				printf("Enter 2 characters: ");
  				scanf("%c%c",&c1, &c2);
  				printAscii(c1,c2);
  				printf("\n\n");
  				break;
  			default:
  				printf("Quit\n");
		}
	}while (choice> 0 && choice < 3);
	return 0;
}
