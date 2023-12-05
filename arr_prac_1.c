#include <stdio.h>

// global vars
int i, j, count=0, size, temp;

// user-defined functions
int arraySum(int arr[size]){

    int sum=0;
    for (i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

void reverseArray(int arr[size]){

    printf("Reversed Array:-\n");
    for (i=size-1; i>=0; i--){
        printf("%d\n", arr[i]);
    }
}

void copyElements(int arr[size]){

    int copy[size];
    for (i=0; i<size; i++){
        copy[i] = arr[i];
    }
    for (i=0; i<size; i++){
        printf("%d\n", copy[i]);
    }
}

int countDuplicates(int arr[size]){

    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            if (arr[i] == arr[j]){
                count += 1;
            }
        }
    }
    return count;
}

int countUniques(int arr[size]){

    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            if (arr[i] != arr[j]){
                count += 1;
            }
        }
    }
    return count;
}

void mergeArray(int arr[size]){

    int size2;
    printf("Enter size of 2nd array:");
    scanf("%d", &size2);
    int arr2[size2], mergeArr[size+size2];

    printf("Enter elemts of 2nd array:\n");
    for (j=0; j<size2; j++){
        scanf("%d", &arr2[j]);
    }
    for (i=0; i<size; i++){
        mergeArr[i] = arr[i];
    }
    for (j=0; j<size2; j++){
        mergeArr[j] = arr2[j];
    }
    // sort array: descending
    descendArray(mergeArr[size + size2]);

    printf("\nMerged Descended Array:-\n");
    for (i=0; i<(size + size2); i++){
        printf("%d\n", mergeArr[i]);
    }
}

int elementFrequency(int arr[size]){

    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            if (arr[i] != arr[j]){
                printf("%d occurs 1 time.", arr[i]);
            }
            else {
                count += 1;
                printf("%d occurs %d times.", arr[i], count);
            }
        }
    }

}

void minmaxElement(int arr[size]){

    int largest=0, smallest=0;
    
    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            if (arr[i] > arr[j]){
                largest = arr[i];
            }
            else {
                smallest = arr[i];
            }
        }
    }
    printf("Largest:%d\tSmallest:%d", largest, smallest);
}

void oddevenArray(int arr[size]){
    
    int evenNums, oddNums;
    
    for (i=0; i<size; i++){
        if (arr[i] % 2 == 0){
            evenNums += 1;
        }
        else {
            oddNums += 1;
        }
    }
    
    int even[evenNums], odd[oddNums];
    for (i=0; i<evenNums; i++){
        if (arr[i] % 2 == 0){
            even[i] = arr[i];
        }
        else {
            odd[i] = arr[i];
        }
    }
    
    printf("Even Array:-\n");
    for (i=0; i<evenNums; i++){
        printf("%d\n", even[i]);
    }
    
    printf("\nOdd Array:-\n");
    for (i=0; i<odd; i++){
        printf("%d\n", odd[i]);
    }
}

void descendArray(int arr[size]){

    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            if (arr[i] < arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    printf("Descended Array:-\n");
    for (i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }
}

void ascendArray(int arr[size]){

    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("Ascended Array:-\n");
    for (i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }
}

void insertElement(int arr[size]){ // ordered array

    int new, pos;
    ascendArray(arr[size]);

    printf("Enter new element to be added:");
    scanf("%d", &new);
    // printf("Enter position of new element:");
    // scanf("%d", &pos);

    for (i=0; i<size; i++){
        if (new < arr[i]){
            pos = i;
            break;
        }
        else {
            pos = i + 1;
        }
    }
    // right shift
    for (i=size + 1; i>=pos; i--){
        arr[i] = arr[i - 1];
        arr[pos] = new; // insert value ;)
    }
    printf("Modified Array:-\n");
    for (i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }
}


// main 
int main(){

    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];

    return 0;
}
