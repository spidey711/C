#include <stdio.h>

int main(){

    int i, j, temp, n;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter number of elements:\n");
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (i=0; i<n-1; i++){
        for (j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nBubble Sorted Array\n");
    for (i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
