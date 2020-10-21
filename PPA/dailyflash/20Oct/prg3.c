#include<stdio.h>

int neon(int n);

void main()  {

     int num,ans;
     
     printf("Enter number=\n");
     scanf("%d",&num);
     
     ans = neon(num);
     
     if(ans ==0){
     
          printf("Neon number.\n");
     }
     else{
     
          printf("Not neon number.\n");
     }
     
}

int neon(int n)  {

    int sum = 0;
    
    int square = (n * n) ;
    
    while(square)  {
    
          int rem = square % 10;
          square = square / 10;
          sum = sum + rem;
    }
    
   if(sum == n) {
   
        return 0;
   }
   else{
   
        return 1;
   }
}

/*

Enter number=
9
Neon number.

*/
