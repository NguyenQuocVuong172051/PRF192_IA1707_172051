// Workshop3 -Program 1
#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int m = sqrt(n);
	int i; 
	if (n <2)
		return 0;
	for (i =2; i<=m; i++)
		if(n%i==0)
			return 0;
	return 1;
}

int main(){
	int n;
	printf("Entered n: ");
	scanf("%d", &n);
	
	printf("cac so nguyen to tu 2 den n la:\n");
	int i;
	for (i =2; i<=n; i++){
		if (prime(i)){
			printf("%d ",i);
		}
	}
	return 0;
}

