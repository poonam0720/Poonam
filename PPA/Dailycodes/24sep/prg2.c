#include<stdio.h>
int main(){

     char ch[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};

     char *cptr = &ch[0];

     cptr = cptr + 2 ;

     printf("%c\n",*cptr);

     return 0;
}

/*   
 C
 */
