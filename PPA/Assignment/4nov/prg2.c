#include<stdio.h>

void main() {

    char str[30],ch;
    int index = 0;
    
    printf("Enter string=\n");
    
    while((ch = getchar()) != '\n') {
    
           if(ch>= 'b' && ch<= 'y' || ch == ' ')  {
    
           str[index] = ch;
           index++;
           
          }
                    
    }
    str[index] = '\0';
    
    printf("Output = %s\n",str)  ;
  
}

/*

Enter string=
mn jn kn kazfd
Output = mn jn kn kfd


*/
