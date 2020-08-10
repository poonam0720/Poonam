#include<stdio.h>
#define TRUE 1
int main()
{
    int loop=10;
    while(printf("Hello\n")&& loop--);
}
/*
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello


*/
