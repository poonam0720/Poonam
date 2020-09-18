#include<stdio.h>
int main(){

       int flag=0;
       
       int array[5] = {10,20,30,40,50};
       
       int array1[5] = {10,20,30,40,50};
       
       for(int itr=0;itr<5;itr++){
       
             if(array[itr] == array1[itr]){
        
                 
             }
             else{
       
                 flag=1;
             }
        }
        
        if(flag == 0){
        
            printf("Both array are same.\n");
        }
        else{
        
            printf("Both array are different.\n");
        }
       
       return 0;
}
/*
Both array are different.

*/
