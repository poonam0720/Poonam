#include<stdio.h>
int main(){

      char ch1,ch2;
      
      printf("Enter characters=\n");
      scanf("%c %c",&ch1,&ch2);
      
      char *cptr1 = &ch1;
      char *cptr2 = &ch2;
      
      cptr1 = cptr1 + 1;
      
      printf("%c",*cptr1);
      
      cptr2 = cptr2 + 1;
      
      printf("%c",*cptr2);
      
      return 0;
}
