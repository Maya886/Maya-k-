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
    void gettotal(){
        sum=maths+python+dbms+english+hindi;   
    }
    void getaverage(){
        average=sum/2;
    }
    void getCGPA(){
        CGPA=average*9.5;
    }
    void displaystudentdetail(){
        printf("Roll number:%d\n",rollno);
        printf("Maths Mark:%.2f\n",maths);
        printf("Python Mark:%.2f\n",python);
        printf("DBMS Mark:%.2f\n",dbms);
        printf("English Mark:%.2f\n",english);
        printf("Hindi Mark:%.2f\n",hindi);
        printf("Total Mark:%5d\n",sum);
        printf("Average Mark:%f\n",average);
        printf("CGPA Mark:%f\n",CGPA);
    }
int main(){                 //declaration //user defined functions
    getstudentdata();       //collecct student data
    gettotal();             //calculate total 5 subject marks
    getaverage();           //calculate average mark
    getCGPA();              //to get CGPA
    displaystudentdetail(); //to display student details
}


