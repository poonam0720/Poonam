#include<stdio.h>
void main()  {

        char str[20], ch;
        int index = 0;
        
        printf("Enter character=\n");
        
        while((ch = getchar()) != '\n')  {
            
            str[index] = ch;
            
            if((ch >= 'A' && ch <= 'z')  || (ch >= 'a' && ch <= 'z') )  {
            
                 printf("%c is alphabet\n",ch);
            }
            else if(ch >= '0' && ch <= '9')  {
            
                printf("%c is digit\n",ch);
            }
            else{
            
                printf("%c is special character\n",ch);
            }
            
            index++;
        }
}

/*

#1 

Enter character=
C2w@
C is alphabet
2 is digit
w is alphabet
@ is special character

#2

Enter character=
Myntra_12
M is alphabet
y is alphabet
n is alphabet
t is alphabet
r is alphabet
a is alphabet
_ is alphabet
1 is digit
2 is digit

*/
