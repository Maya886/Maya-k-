#include<stdio.h>
#define size 5
int myqueue[size];  // declare one queue to hold 5 integer data
int front=-1; //to reprsent queue 'front'
int rear=-1; // to represent  queue 'rear'



//method to check overflow
int isfull(void){
    if( rear==size-1){
        return 1;
    }
    return 0;
}

//method to check underflow
int isempty(){
    if(front==-1 && rear==-1){
        return 1;
    }
    return 0;
}
//to store the data from the 'rear'
void enqueue(int newdata){
    if(isfull()){
        printf("Queue Overflow! cannot insert %d\n",newdata);
    }else{
        //inserting the new data
        rear++;
        myqueue[rear]=newdata;
        printf("Data inserted....\n");
    }
}    

// to retrive the data from the 'front'
void dequeue(){ 
   if (isempty()){
        printf("Queue is empty....cant retrive data");
    }else{
        front++;
        int retriveddata=myqueue[front];
        printf("Retrived data is %d",retriveddata);

    }
    
}
void display(){
    if(front==-1||front>rear){
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue elements:");
    for (int i=front;i<=rear;i++){ 
        printf("%d",myqueue[i]);    
    }
    printf("\n");
    
}
int main(){
    int choice=0;
    int mydata;
    do {
        printf("\n----------------------------------------\n");
        printf("1.Enqueue Data\n");
        printf("2.Dequeue Data\n");
        printf("3.Display Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        
        switch (choice){
            case 1:
                printf("Enter the queue Data:");
                scanf("%d",&mydata);
                break;        
            case 2:dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("Invalid option.....\n");
        }
    } while(choice != 4);
}
    