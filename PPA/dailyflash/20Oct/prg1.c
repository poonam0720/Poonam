#include<stdio.h>
int armstrong(int num, int y) ;

void main() {

     int num,temp,count = 0,rem,sum = 0;
     
     printf("Enter number=\n");
     scanf("%d",&num);
     
     temp = num;
     
     while(temp != 0) {
     
         count++;
         
         temp = temp / 10;
     }
     
     temp = num;
     
     while(temp != 0) {
     
          rem = temp % 10;
          sum = sum + armstrong(rem, count);
          temp = temp / 10;          
     }
     
     if(num == sum) {
     
          printf("%d armstrong number\n",num);
     }
     else{
     
          printf("%d is not armstrong number \n",num);
     }

          
}

int armstrong(int num, int y) {

    int res = 1;
    
    for(int i = 1; i<= y; i++) 
    
    res = res * num;
    
    return res;
}

/*

Enter number=
153
153 armstrong number



Enter number=
245
245 is not armstrong number

*/
