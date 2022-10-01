// Workshop3- Program 3
#include<stdio.h>
#include<math.h>

void viTriTuongDoi (double x, double y, int r){
	int Xo=0, Yo=0;
	double khoangCach;
	khoangCach = fabs(sqrt(pow((x-Xo),2)+pow((y-Yo),2)));
	printf("Khoang cach = %.2lf\n", khoangCach);
	if (khoangCach<r){
		printf("Diem nam trong duong tron\n");
	}
	else if (khoangCach==r){
		printf("Diem nam tren duong tron\n");
	}
	else{
		printf("Diem nam ngoai duong tron\n");
	}
}

int main()
{
	double x,y;
	printf("Entered x,y: ");
	scanf("%lf %lf", &x, &y);
	
	printf("Duong tron tam O ban kinh r\n");
	int r; 
	printf("Entered r: ");
	scanf("%d", &r);
	
	viTriTuongDoi(x,y,r);
	return 0;
}
