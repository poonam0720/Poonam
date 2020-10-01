#include<stdio.h>
int main() {

     int marr[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
     
     printf("Array type=\n");
     printf("%d\n",marr[0][0]);   //1
     printf("%d\n",marr[0][2]);   //3
     printf("%d\n",marr[1][3]);   //9
     printf("%d\n",marr[2][1]);   //12
     printf("%d\n",marr[2][4]);   //15
     
     printf("Pointer type=\n");
     printf("%d\n",*(*(marr + 0) + 0));   //1
     printf("%d\n",*(*(marr + 0) + 2));   //3
     printf("%d\n",*(*(marr + 1) + 3));   //9
     printf("%d\n",*(*(marr + 2) + 1));   //12
     printf("%d\n",*(*(marr + 2) + 4));   //15
     
     return 0;
}
/*
Array type=
1
3
9
12
15
Pointer type=
1
3
9
12
15

*/
