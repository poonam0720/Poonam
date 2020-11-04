#include<stdio.h>
#pragma pack(1)

struct player {

     int jerno;
     float avg;
     char grade;
}Rohit =  {45, 52.45, 'A'},Rayudu  = {32, 47.45, 'B'};

void main() {

     struct player Virat = {18, 50.45, 'A'};
     
     printf("%ld\n",sizeof(Rohit));
     printf("%ld\n",sizeof(Rayudu));
     printf("%ld\n",sizeof(Virat));
     
     printf("%d\n",Virat.jerno);  //18
     printf("%f\n",Virat.avg);   //50.45
     printf("%c\n",Virat.grade);  //A
     printf("\n");
     
     
     printf("%d\n",Rohit.jerno);   //45
     printf("%f\n",Rohit.avg);    //51.45
     printf("%c\n",Rohit.grade);  //A
     printf("\n");
          
     printf("%d\n",Rayudu.jerno);  //32
     printf("%f\n",Rayudu.avg);   //47.45
     printf("%c\n",Rayudu.grade);  //B
     printf("\n");
    
         
     printf("%p\n",&Virat);  
     printf("%p\n",&Virat.jerno);  
     printf("%p\n",&Virat.avg);    
     printf("%p\n",&Virat.grade); 
     printf("\n");
      
     printf("%p\n",&Rohit);
     printf("%p\n",&Rohit.jerno);  
     printf("%p\n",&Rohit.avg);    
     printf("%p\n",&Rohit.grade); 
     printf("\n");
    
     printf("%p\n",&Rayudu);     
     printf("%p\n",&Rayudu.jerno);  
     printf("%p\n",&Rayudu.avg);    
     printf("%p\n",&Rayudu.grade); 
     printf("\n");
}
