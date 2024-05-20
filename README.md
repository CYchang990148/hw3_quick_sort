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
+ The value at the memory location pointed to by pointer "a" is assigned the value at the memory location pointed to by pointer "b".
+ Finally, the value stored in the temporary variable temp (which is the original value of a) is assigned to the memory location pointed to by pointer "b".
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
+ Initialization
    1. Choose the first element as the pivot.
    2. Set left pointer to the element right after the pivot.
    3. Set right pointer to the end of the subarray.
+ Partitioning loop
    1. Increment left until an element greater than the pivot is found.
    2. Decrement right until an element less than the pivot is found.
    3. If left and right cross, break the loop.
    4. Otherwise, swap the elements at left and right.
+ Final swap
    1. Swap the pivot element with the element at the right pointer.
    2. Return the right pointer, which is now the pivot's final position.
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