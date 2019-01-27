#include <stdio.h>
#include <time.h>


void fillArray(int* arr, int len) {
	int i=0;
	for (i=0; i<len;i++){
		arr[i]=rand()%1000;
	}
}

void printArray (int* arr, int len) {
	int i;
	for (i=0;i<len;i++) {
		printf("%d \n", arr[i]);
	}
	printf("\n");
}

void swap (int* a, int* b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;	
}

void bubbleSort (int* arr, int len) {
	int i;
	int j;
	int count=0;
	int flag=0;		// 0 - false , 1 - true
	for (i=0; i < len; i++) {
		count++;
		flag=1;
		for (j=0; j<len;j++) {
			count++;
			if (arr[j]>arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
				flag=0;
			}
		}	
	if (flag==1)
	break;	
	}
printf("COUNTER= %d \n", count);	
}	


void ShakerSort (int* arr, int len) {
int i;
int count=0;
int left =0;
int right = len-1;
while (left < right) {
	for ( i = left; i < right; i++) {
		count++;
		if (arr[i] > arr[i+1]) 
		swap(&arr[i], &arr[i+1]);
	}
	right--;
	for (i = right; i > left; i--) {
		count++;
		if (arr[i-1] > arr[i])
		swap(&arr[i-1], &arr[i]);
	}
	left++;
 }
printf("COUNTER= %d \n", count);
}

int binarySearch (int* arr, int len, int index) {
	int i;
	int count;
	int left=0;
	int right=len;
	int middle=len;
	while (right>left) {
		middle/=2;
		if (index==arr[middle]) {
			return middle;
		}
		else if (index<arr[middle]) {
			left=middle-1;
		}
		else if (index>arr[middle]) {
			right=middle+1;
		}
		else return -1;
	}
}


int main (int argc, const char** argv) {
	clock_t start = clock();
	const int SIZE = 25;
	int arr[SIZE];
	fillArray(arr, SIZE);
	printArray(arr, SIZE);
	bubbleSort(arr, SIZE);
	printf("\n Bubble sort \n");
	printArray(arr, SIZE);
	ShakerSort(arr, SIZE);
	printf("\n Shaker sort \n");
	printArray(arr, SIZE);
	printf("\n Index = %d", binarySearch(arr, SIZE, 281));
	clock_t stop = clock();
    double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("\n Time elapsed in ms: %f", elapsed);

	return 0;
}


