#include<stdio.h>
int main(){

     int num;
     printf("Enter size of array=\n");
     scanf("%d",&num);
     
     char array[num];
     
     printf("Enter characters in array=\n");
     
     for(int itr=0;itr<num;itr++){
     
            scanf(" %c",&array[itr]);
     }
     
     for(int itr=0;itr<num;itr++){
     
              if(array[itr]>= 65 && array[itr]<=90)
              array[itr]=array[itr]+32;
     }
     
     for(int itr=0;itr<num;itr++){
     
          printf("%c ",array[itr]);
     }
     
     return 0;
}
/*

Test case :1
Enter size of array=
4
Enter characters in array=
A
F
T
B
a f t b


Test case:2
Enter size of array=
8
Enter characters in array=
C
O
R
E
2
W
E
B
c o r e 2 w e b

*/
