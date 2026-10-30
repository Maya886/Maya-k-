#include<stdio.h>
int main(){
    int useraccountnumber;
    int accountnumber=1000;
    float balance=500;
    int choice;
    float amount;
    printf("----------Welcome To My Bank----------\n");
    printf("1.Deposite\n");
    printf("2.Withdraw\n");
    printf("3. Account view\n");
    printf("4.Exit\n");
    printf("Enter your option:");
    scanf("%d", &choice);
    switch(choice){
       case 1:
        printf("Enter account number:");
        scanf("%d",&useraccountnumber);
        if(useraccountnumber==accountnumber){
            printf("Valid account\n");
            printf("Enter deposite amount:");
            scanf("%f", &amount);
            balance= balance + amount;
            printf("Current balance is : %f\n", balance);
            printf("Account updated.....");
    }else{
        printf("Invalid account");
    }
    break;

    case 2:
            printf("Enter withdraw amount:");
            scanf("%f",&amount);
            if(amount>balance){
                printf("Insufficient balance\n");
            }else{
                balance = balance - amount;
            printf("Your account has been withdrawed successfully ,balance:%f\n",balance);
            }
            break;

    case 3:
    printf("Current balance is : %f\n", balance);
    break;

    case 4 :
    printf("Exiting program\n");
    break;

    default:
    printf("Invalid option");
}
return 0;
}