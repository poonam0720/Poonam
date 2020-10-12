#include<stdio.h>
int main() {

      int size;
      printf("Enter length of array=\n");
      scanf("%d",&size);
      
      char arr1[size];
      char arr2[size];
      
      void *cptr = arr1;
      void *cptr1 = arr2;
      
      printf("Enter character array1 elements=\n");
      for(int itr=0; itr<size; itr++){
      
           scanf(" %c",&arr1[itr]);
      }
      
      printf("Enter character array2 elements=\n");
      for(int itr=0; itr<size; itr++){
      
           scanf(" %c",&arr2[itr]);
      }
      
      for(int itr=0; itr<size; itr++){
      
           printf("%c",*(char*)cptr);
           cptr = (char*)cptr + 1;
      }
      
      printf("\n");
      
      for(int itr=0; itr<size; itr++){
      
           printf("%c",*(char*)cptr1);
           cptr1 = (char*)cptr1 + 1;
      }
      
      printf("\n");
      
      return 0;
}

/*

Enter length of array=
8
Enter character array1 elements=
D
e
a
d
p
o
o
l
Enter character array2 elements=
S
u
p
e
r
m
a
n
Deadpool
Superman

*/
