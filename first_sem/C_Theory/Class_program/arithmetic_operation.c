#include<stdio.h>
int mail(){ 
int x=10;
int*p=&x;
int m=*p++;
printf("Value:",m);
}