#include<stdio.h>
void main()  {

    char str[30], ch;
    int index = 0;
    
    printf("Enter string=\n");
    
    while((ch = getchar()) != '\n') {
    
         str[index] = ch;
            
         printf("%c",str[index]);
         printf(" ");
         index++;
    }
     
}

/*
Enter string=
core2web@gmail.com
c o r e 2 w e b @ g m a i l . c o m 

*/
