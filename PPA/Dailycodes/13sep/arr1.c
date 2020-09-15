#include<stdio.h>
int main(){

    
     int iarray[5]={10,20,30,40,50};
     
     printf("%ld\n",sizeof(iarray));//20
   
     char carray[2+3]={'A','B','C','D'};
     
     printf("%ld\n",sizeof(carray));//5
     
     for(int itr=0;itr<5;itr++){
     
            printf("%c\n",carray[itr]);//A B C D blank
     }
     
    
     float farray[]={10.5f,20.5f,30.5f,40.5f};
     
     printf("%ld\n",sizeof(farray));//20
     
     for(int itr=0;itr<5;itr++){
     
          printf("%f\n",farray[itr]);//10.500000 20.5000000 30.500000 40.5000000 0.000000
     }
     
     
     return 0;
    
}
/*
20
5
A
B
C
D

16
10.500000
20.500000
30.500000
40.500000
0.000000

*/
