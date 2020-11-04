#include<stdio.h>
#pragma pack(1)

struct player {

     int jerno;
     double avg;
     char grade;
};

void main()  {

     printf("%ld\n",sizeof(struct player));//134
}
