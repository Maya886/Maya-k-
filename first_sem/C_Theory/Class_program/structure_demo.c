#include<stdio.h>
struct student{      //structure defination 
    //structure members
    int studentid;  //to store student id
    char name[10];  //to store name 
    char contactno[10]; // to store contact number
    int pin; //to store pin

};
int main(){  
    //creating structure vaariable 'firststudent' of type 'student'
    struct  student firststudent;      //structre //structure type //struture variable name
    struct student secondstudent;
    firststudent.studentid=100;    //member 'studentid'is intialized with 100
    firststudent.name[10]='Maya';  
    secondstudent.name[10]='Priya';  
    firststudent.contactno[10]="1234567890";  
    secondstudent.contactno[10]="0987654321";
    firststudent.pin=671124;
    secondstudent.pin=241167;

    printf("First student data:%d,%s,%s,%d\n",firststudent.studentid,firststudent.name,firststudent.contactno,firststudent.pin);
    printf("second student data",secondstudent.studentid,secondstudent.name,secondstudent.contactno,secondstudent.pin);
}




