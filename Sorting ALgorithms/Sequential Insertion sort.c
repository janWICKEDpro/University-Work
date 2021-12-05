#include<stdio.h>

void insertionSort(int *arr,int size){
	int k,x;
	for(int i=1; i<size; i++){
		k= i-1;
		x=arr[i];
		while(arr[k]>x && k>-1){
			arr[k+1] = arr[k];
			k=k-1;
		}
		arr[k+1] = x;
   }
}

void print(int *arr, int size){
	for(int i=0; i<size; i++){
		printf("%3d",arr[i]);
	}
}

int main(void){
	int arr[10] = {4,2,1,4,2,5,6,8,9,8};
	insertionSort(arr,10);
	print(arr,10);
}
