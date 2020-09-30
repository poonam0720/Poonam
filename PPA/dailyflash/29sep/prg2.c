#include<stdio.h>
int main(){

      char ch1,ch2;
      
      printf("Enter characters=\n");
      scanf("%c %c",&ch1,&ch2);
      
      char *cptr1 = &ch1;
      char *cptr2 = &ch2;
      char *ansptr;
      
      ansptr = cptr1 + 1;
      
      printf("%c",*ansptr);
      
      ansptr = cptr2 + 1;
      
      printf("%c",*ansptr);
      
      return 0;
}
