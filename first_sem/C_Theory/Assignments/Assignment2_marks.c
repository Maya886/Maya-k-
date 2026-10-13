#include <stdio.h>

int rollno[5];
char name[5];
int marks[5][5];
int total_marks[5];
float avg_marks[5];
float percentage[5];

void getstudentdata() {
    for (int i = 0; i < 5; i++) {
        printf("\nEnter your Roll Number: ");
        scanf("%d", &rollno[i]);
        
        printf("Enter your Name: ");
        scanf("%s", name[i]);

        printf("Enter marks for 5 subjects (out of 100):\n");
        for (int j = 0; j < 5; j++) {
            printf("Enter Subject %d Mark: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}

void calculateresults() {
    for (int i = 0; i < 5; i++) {
        int total = 0;
        for (int j = 0; j < 5; j++) {
            total += marks[i][j];
        }
        total_marks[i] = total;
        avg_marks[i] = (float)total / 5;
        percentage[i] = ((float)total / 500) * 100;
    }
}

void displayreport() {
    printf("\n==========================================================================================\n");
    printf("                                STUDENT RESULT SHEET                             \n");
    printf("============================================================================================\n");
    printf("%-8s | %-10s | Sub1 | Sub2 | Sub3 | Sub4 | Sub5 | Total | Avg   | Percentage| Result\n", "RollNo", "Name");
    printf("---------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        int is_pass = 1;

        for (int j = 0; j < 5; j++) {
            if (marks[i][j] < 35) {
                is_pass = 0;
            }
        }

        printf("%-8d | %-10s | ", rollno[i], name[i]);
        for (int j = 0; j < 5; j++) {
            printf("%-4d | ", marks[i][j]);
        }
        
        if (is_pass == 1) {
            printf("%-5d | %-5.1f | %-5.1f      | PASS\n", total_marks[i], avg_marks[i], percentage[i]);
        } else {
            printf("%-5d | %-5.1f | %-5.1f      | FAIL\n", total_marks[i], avg_marks[i], percentage[i]);
        }
    }
    printf("==============================================================================================\n");
}

int main() {
    getstudentdata();
    calculateresults();
    displayreport();

    return 0;
}