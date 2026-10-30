#include<stdio.h>


int main(){
    //int mymark;              //variable declaration
   // mymark=76;               //initialization
    
    int mymark=76;             //(we didn't get red line because sytatically it is correct)

    if(mymark>=90){
        printf("GRADE : DISTINCTION");
    }
    else if(mymark>=75){
        printf("GRADE : FIRST CLASS");
    }
    else if (mymark>=60){
        printf("GRADE : SECOND CLASS");
    }
    else {
        printf("GRADE : PASS");
    }
    return 0;
}