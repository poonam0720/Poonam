#include<stdio.h>
void main()
{
    int x=10;
    int i=1;
    fordemo:
          printf("printing.............\n");
          
    for(;i<=10;)
    {
       i++;
       goto fordemo;
    }
}

/*in this program  we have incremented the i in the curly braces beacuse of that first condition will get checked and if it is true then it will go inside the loop.When condition is false it will terminate the flow of for loop*/
