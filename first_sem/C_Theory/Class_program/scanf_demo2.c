#include <stdio.h>
int main (){
    int num1;
    float num2;
    double num3;
    double sum, difference, multiplication, division;
    printf("------- Welcome to the calculation program -------\n ");
    printf("Enter the first number (int)\n ");                                        //(int)
    scanf("%d", &num1);
    printf("Enter the second number (float)\n");                                       //(float)
    scanf("%f", &num2);
    printf("Enter the third number (double)\n");                                      //(double)
    scanf("%lf", &num3);
    sum = num1 + num3;
    printf("The sum of %d and %lf is %lf\n", num1, num3, sum);                        //(int+double)
    difference = num3 - num2;
    printf("The difference between %lf and %f is %lf\n", num3, num2,difference);       //(double-float)
    multiplication = num1 * num2;                                                       
    printf("The multiplication between %d and %f is %lf\n", num1, num2, multiplication); //(int*float)
    division = num3 / num1;
    printf("The division between %lf and %d is %lf\n", num3, num1, division);         //(float/int)
    return 0;
}