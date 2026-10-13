//Get the sum of array element with array size N using Recursion function
#include <stdio.h>

// Recursive function to find the sum of array elements
int get_array_sum(int number[], int size) {
    // Base case: if size is 0, return 0
    if (size == 0) {
        return 0;
    }
    
    // Recursive step: add the last element to the sum of the rest
    return number[size - 1] + get_array_sum(number, size - 1);
}

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int mynumber[n];
    
    // Loop to read array elements from the user
    for (int i = 0; i < n; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &mynumber[i]);
    }
    
    // Call the recursive function and print the result
    printf("The sum is %d\n", get_array_sum(mynumber, n));
    
    return 0;
}