#include<stdio.h>
int main() {

     int num,square,cube;
     
     printf("Enter number=\n");
     scanf("%d",&num);
     
     square = num * num;
     cube = num * num * num;
     
     int *ptr1 = &num;
     int *ptr2 = &square;
     int *ptr3 = &cube;
     
     int *arr[] = {ptr1,ptr2,ptr3};
     
     printf("Output=\n");
     
     printf("%d\n",*(*(arr + 0)));
     printf("%d\n",*(*(arr + 1)));
     printf("%d\n",*(*(arr + 2)));
     
     return 0;
}
/*
#1

Enter number=
2
Output=
2
4
8


#2
Enter number=
20
Output=
20
400
8000


*/


