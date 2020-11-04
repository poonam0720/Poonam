#include<stdio.h>

struct player{


    int jerno;  //4
    float avg;  //4
    char grade;  //1
      
};

void main() {

      struct player obj;

      printf("%ld\n",sizeof(struct player));  //12
      printf("%ld\n",sizeof(obj));  //12
}
