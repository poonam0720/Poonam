#include<stdio.h>

//#define macvar 25
//#define PI 3.14

#define arrval 20,30,40

void main() {

        //printf("%d\n",macvar);
        //printf("%f\n",PI);
        
        int arr[] = { arrval };
        
        printf("%d\n",arr[0]);
        printf("%d\n",arr[1]);
        printf("%d\n",arr[2]);
}
