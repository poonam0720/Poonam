#include<stdio.h>
void main()  {

    char actr[20],ch;
    int index = 0;
    
    printf("Enter string=\n");  //Kriti Sanon
    
    while((ch = getchar()) != '\n')  {
    
         actr[index] = ch;
         index++;
    }
    
    actr[index] = '\0';
    
    printf("String entered by you %s",actr);  //Kriti Sanon
    
    printf("\n");
    
}
