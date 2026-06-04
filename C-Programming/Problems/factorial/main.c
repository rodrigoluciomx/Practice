#include <stdio.h>

int factorial (int num);

int main (void){
    int a = 0, result = 0;
    printf("\nEnter a number for factorial calculations\n");

    scanf("%d", &a);
    printf("\nCalculating factorial...\n");
    result = factorial(a);
    printf("\nFactorial of %d is: %d\n\n", a, result);
}

int factorial (int num){
    int temp_factorial = 1;
    for(int i = 1; i <= num; i++){
        temp_factorial *= i;
    }

    return temp_factorial;
}