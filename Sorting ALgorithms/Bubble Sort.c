#include<stdio.h>

void bubbleSort(int *arr,int size){
int i, j, temp;
	i=size-1;
	while(i>0){
		for(j = 1; j<=i; j++){
			if(arr[j]<arr[j-1]){
				temp = arr[j];
				arr[j]= arr[j-1];
				arr[j-1] = temp;
			}
		}
		i--;
	}
}	

void print(int *arr,int size){
	for(int i=0; i<size; i++){
		printf("%2d",arr[i]);
	}
	
}
int main(void){

	int arr[10]= {2,1,3,4,6,3,7,8,11,9};
	bubbleSort(arr,10);

}
