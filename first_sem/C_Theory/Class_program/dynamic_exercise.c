//write a c program to allocate 10 int type of dynamically malloc and calloc sum should be display every program line commented

#include <stdio.h>
#include <stdlib.h>

int main() {    
    int *p;        // declaring the integer pointer variable
    int sum = 0;   // declaring and intializing the variabie sum
    
    //allocating the memory dynamically for 10 integer using malloc
        p = (int *) malloc(10 * sizeof(int)); 

    // loop to assigning the  values
    for (int i = 0; i < 10; i++) {
        p[i] = i + 1;         // assigning the values to allocated memory
        sum += p[i];          // add each element to the sum
        printf("%d\n", p[i]); // display the value stored in each location
    }
    // display the total sum for malloc
    printf("Sum using malloc: %d\n", sum);

    //reset the sum to zero
    sum = 0;

    // allocating  memory dynamically for 10 integers using calloc
    p = (int *) calloc(10, sizeof(int));

    // loop to calculate sum
    for (int i = 0; i < 10; i++) {
        sum += p[i];          // add each element (initialized to 0) to the sum
        printf("%d\n", p[i]); // display the value stored in each location
    }
    // display the total sum for calloc
    printf("Sum using calloc: %d\n", sum);

    return 0;
}