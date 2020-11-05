#include<stdio.h>

struct Movie {

     char* movie_name;
     float rating;
     char* actor;
};

void main()  {

   /*  struct Movie actor1;
     struct Movie actor2;
     struct Movie actor3; */
     
    /* struct Movie array[3] = {actor1, actor2, actor3};
     
     for(int i = 0; i < 3 ; i++)   {
     
         printf("Enter movie name =\n");
         scanf("%s",&array[i].movie_name);
         printf("Enter rating=\n");
         scanf("%f",&array[i].rating);
         printf("Enter actor name=\n");
         scanf("%s",&array[i].actor);
     }*/
     struct Movie actor1 = {"Chhichhore", 4.0, "Shushant"};
     struct Movie actor2 = {"Twilight", 4.5, "Robert"};
     struct Movie actor3 = {"HarryPotter", 4.5, "Steve"};
     
     struct Movie array[3] = {actor1, actor2, actor3};
     printf("Details:\n");
     
     for(int i = 0; i < 3 ; i++)  {
     
           printf("Movie name = %s\n",array[i].movie_name);
           printf("Rating = %f\n",array[i].rating);
           printf("Actor name = %s\n",array[i].actor);
     }
     
}

/*

Details:
Movie name = Chhichhore
Rating = 4.000000
Actor name = Shushant
Movie name = Twilight
Rating = 4.500000
Actor name = Robert
Movie name = HarryPotter
Rating = 4.500000
Actor name = Steve

*/
