#include<stdio.h>
int main(){

      int n1,n2,ans,pow=1;
      char ch;
      
      printf("Enter two numbers=\n");
      scanf("%d %d",&n1,&n2);
      
      int *ptr1 = &n1;
      int *ptr2 = &n2;
            
      printf("Enter opertor=\n");
      scanf(" %c",&ch);
      
      char *ptr3 = &ch;
      int *aptr = &ans;
      int *ptr4 = &pow;
      switch(ch){
      
           case '+': ans = n1 + n2;
                     printf("Addition=%d\n",*aptr);
                     break;
                     
           case '-': ans = abs(n1 - n2);
                     printf("Absolute subtraction=%d\n",*aptr);
                     break;
                     
           case '*': ans = n1 * n2;
                     printf("Multiplication=%d\n",*aptr);
                     break;
                     
           case '/': ans = n1 / n2;
                     printf("Division=%d\n",*aptr);
                     break;
                     
           case '%': ans = n1 % n2;
                     printf("Modulo=%d\n",*aptr);
                     break;
                     
           case '^': for(int itr=1;itr<=n2;itr++){
                     pow = pow * n1;
                     }
                     printf("Power=%d\n",*ptr4);
                     break;
                     
          default:  printf("Invalid operator\n");;
                     break;
      }
      return 0;
}

/*
Enter two numbers=
2
3
Enter opertor=
^
Power=8

*/
