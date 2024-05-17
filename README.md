# hw3_quick_sort
## About the Program
### swap function 
```
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
```
+ Initialize a temporary variable "temp" with the value stored at the memory location to which pointer "a" points.
+ The value at the memory location pointed to by pointer "a" is assigned the value at the memory location pointed to by pointer b).
### partition function 
```
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
```
### quicksort function 
```
void quicksort(int array[], int start, int end){
    if(start < end){
        int pivot = partition(array, start, end);
        quicksort(array, start, pivot - 1);
        quicksort(array, pivot + 1, end);
    }
}
```
### print function
```
void print(int sorted_array[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", sorted_array[i]);
    }
}
```
### main function
```
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
```

## Results
### Input 1
![image](https://github.com/CYchang990148/hw3_quick_sort/assets/161935555/6c58ba1a-28b3-4780-adc9-482311099064)
### Input 2
![image](https://github.com/CYchang990148/hw3_quick_sort/assets/161935555/c6da1eb5-9e55-4051-89d7-9d3da05cc14a)