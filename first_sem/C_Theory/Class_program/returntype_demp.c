#include<stdio.h>
int rollno,sum;                //global declaration
float maths,python,dbms,english,hindi,average,CGPA;
void getstudentdata(){
    printf("Enter your rollnumber:");
    scanf("%d",&rollno);
    printf("Enter your maths mark:");
    scanf("%f",&maths);
    printf("Enter your python mark:");
    scanf("%f",&python);
    printf("Enter your dbms mark:");
    scanf("%f",&dbms);
    printf("Enter your english mark");
    scanf("%f",&english);
    printf("Enter your hindi mark:");
    scanf("%f",&hindi);
}
    int  gettotal(){ 
        sum=maths+python+dbms+english+hindi;
        return sum ;  
    }
    float getaverage(){
        average=sum/2;
        return average;
    }
    float getCGPA(){
        CGPA=average*9.5;
        return CGPA;
    }
int main(){                 //declaration //user defined functions
    getstudentdata();       //collecct student data
    float total=gettotal();             //calculate total 5 subject marks
    float average=getaverage();           //calculate average mark
    float CGPA=getCGPA();              //to get CGPA
    

    printf("The total is:%f",total);
}


