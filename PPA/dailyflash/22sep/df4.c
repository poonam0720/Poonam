#include<stdio.h>
int main(){

     int num1,num2;
     
     printf("Enter two integer number=\n");
     scanf("%d %d",&num1,&num2);
     
     printf("Before swapping=\n");
     printf("%d %d",num1,num2);
     
     int *ptr1=&num1;
     int *ptr2=&num2;
     
     *ptr1 = *ptr1 + *ptr2;
     *ptr2 = *ptr1 - *ptr2;
     *ptr1 = *ptr1 - *ptr2;
     
     printf("\nAfter swapping=\n");
     printf("%d %d\n",*ptr1,*ptr2);
     
     return 0;
}

/*
Enter two integer number=
10
20
Before swapping=
10 20
After swapping=
20 10
*/
