//create ne integer pointer and allocate memory dynamically for five integer data adn display the value stored in ezch location
#include<stdio.h>
#include<stdlib.h>
int main(){
    int*p;
    //using malloc
    p=(int*) malloc(5*sizeof(int));
for(int i=0;i<5;i++){ 
    printf("%d\n",p[i]);
    }
    
    //using calloc
   p=(int*) calloc(5,sizeof(int));
for(int i=0;i<5;i++){ 
    printf("%d\n",p[i]);
    }
}

