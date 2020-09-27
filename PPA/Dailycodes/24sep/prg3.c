#include<stdio.h>
int main(){

    float farr[5] = {20.5, 30.5, 40.5, 50.5, 60.5};

    float *fptr = farr;

    printf("%f\n",*fptr);

    fptr = fptr +1;

    printf("%f\n",*fptr);

    return 0;

}
/*
20.500000
30.500000

*/
