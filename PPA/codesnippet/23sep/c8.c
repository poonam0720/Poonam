#include<stdio.h>
int main(){

    int age[] = {20,25,16,17,22};
    
    printf("%d\n",&(*age));
    printf("%d\n",&(age));
    
    return 0;
}

/*
both print different address
*/
