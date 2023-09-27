#include <stdio.h>

int bubbleSort(arrSize){
    
    int i, j, temp;

    int arr[arrSize];

    printf("Enter number of elements:\n");
    for (i=0; i<arrSize; i++){
        scanf("%d", &arr[i]);
    }

    for (i=0; i<arrSize-1; i++){
        for (j=0; j<arrSize-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nBubble Sorted Array\n");
    for (i=0; i<arrSize; i++){
        printf("%d\n", arr[i]);
    }

}

int main(){

    int arrSize, run = 1;

    while (run == 1){ 

        printf("Enter number of elements:\n");
        scanf("%d", &arrSize);
        
        bubbleSort(arrSize);
        
        run = 0;
        printf("\nDo you wish to continue? y(1)/n(0): ");
        scanf("%d", &run);
        if (run == 0){
            break;
        }
    }

    return 0;
}
