#include <stdio.h>

int main(void){
    int a = 99;
    int *b = &a;
    
    printf("%d",&a);

    // &(*(&(*(b))))
    //99
    printf("\n%d\n",*(b));
    printf("\n%d\n", &((*b)));
    
}