#include<stdio.h>
int main(){
    printf("First student details");
    int maths,python,dbms,total,percentage;
    int i;
    printf("\n+-----+-------+--------+------+-------+-----+--------+\n");
    printf("| sno | maths | python | dbms | total | %%   | result |\n");
    printf("+-----+-------+--------+------+-------+-----+--------+\n");
    for(i=1;i<=3;i++){  
    printf("Enter first student detsils:");
    printf("Maths subject mark:");
    scanf("%d",&maths);
    printf("Python subject mark:");
    scanf("%d",&python);
    printf("DBMS subject mark:");
    scanf("%d",&dbms);
    total=maths+python+dbms;
    percentage=(total/300)*100;
    printf("\n+-----+-------+--------+------+-------+-----+--------+\n");
     printf("| %-3d | %-5.0f | %-6.0f | %-4.0f | %-5.0f | %-3.0f | Pass   |\n", 
               i, maths, python, dbms, total, percentage);
    printf("+-----+-------+--------+------+-------+-----+--------+\n");
    
    }
    return 0;
}  
