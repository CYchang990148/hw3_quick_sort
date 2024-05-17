#include <stdio.h>
 
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int partition(int array[], int start, int end){
    int pivot = array[start];
    int left = start + 1;
    int right = end;
 
    while(1){
        while(left <= right && array[left] <= pivot){
        	left++;
        }
        while(array[right] >= pivot && right >= left){
        	right--;
        }
        if(right < left){
        	break;
        }
        else{
        	swap(&array[left], &array[right]);
        }
    }
    swap(&array[start], &array[right]);
    return right;
}
 
void quicksort(int array[], int start, int end){
    if(start < end){
        int pivot = partition(array, start, end);
        quicksort(array, start, pivot - 1);
        quicksort(array, pivot + 1, end);
    }
}
 
void print(int sorted_array[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", sorted_array[i]);
    }
}
 
int main(void){
    int n = 0, num;
    int array[100];
    while(scanf("%d", &num) == 1){
        array[n++] = num;
    }
 
    quicksort(array, 0, n - 1);
    print(array, n);
    return 0;
}
 