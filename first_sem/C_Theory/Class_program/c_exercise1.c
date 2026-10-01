#include<stdio.h>
int main(){
    int N, sum = 0;
    
    printf("C Program to get the sum of numbers from 5 to N\n");
    printf("Enter N value:");
    scanf("%d",&N);
    if (N<=5){
        printf("Please enter N greater than 5\n");
    }else{
        for (int number = 5; number<=N; number++){
            sum+=number;
        }
    printf("Sum of numbers from 5 to %d is %d\n",N,sum);
    return 0;
    }
}
    
    



