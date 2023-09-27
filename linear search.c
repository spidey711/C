#include <stdio.h>

int main(){

    int element, arr[6] = {1, 2, 3, 4, 5, 6};

    printf("Enter element to be found: ");
    scanf("&d", &element);

    for (int i=0; i<6; i++){
        if (arr[i] == element){
            printf("FOUND IT!");
        }
        else {
            continue;
        }
    }

    return 0;
}
