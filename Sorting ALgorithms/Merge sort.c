#include<stdio.h>
#include<stdlib.h>
void merge(int *arr, int i1, int j1, int i2, int j2){
	int *v;
	v = (int *)malloc(sizeof(int)*(j2));
	int i,j,k;
	i= i1;
	j=i2;
	k=0;
	while(i<=j1 && j<= j2){
		if(arr[i]<arr[j])v[k++]=arr[i++];
		else v[k++]=arr[j++];

	}
	while(i<=j1)v[k++] = arr[i++];
	while(j<=j2)v[k++] = arr[j++];
	for(i =i1, j=0; i<=j2; i++, j++){
		arr[i] = v[j];
	}
	
}

void mergeSort(int *arr, int i, int j){
	int mid;
	if(i<j){
		mid= (i+j)/2;
		mergeSort(arr,i,mid);
		mergeSort(arr, mid+1, j);
		merge(arr,i,mid,mid+1,j);
	}
}


void print(int *arr, int size){
	for(int i=0; i<size; i++){
		printf("%3d",arr[i]);
	}
}

int main(void){
int arr[10] = {4,2,1,4,2,5,6,8,9,8};
mergeSort(arr,0,9);
	print(arr,10);

}
