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

```
### main function
```

```

## Results
### Input 1
![image](https://github.com/CYchang990148/hw3_quick_sort/assets/161935555/6c58ba1a-28b3-4780-adc9-482311099064)
### Input 2
![image](https://github.com/CYchang990148/hw3_quick_sort/assets/161935555/c6da1eb5-9e55-4051-89d7-9d3da05cc14a)