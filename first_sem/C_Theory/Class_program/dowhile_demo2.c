#include<stdio.h>
int main(){
    int choice,num1,num2;

    do {
        printf("--------- Welcome to my calculator ---------\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        if(choice==1){
            printf("Enter the first number:");
            scanf("%d",&num1);
            printf("Enter the second number:");
            scanf("%d",&num2);
            int sum=num1 + num2;
            printf("The sum is %d\n",sum);
        }

        if(choice==2){
            printf("Enter the first number:\n");
            scanf("%d",&num1);
            printf("Enter the second number:\n");
            scanf("%d",&num2);
            int difference=num1 - num2;
            printf("The difference is %d\n",difference);
        }

        if(choice==3){
            printf("Enter the first number:\n");
            scanf("%d",&num1);
            printf("Enter the second number:\n");
            scanf("%d",&num2);
            int product=num1 * num2;
            printf("The product is %d\n",product);
        }

        if(choice==4){
            printf("Enter the first number:\n");
            scanf("%d",&num1);
            printf("Enter the second number:\n");
            scanf("%d",&num2);
            int division=num1 / num2;
            printf("The division is %d\n",division);
        }

        if(choice==5){
            printf("Program terminated\n");
        }

    } while(choice != 5);

    printf("----------------END----------------\n");
    return 0;
}