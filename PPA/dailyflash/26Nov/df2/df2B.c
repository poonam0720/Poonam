#include<stdio.h>

void func1();
void func2() {

        func1();
        printf("This is from file 2.\n");
}
