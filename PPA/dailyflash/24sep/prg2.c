#include<stdio.h>
int main(){

     char ch;
     do{
       
          int num;
          printf("Enter number to print table=\n");
          scanf("%d",&num);
     
          int *iptr = &num;
     
          printf("Table of %d\n",num);
          for(int itr=1;itr<=10;itr++){
     
          printf("%d * %d = %d\n",*iptr,itr,(*iptr * itr));
     }
          printf("Do you want to continue?=\n");
          scanf(" %c",&ch);
        }while(ch == 'y' || ch == 'Y');
     
     return 0;
     
}
/*
Enter number to print table=
3
Table of 3
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
3 * 4 = 12
3 * 5 = 15
3 * 6 = 18
3 * 7 = 21
3 * 8 = 24
3 * 9 = 27
3 * 10 = 30
Do you want to continue?=
y
Enter number to print table=
2
Table of 2
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20
Do you want to continue?=
n

*/
