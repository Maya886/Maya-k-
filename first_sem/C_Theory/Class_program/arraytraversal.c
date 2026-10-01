#include<stdio.h>
int main(){
    int size_array=read_array_size();  //we are calling the method and stores returned value
    int isvalid=validate_array_size(size_array);   //passing 'size_array'; int array_size=size_array
    if(isvalid==0){
        for (int i = 0; i < 5; i++){
            
    }

}

//read array SIZE from KB 
int read_array_size(){
    int size;                          //local variable because it is declared inside this only
    printf("Enter the size of the array [>4]:");
    scanf("%d",&size);
    return size;
}

int validate_array_size(int array_size){
    if(array_size>5){
        return 1;  
    }
    return 0;
    
}
}