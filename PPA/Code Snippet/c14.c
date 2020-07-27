#include<stdio.h>
void main()
{
    int movie=1;
    switch(movie<<2+movie)
    {
      default:
       printf("3 idiots\n");
       
       case 4:
       printf("Ghajini\n");
       
       case 5:
       printf("krish\n");
    
       case 6:
       printf("race\n");
    }
}
