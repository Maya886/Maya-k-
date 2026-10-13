#include <stdio.h> 
int factorial(int number){
    if(number==0){
         return 1;
}                      //base case
    return number * factorial(number-1);
}

int main(){
    int number=0;
    printf("Enter your Number:");
    scanf("%d",&number);
    printf("%d!=%d\n",number,factorial(number));
    return 0;
}
