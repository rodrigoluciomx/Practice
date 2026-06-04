#include <stdio.h>

void addmul(int *p, int *q, int *r, int *s);

int main(void){
    int a, b, c, d;
    a = 100;
    b = 10;

    addmul(&a, &b, &c, &d);

    printf("\nThe multiplication of %d and %d = %d\n");
    printf("\nThe division of %d and %d = %d\n");
}

// p = &a
// q = &b
// r = &c
// s = &d

void addmul(int *p, int *q, int *r, int *s){
    *r = *p * *q; // c = a * b
    *s = *p / *q; // d = a / b
    // not returning anything directly
    // but modifying the values, by placing in pointers
}