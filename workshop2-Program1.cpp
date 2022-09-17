// Work shop 2
#include<stdio.h>
#include<math.h>

int main ()
{
	double num1, num2, ketqua; 
	char pheptinh;
	scanf("%lf%s%lf",&num1,&pheptinh,&num2);
	
	
	switch (pheptinh)
	{
		case '+':
			ketqua = num1+num2;
			printf("%lf",ketqua);
			break;
		case '-':
			ketqua = num1-num2;
			printf("%.2lf",ketqua);
			break;
		case '*':
			ketqua = num1*num2;
			printf("%.2lf",ketqua);
			break;
		case '/':
			ketqua= num1/num2;
			if (num2 == 0){
				printf("Khong xac dinh");
			}
			else {
				printf("%.2lf",ketqua);
			}
			break;
		default:
			printf("Phep tinh khong dung");
			break;
	}
	return 0;
}
