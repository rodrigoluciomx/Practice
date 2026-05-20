#include <stdio.h>

int get_largest(unsigned int *nums);
int get_smallest(unsigned int *nums);

int main (void){
    unsigned int nums[6] = {0,0,0,0,0,0};
    unsigned int *p = nums;
    int largest, smallest;

    printf("Please, enter 6 numbers:\n\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &nums[i]);
    }

    largest = get_largest(p);
    smallest = get_smallest(p);

    printf("\n\nCalculating...\n");
    printf("\nThe  largest number is %d\n",largest);
    printf("The smallest number is: %d\n\n", smallest);

}

int get_largest(unsigned int *nums){
    int temp_largest = nums[0];
    for (int j = 0; j < 6 ; j++){
        if(nums[j] > temp_largest){
            temp_largest = nums[j];
        } else {
            continue;
        }
    }
    return temp_largest;
}

int get_smallest(unsigned int *nums){
    int temp_small = nums[0];
    for (int j = 0; j < 6 ; j++){
        if(nums[j] < temp_small){
            temp_small = nums[j];
        } else {
            continue;
        }
    }
    return temp_small;
}
