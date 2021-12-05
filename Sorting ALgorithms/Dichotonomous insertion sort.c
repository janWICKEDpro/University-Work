#include<stdio.h>

int binarySearch(int a[], int item,int low, int high){
    if (high <= low)
        return (item > a[low]) ?
                (low + 1) : low;
 
    int mid = (low + high) / 2;
 
    if (item == a[mid])
        return mid + 1;
 
    if (item > a[mid])
        return binarySearch(a, item,
                            mid + 1, high);
    return binarySearch(a, item, low,
                        mid - 1);
}
 

void insertionSort(int a[], int n)
{
    int i, loc, j, k, selected;
 
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        selected = a[i];
 
       
        loc = binarySearch(a, selected, 0, j);
 
        while (j >= loc)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}

void print(int *arr, int size){
	for(int i=0; i<size; i++){
		printf("%3d",arr[i]);
	}
}

int main(){
int arr[10] = {4,2,0,4,2,5,6,8,9,8};
insertionSort(arr,10);
print(arr,10);
}
