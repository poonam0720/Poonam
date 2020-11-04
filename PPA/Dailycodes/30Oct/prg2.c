#include<stdio.h>
#pragma pack(1)

struct player {

     int jerno;
     float avg;
     char grade;
};

void main()  {

     printf("%ld\n",sizeof(struct player));//134
     
     struct player virat = {18, 50.45, 'A'};
     struct player rayudu = {32, 47.45, 'B'};
     
     printf("%d\n",virat.jerno);  //18
     printf("%f\n",virat.avg);    //50.45
     printf("%c\n",virat.grade);  //A
  
     printf("%d\n",rayudu.jerno);  //32
     printf("%f\n",rayudu.avg);    //47.45
     printf("%c\n",rayudu.grade);  //B
           
}
