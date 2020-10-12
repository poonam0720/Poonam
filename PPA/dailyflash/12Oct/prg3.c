#include<stdio.h>
int main() {

     char ch1 = 'a';
     char ch2 = 'G';
     char ch3 = 'h';
     
     char *ptr1 = &ch1;
     char *ptr2 = &ch2;
     char *ptr3 = &ch3;
     
     char* arr1[3] = {ptr1,ptr2,ptr3};
     
     printf("Output:\n");
     
     for(int itr=0; itr<3; itr++){
     
          if(*(*(arr1 + itr)) >= 65 && *(*(arr1 + itr)) <= 90) {
          
                *(*(arr1 + itr)) = *(*(arr1 + itr)) + 32;
                
                printf("%c\t",*(*(arr1 + itr)));
          }
          else if(*(*(arr1 + itr)) >= 97 && *(*(arr1 + itr)) <= 122) {
          
                *(*(arr1 + itr)) = *(*(arr1 + itr)) - 32;
                
                printf("%c\t",*(*(arr1 + itr)));
          }
          
     }
     printf("\n");
}

/*

Output:
A	g	H

*/
