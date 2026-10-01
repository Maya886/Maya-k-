#include<stdio.h>
void add_two_num(int first,int second){         //function definition
    int sum;
   //   int first=100
   //   int second=200;
    sum=first+second;
    printf("The sum is %d\n",sum);
}
int main(){
    add_two_num(10,20);
    add_two_num(100,200);
    printf("Program terminated......");

}