#include<stdio.h>
int main()
{
   int n,fdigit,ldigit;
   
   printf("Enter number=\n");
   scanf("%d",&n);
   
   ldigit=n%10;
    
   fdigit=n;
    
    while(fdigit>=10)
     {
      fdigit=fdigit/10;
     }
     
   
   
   printf("First digit of number=%d\n",fdigit);
   printf("Last digit of number=%d\n",ldigit);
   
   return 0;
}

/*

Enter number=
83467
First digit of number=8
Last digit of number=7


*/
