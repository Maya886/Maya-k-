#include<stdio.h>
int get_array_sum(int number[],int size){
    if(size<=0){
        return 0;
    }
    return number[size-1]+get_array_sum(number,size-1);
}
int main(){
    int mynumber[5];
    for(int i=0;i<5;i++){ 
    printf("Enter the %d number:",i+1);
    scanf("%d",&mynumber[i]);
    }
    int total=get_array_sum(mynumber,5);
    printf("The sum is %d\n",total);
    return 0;
}
