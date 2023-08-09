#include <stdio.h>

int main(){

    // finalAmount = initPrincipleBal(1 + (annualInterestRate*Time))
    int p, r, t, si;
    
    printf("Enter initial principle balance: ");
    scanf("%d", &p);
    
    printf("Enter annual interest rate: ");
    scanf("%d", &r);
    
    printf("Enter time (in years): ");
    scanf("%d", &t);

    si = p * (1 + (r * t));
    printf("Simple interest: %d", si);
}