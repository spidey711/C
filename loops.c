#include <stdio.h>

int main(){

    int i;
    int j;

    // loop
    for (i = 0; i < 100; i+=3){
        printf("%d\n", i);
    }

    // nested loop
    for (i = 1; i <= 2; i++){
        printf("Outer: %d", i);

        for (j = 1; j <= 3; j++){
            printf("\n  Inner: %d", j);
        }
    }
    
    // while loop
}