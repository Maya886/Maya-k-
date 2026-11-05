#include<stdio.h>
int main(){
    //take array size from the user
    int size;
    printf("Enter Size of Array elements:");
    scanf("%d",&size);
    //declare an array
    int a[size];

    //take array elements from the user
    for(int i=0;i<size;i++){
    printf("Enter the %d array element:",i+1);
    scanf("%d",&a[i]);
    }

    printf("Array Elements Before Swapping:");
    for(int i=0;i<size;i++){
        printf(" %d ",a[i]);
    }

    //bubble sort logic
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }

    //dispaly array element
    printf("\nArray Elements After Swapping:");
    for(int i=0;i<size;i++){
        printf(" %d ",a[i]);
    }

    return 0;

    
}