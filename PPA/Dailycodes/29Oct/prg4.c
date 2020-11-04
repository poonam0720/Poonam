#include<stdio.h>

struct player{

    char team;
    char x;
    int jerno;  //4
    float avg;  //4
    char grade;  //1
      
};

void main() {

      struct player obj;

      printf("%ld\n",sizeof(struct player));  //16
      printf("%ld\n",sizeof(obj));  //16
}
