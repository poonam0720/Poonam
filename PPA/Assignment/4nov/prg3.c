#include<stdio.h> 

void main()  {

     char str[30], ch;
     int count_cap = 0, count_small = 0, count_digi = 0;
     
     printf("Enter string=\n");
     
     while((ch = getchar()) != '\n')  {
     
          if(ch >= 'A' && ch <= 'Z'){
          
               count_cap++;
          }
          else if(ch >= 'a' && ch <= 'z'){
          
               count_small++;
          }
          else if(ch >= '0' && ch <= '9'){
          
               count_digi++;
          }
     }
     
     printf("Small = %d   Capital = %d   Digits = %d\n",count_small,count_cap,count_digi);
}

/*

Enter string=
abcDE 5Glm1 O
Small = 5   Capital = 4   Digits = 2

*/
