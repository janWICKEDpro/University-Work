#include<stdio.h>

int segmentation(int *v, int i, int j){
	int p, q;
	int val, per;
	p=i;
	q=j;
	val = v[i];
	while(p<q){
	while(v[p]<=val && p<j)p++;
	while(v[q]>val)q--;

	if(p<q){
		per = v[p];
		v[p]= v[q];
		v[q] = per;
	}
	}
	return q;
}

void Sort_seg(int *arr, int i, int j){
	int m,temp;
	if(i<j){
		m = segmentation(arr,i,j);
		temp = arr[i];
		arr[i]=arr[m];
		arr[m]=temp;
		Sort_seg(arr,i,m-1);
		Sort_seg(arr,m+1,j);
	}
	return;
}
void print(int *arr, int size){

	for(int i=0; i<size; i++){
		printf("%3d",arr[i]);
	}
}


int main(){
 int arr[10] = {4,2,1,4,2,5,6,8,9,8};
	Sort_seg(arr,0,9);
	print(arr,10);

}
