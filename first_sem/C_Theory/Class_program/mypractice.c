#include<stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    int smallest;
    int largest;
    int choice;
    printf("1.Smallest of 3 numbers\n");
    printf("2.Largest of 3 numbers\n");
    printf("3.Check a number for Odd/Even\n");
    printf("4.Check for divisible by 5\n");
    printf("5.Swap 2 numbers\n");
    printf("Enter your option:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter the first number:");
        scanf("%d",&num1);
        printf("Enter the second number:");
        scanf("%d",&num2);
        printf("Enter the third number: ");
        scanf("%d",&num3);
        if(num1<num2){
            smallest = num1;
        }else{
            smallest = num2;
        }
        if(num3<smallest){
            smallest = num3;
        }
        printf("smallest of 3 numbers is: %d",smallest);
        break ;
        case 2:
        printf("Enter the first number:");
        scanf("%d",&num1);
        printf("Enter the second number:");
        scanf("%d",&num2);
        printf("Enter the third number: ");
        scanf("%d",&num3);
        if(num1>num2){
            largest = num1;
        }else{
            largest = num2;
        }
        if(num3>largest){
            largest = num3;
        }
        printf("Largest of 3 numbers is:%d",largest);
        break ;
        case 3:
        printf("Enter the number:");
        scanf("%d",&num1);
        if(num1 % 2 == 0){
            printf("The number is even",num1);
        }else{
            printf("The number is odd",num1);
        }
        break ;
        case 4:
        printf("Enter the number:");
        scanf("%d",&num1);
        if(num1 % 5 ==0){
            printf("The number is divisible by 5",num1);
        }else{
            printf("The number is not divisible by 5",num1);
        }
        break ;
        case 5:
        printf("Enter firstnumber:");
        scanf("%d",&num1);
        printf("Enter secondnumber:");
        scanf("%d",&num2);
        num1 = num1 +num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
        
        printf("The two number after swapping :%d and %d\n",num1,num2);
        break;
        default:
        printf("Invalid option........\n");
        
    }
    return 0;
}