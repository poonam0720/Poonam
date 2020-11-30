#include<stdio.h>
void main()  {

     char str[30];
     
     printf("Enter string=\n");
     scanf("%[^\n]",str);
     
     while(str) 
     
     if(str == ' ') {
     
          printf("%s",'-');
     }
     else{
     
          printf("%s",str);
     }

     
}
