#include<stdio.h>
void main() {

    char str[30], ch;
    int index = 0;
    
    printf("Enter string=\n");
    
    while((ch = getchar()) != '\n') {
    
         str[index] = ch;
         
         if(str[index] >= 'a' && str[index] <= 'z') {
            
              str[index]  = str[index] - 32;    
         }
       
         index++;
    }
    
     printf("%s",str);
     printf("\n");
}

/*

Enter string=
Core2web Technologies
CORE2WEB TECHNOLOGIES

*/
