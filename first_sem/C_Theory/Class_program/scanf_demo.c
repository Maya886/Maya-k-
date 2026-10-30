// to demo scanf()
#include<stdio.h>
int main(){
    int num1, num2 ,  sum ,difference,multiplication,division;
 printf("----- Welcome to the addition program -----\n"); //welcome message
    printf("Enter the first number\n");                   // ask user for first number 
    scanf("%d", &num1);                                   // reads first number from user
    printf("Enter the second number\n");                  // ask user for second number
    scanf("%d", &num2);                                   // reads second number from user 
    sum = num1 + num2;                                    // performs addition and result is stored in 'sum'
    printf("The sum %d and %d is %d\n", num1, num2, sum);
    difference  = num2 - num1;
    printf(" The difference between %d and %d is %d\n", num1, num2 , difference);
    multiplication = num1 * num2;
    printf("The multiplication between %d and %d is %d\n", num1, num2,multiplication);
    division = num2 / num1 ;
    printf("The division between %d and %d is %d\n", num1, num2, division);
    return 0;                                             
}