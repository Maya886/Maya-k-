#include<stdio.h>
int main(){
    //char name1[5]="Maya";
    //printf("Name %s \n",name1);

    //char name2[30];
    //printf("Enter your first name:");
    //scanf("%29s",name2);
    //printf("Hello, %s!\n",name2);

    //char name3[30];
    //printf("Enter your name:");
    //fgets(name3,sizeof(name3),stdin);
    //printf("%s",name3);

    char name[]="mayaGopalan";
    for (int i=0;name[i] !='\0';i++){  
        printf("name[%d]=%c-",i,name[i]);
    }
    
}


