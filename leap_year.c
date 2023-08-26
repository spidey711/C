#include <stdio.h>

int main(){

    int year;
    int run = 1;

    while (run == 1){

        printf("Enter year: ");
        scanf("%d", &year);

        if (year % 4 == 0){
            printf("%d is a leap year.", year);
        }
        else{
            printf("%d is not a leap year.", year);
        }

        run = 0;
        printf("\nDo you wish to continue? y(1)/n(0): ");
        scanf("%d", &run);
        if (run == 0){
            break;
        }
    }

    return 0;
}
