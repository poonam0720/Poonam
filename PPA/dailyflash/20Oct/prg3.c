#include<stdio.h>

int neon(int n);

void main()  {

     int num,ans;
     
     printf("Enter number=\n");
     scanf("%d",&num);
     
     ans = neon(num);
     
     if(ans == num){
     
          printf("Neon number.\n");
     }
     else{
     
          printf("Not neon number.\n");
     }
     
}

int neon(int n)  {

    int square,sum = 0;
    
    square = (n * n) ;
    
    while(square != 0)  {
    
          sum = (sum + (square % 10));
          square = (square / 10);
    }
    
    return (sum == n);
}
