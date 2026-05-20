#include <stdio.h>

void print_dummy(void); //function declaration
int squeared (int num);
int sum (int num1, int num2);

int main(void){
    int a = 2, b = 4, square_result = 0;

    print_dummy();
    square_result = squeared(a);
    printf("The square of %d is: %d", a, square_result);
    print_dummy();
    printf("The sum of the numbers %d and %d is: %d", a,b, sum(a,b));
    print_dummy();
}

void print_dummy(void){ //function definition
    printf("\n----------------------\n");
}

int squeared (int num){
    return num * num;
}

int sum(int num1, int num2){
    return num1 + num2;
}
