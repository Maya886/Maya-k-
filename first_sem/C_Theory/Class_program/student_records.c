//5 students and their marks in 3 subjects and percentage,total
#include<stdio.h>
 //'global' array of structure 'students' with size 5
 //can be accessed in any method .global scope
struct student{
    int student_id;
    char name[50];
    int marks[3];
    int total;       //to store total marks
    float average;   //to store average marks
    
};
struct student students[5];

//method to intialize 5 students
void initialize_student(){
    for(int i=0;i<5;i++){ 
        printf("==========Enter %d Student Data=========",i+1);
        printf("\nEnter your Student Id:");
        scanf("%d",&students[i].student_id);
        printf("Enter your Name:");
        scanf("%s",&students[i].name);

        //to collect 3 subject mark
        for(int j=0;j<3;j++){
            printf("Enter %d Subject Mark:",j+1);
            scanf("%d",&students[i].marks[j]);
        }  
    }
}   
//to find total marks of 3 subjects
int get_total(){
    for(int i=0;i<5;i++){
        students[i].total=students[i].marks[0]+students[i].marks[1]+students[i].marks[2];
    }
}
float  get_average(){
    for (int i=0;i<5;i++){
        students[i].average=students[i].total/3;

    }
}

void display_student(){
    printf("Student ID\tName\t\tSUb1\tSub2\tSub3\tAverage\tTotal\n");
    for(int i=0; i<5;i++){
    printf("%d\t\t%s\t\t%d\t%d\t%d\t%.2f\t%d\n",students[i].student_id,students[i].name,students[i].marks[0],students[i].marks[1],students[i].marks[2],students[i].average,students[i].total);
}
}

int main(){
    //struct student first;  //to store first student data
    //struct student second;  //to store second student data
    //array of sturcture  can be used instead of this 
    initialize_student();
    get_total();
    get_average();
    display_student();
    return 0;
}
















    


