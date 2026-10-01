#include <stdio.h>                                          
int main(){                                                 
    int n;                                                  
    int category;                                           
    int total=0;                                            
    int regular_count=0,premium_count=0,recliner_count=0;   
    float final_amount;                                     

    printf("Enter number of tickets:");                     
    scanf("%d",&n);                                       

    for (int i=1; i<=n; i++){                               
        printf("Enter category for ticket %d  (1/2/3):",i); 
        scanf("%d",&category);                              

        if (category==1){                                  
            total=total+150;                             
            regular_count++;                                
        }else if(category==2){                              
            total=total+250;                               
            premium_count++;                                
        }else if(category==3){                             
            total=total+400;                              
            recliner_count++;                               
        }
    }    
    
    printf("\n---------Final Bill----------\n");           
    printf("Regular tickets:%d\n",regular_count);          
    printf("Premium tickets:%d\n",premium_count);          
    printf("Recliner tickets:%d\n",recliner_count);        

    if(n>=5){                                               
        final_amount= total-(total*0.10);                 
        printf("Discount applied:Yes\n");                 
    }else{                    
        final_amount=total;                                 
        printf("Discount applied:No\n");                   
    }
    printf("Final Amount:%.2f\n",final_amount);           
    return 0;                                               
}