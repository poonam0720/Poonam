#include<stdio.h>
int main()
{
     int n1,n2;
     char ch;
   
     printf("Enter sign to perform operation:\n");
     scanf("%c",&ch);
     
     printf("Enter first number=\n");
     scanf("%d",&n1);
     
     printf("Enter second number=\n");
     scanf("%d",&n2);
     
     switch(ch)
     {
          case '+':
                printf("Addition of %d and %d is %d\n",n1,n2,n1+n2);
                break;
                
         case '-':
                printf("Subtraction of %d and %d is %d\n",n1,n2,n1-n2);
                break;      
                
         case '*':
                printf("Multiplication of %d and %d is %d\n",n1,n2,n1*n2);
                break;       
                      
         case '/':
                printf("Division of %d and %d is %d\n",n1,n2,n1/n2);
                break; 
                
         case '%':
                printf("Division of %d and %d is %d\n",n1,n2,n1%n2);
                break;             
               
         default:
                printf("Enter valid operator!\n") ;
                break;
     }
     return 0;
     
}
/*
Enter sign to perform operation:
+
Enter first number=
10
Enter second number=
20
Addition of 10 and 20 is 30

*/
