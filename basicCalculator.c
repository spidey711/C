#include <stdio.h>

int main(){

    
    int num1, num2, res, op;
    printf("Choose operation:-\n1. Add\n2. Subtract\n3. Multiply\n4. Dividen\n5.Remainder\nChoose option: \n");
    scanf("%d", &op);

    if (op > 5){
        printf("Please enter valid option.\n");
    }

    else {
        printf("Enter number 1: \n");
        scanf("%d", &num1);
        printf("Enter number 2: \n");
        scanf("%d", &num2);

        if (op == 1){
            res = num1 + num2;
            printf("%d", res);
        }

        else if (op == 2){
            res = num1 - num2;
            printf("%d", res);

        }

        else if (op == 3){
            res = num1 * num2;
            printf("%d", res);
        }

        else if (op == 4){
            float res = num1 / num2;
            printf("%d", res);
        }
        
        else if (op == 5){
            res = num1 % num2;
            printf("%d", res);
        }
    }

}