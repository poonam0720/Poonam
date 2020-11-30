#include<stdio.h>

struct Date {

     char day[10];
     char month[10];
     int year;
};

int main()   {

      struct Date d = {"saturday", "october", 2020};
     /* 
      d.day = "saturday";
      d.month = "october";
      d.year = 2020;*/
      
      printf("%s\n",d.day);  //saturday
      printf("%s\n",d.month);  //october
      printf("%d\n",d.year);  //2020
}

/*
saturday
october
2020


*/
