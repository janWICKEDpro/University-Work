#include<stdio.h>

void selectionSort(int *arr, int i, int j){
    int max, int temp;
    for(int k = j; k<i; k--){
        max=i;
        for(int p=i; p<=k; p++){
            if(arr[p]>arr[max])max = p;
        }
        temp = arr[k];
        arr[k] = arr[max];
        arr[max] = temp;
    }

}

int main(){

    int arr[5] = {9,4,3,1,5};
    selectionSort(arr,0,4);
    for(int i=0; i<4; i++){
        printf("%d", arr[i]);
    }
}