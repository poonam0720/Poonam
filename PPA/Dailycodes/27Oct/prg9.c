#include<stdio.h>
void main()  {

     char player[10];
     
     printf("Enter player name:\n");
     
     fgets(player,15,stdin);
     
     printf("%s\n",player);
}

/*
Enter player name:
Rohit sharma
Rohit sharma

*** stack smashing detected ***: terminated
Aborted (core dumped)

*/
