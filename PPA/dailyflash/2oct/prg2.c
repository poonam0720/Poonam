#include<stdio.h>
int main(){

     int size;
     
     printf("Enter size of array=\n");
     scanf("%d",&size);
     
     char arr1[size];
     
     char *cptr = arr1;
     
     printf("Enter elements of array=\n");
     for(int itr=0; itr<size; itr++){
     
          scanf(" %c",&arr1[itr]);
     }
     
     printf("Output=\n");
     
     for(int itr=0; itr<size; itr++){
     
          if(*(cptr + itr) >= 65 && *(cptr + itr)<=90){
             
               if(*(cptr + itr)=='A' || *(cptr + itr)=='E' || *(cptr + itr)=='I' || *(cptr + itr)=='O' || *(cptr + itr)=='U'){
               
                *(cptr + itr) = *(cptr + itr) + 32;
                printf("%c\t",*(cptr + itr));
                }else{
                      
                      *(cptr + itr) = *(cptr + itr) + 32;
                      printf("%c\t",*(cptr + itr));
                }
          }else if(*(cptr + itr) >= 97 && *(cptr + itr)<=122){
      
               if(*(cptr + itr)=='a' || *(cptr + itr)=='e' || *(cptr + itr)=='i' || *(cptr + itr)=='o' || *(cptr + itr)=='u')          {
               
                 *(cptr + itr) = *(cptr + itr) - 32;
                 printf("%c\t",*(cptr + itr));
                 }else{
                 
                     //*(cptr + itr) = *(cptr + itr) - 32;
                     printf("%c\t",*(cptr + itr));
                 }
                 
          }
     }
     printf("\n");
     return 0;
}
/*
Enter size of array=
5
Enter elements of array=
M
a
t
C
h
Output=
m	A	t	c	h


Enter size of array=
5
Enter elements of array=
J
W 
u
i
Q
Output=
j	w	U	I	q

*/
