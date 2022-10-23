#include<stdio.h>
#define MAX 100
void addValue (int a[], int n){
	int i;
	printf("Entered elements in array:\n");
	for (i = 0; i<n; i++){
		printf("Array[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("Done\n\n");
}

void searchValue(int a[], int n){
	int key,i,count = 0;
	if (n == 0){
		printf("No value");
	}
	else{
		printf("Entered the numbers you want to search: ");
		scanf("%d",&key);
		printf("The position of number you want to find is: ");
		for (i = 0; i<n;i++){
			if (key == a[i]){
				printf("%d ",i);
				count++;
			}	
		}
		if (count==0){
			printf("Don't have number you want to search in array");
		}
	}
	printf("\n\n");
}

void printArray (int a[], int n){
	int i;
	printf("\nAll values in array is:\n");
	for (i = 0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\nDone\n\n");
}

void rangeOfArray(int array[], int n){
	int i;
    if(n == 0){
        printf("\nNothing to printf!!");
        return;
    }
    int min, max;
    printf("\nEntered min: ");
    scanf("%d", &min);
    printf("\nEntered max: ");
    scanf("%d", &max);

    printf("\nAll value between min and max is:\n");
    for(i = 0; i < n; i++){
            if(array[i] >= min && array[i] <= max){
                    printf("%d ", array[i]);
            }
    }
    printf("\n\n");
}

void arrayAscend (int a[], int n){
	int i,j,t;
	if (n == 0){
		printf("Array do not exist-> can't' arrange");
	}
	else{
		for (i = 0; i<n; i++){
			for (j = i+1; j<n;j++){
				if (a[i]>a[j]){
					t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}
		}
		printf("The array after change to increase is:\n");
		for (i =0; i<n;i++){
			printf("%d ",a[i]);
		}
	}
	printf("\n\n");
}
int main ()
{
	int choice; 
	int a[MAX];
	int size;
	do{
		printf("1-Add a value\n");
		printf("2-Search a value\n");
		printf("3-Print out the array\n");
		printf("4-Print out values in a range\n");
		printf("5-Print out the array in ascending order\n");
		printf("6-Quit\n");
		printf("\nSelect your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Entered the size of array: ");
				scanf("%d",&size);
				addValue(a,size);
				break;
			case 2:
				searchValue(a,size);
				break;
			case 3:
				printArray(a,size);
				break;
			case 4:
				rangeOfArray(a,size);
				break;
			case 5:
				arrayAscend(a,size);
				break;
			default: 
				printf("Quit\n");
				break;
		}
	}while (choice>0&&choice<6);
	return 0;
}
