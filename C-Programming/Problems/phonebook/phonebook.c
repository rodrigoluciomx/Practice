#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *file = fopen("phonebook.csv","a");

    char *name = malloc(7);
    char *number;
    printf("Enter your name: ");
    scanf("%s\n",name);
    printf("\n Name scanned...\n\n");

    printf("--- Scanning the number ---\n");
    printf("Enter your number: ");
    scanf("%s\n",number);
    printf("\n Name scanned...\n\n");

    free(name);
    
}