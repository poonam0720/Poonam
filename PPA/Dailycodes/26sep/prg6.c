#include<stdio.h>
int main(){

    int arr[] = {10,20,30,40,50};

    for(int i=0; i<5; i++){
    
         printf("%d\n",arr[i]);
    }

    for(int i=0; i<5; i++){
    
         printf("%p\n",(arr + i));
    }

    return 0;
}
/*
10
20
30
40
50
0x7fffad839360
0x7fffad839364
0x7fffad839368
0x7fffad83936c
0x7fffad839370

*/
