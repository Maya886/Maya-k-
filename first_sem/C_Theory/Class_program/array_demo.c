//Programme to store and display 5 subjects mark
#include<stdio.h>
int main(){
    int my_marks[5];
    int sub_marks[5];                             
                                                                   //declares an array 'sub_marks' with SIZE of 'int' type
                                                                   // storing data/Array initialization - array_name[index]=data/value 
    sub_marks[0]=80;                                               //stores '80'in an array position whose index is '0'
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;                                              //this refered as static array initialization 
    printf("First Subject Mark %d\n",sub_marks[0]);               //Fetch first array element from 'sub_marks'
    printf("Second Subject Mark %d\n",sub_marks[1]);              //Fetch second array element from 'sub_marks'
    printf("Third Subject Mark %d\n",sub_marks[2]);               //Fetch third array element from 'sub_marks'
    printf("Fourth Subject Mark %d\n",sub_marks[3]);              //Fetch fourth array element from 'sub_marks'
    printf("Fifth Subject Mark %d\n",sub_marks[4]);               //Fetch fifth  array element from 'sub_marks'



    //dynamic initialization of 'my_marks'
    for (int i = 0; i < 5; i++){
        printf("Enter your %d Subject Mark [int data]:",i+1);
        scanf("%d",&my_marks[i]);
        
    }
    
    printf("Enter your First Subject Mark [int data]: ");
    scanf("%d",&my_marks[0]);                                     //store in first location
    printf("Enter your Second Subject Mark [int data]: ");
    scanf("%d",&my_marks[1]);                                      //store in second location
    printf("Enter your Third Subject Mark [int data]: ");
    scanf("%d",&my_marks[2]);                                      //store in third location
    printf("Enter your Fourth Subject Mark [int data]: ");
    scanf("%d",&my_marks[3]);                                      //store in fourth location
    printf("Enter your Fifth Subject Mark [int data]: ");
    scanf("%d",&my_marks[4]);                                      //store in fifth location
    printf("My First Subject Mark:%d\n",my_marks[0]);
    printf("My Second Subject Mark:%d\n",my_marks[1]);
    printf("My Third Subject Mark:%d\n",my_marks[2]);
    printf("My Fourth Subject Mark:%d\n",my_marks[3]);
    printf("My Fifth Subject Mark:%d\n",my_marks[4]);




}
