#include<stdio.h>
//read array SIZE from KB 
#include <stdio.h>

// Read array size from keyboard
int read_array_size() {
    int size;
    printf("Enter the size of the array [>4]: ");
    scanf("%d", &size);
    return size;
}

// Validate that size is greater than 4 (allowing 5, 6, etc.)
int validate_array_size(int array_size) {
    if (array_size >4) {
        return 1;
    }
    return 0;
}

int main() {
    int arraySize;
    int isValid = 1;
    
    // Loop until a valid array size is entered
    while (isValid == 1) {
        arraySize = read_array_size();
        int validated = validate_array_size(arraySize);
        if (validated == 1) {
            break;
        }
        printf("Array size is not valid... Please try again\n");
    }
    
    int myarray[arraySize];
    int sum = 0;
    
    // Loop to read array elements and add them to sum
    for (int i = 0; i < arraySize; i++) {
        printf("Enter %d the element: ", i + 1);
        scanf("%d", &myarray[i]);
        sum += myarray[i];
    }
    
    // Print the final sum outside the loop with the correct format specifier
    printf("Sum: %d\n", sum);
    
    return 0;
}