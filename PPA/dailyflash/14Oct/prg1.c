#include<stdio.h>
int main() {

      int size;
      
      printf("Enter size of array=\n");
      scanf("%d",&size);
      
      char arr1[size];
      
      printf("Enter character in array=\n");
      for(int itr = 0; itr <size; itr++){
      
          scanf(" %c",&arr1[itr]);
      }
      
      void *ptr1 = arr1;
      
      printf("Output=\n");
      
      for(int itr = 0; itr < size; itr++) {
      
           printf(" %c\t",*(char*)ptr1);
           
           ptr1 = (char*)ptr1 + 1;
      }
      printf("\n");
      
      for(int itr = 0; itr < size; itr++){
      
            if(*(arr1 + itr) <= '0'  ||  *(arr1 + itr)  >= '9'){
            
                 printf("digit\n");
            }
            else{
            
                 printf("character\n");
            }
            
      }
      
      return 0;
}

/*

Enter size of array=
4
Enter character in array=
A
6
t
r
Output=
 A	 6	 t	 r	
digit
character
digit
digit


*/
