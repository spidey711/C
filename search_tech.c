#include <stdio.h>
#include <stdlib.h>

// GLOBALS
int run=1, i, j, num, item, choice;

// FUNCTIONS
int linearSearch(int arr[], int item){

    for (i=0; i<num; i++){
        if (arr[i] == item){
            return i;
        }
    }
    return -1;
}


int binarySearch(int arr[], int item){
    // sort
    int min, temp, mid, start=0, stop=num;
    for (i=0; i<num; i++){
        for (j=0; j<num; j++){
            if (arr[i] > arr[j]){ 
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    // search begins...
    while (start <= stop){
        mid = (start + stop)/2;
        if (item == arr[mid]){
            return mid;
        }
        else if (item > arr[mid]){
            start = mid;
            // stop = stop;
        }
        else {
            stop = mid;
            // start = start;
        }
    }
    return -1;
}


// DRIVER CODE
int main(){

    printf("Enter number of elements in array: ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter elements of array:\n");
    for (i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    printf("\n\nMENU\n1. Linear Search\n2. Binary Search\n3. Exit\n");
    while (run == 1){
        scanf("%d", &choice);

        printf("Enter item to be found: ");
        scanf("%d", &item);

        if (choice == 1){
            if (linearSearch(arr, item) != -1){
                printf("%d found! Position: %d", item, linearSearch(arr, item));
            }
            else {
                printf("%d not found :/", item);
            }

        }
        else if (choice == 2){
            if (binarySearch(arr, item) != -1){
                printf("%d found! Position: %d", item, binarySearch(arr, item));
            }
            else {
                printf("%d not found :/", item);
            }
        }
        else if (choice == 3){
            abort();
        }
        else {
            printf("Please enter a valid choice.\n");
        }

        printf("\nDo you wish to continue? YES[1] NO[0]: ");
        scanf("%d", &run);
        if (run == 0){
            break;
        }
    }


    return 0;
}
