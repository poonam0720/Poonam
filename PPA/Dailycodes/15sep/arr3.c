#include<stdio.h>
int main(){

       int array[5] = {10,20,30,40,50};
       
       int array1[5];
       
       printf("Array=\n");
       
       printf("%d\n",array[0]);
       printf("%d\n",array[1]);
       printf("%d\n",array[2]);
       printf("%d\n",array[3]);
       printf("%d\n",array[4]);
       
       printf("\n");
       
       for(int itr=0;itr<5;itr++){
       
            array1[itr] = array[itr];
       }
       
       printf("Array 1=\n");
       printf("%d\n",array1[0]);
       printf("%d\n",array1[1]);
       printf("%d\n",array1[2]);
       printf("%d\n",array1[3]);
       printf("%d\n",array1[4]);
       
       return 0;
}
/*
Array=
10
20
30
40
50

Array 1=
10
20
30
40
50

*/
