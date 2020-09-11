#include<stdio.h>
int main()
{
   int n;
   char ch3;
   
   do
   {
      printf("Welcome to burger king\n");
      printf("1.Veg\n");
      printf("2.Non-veg\n");
      
      printf("Enter your choice:\n");
      scanf("%d",&n);
      
      switch(n)
      {
          case 1:
            {
              char ch;
              printf("a.veggie Tikki Burger\n");
              printf("b.Aloo Tikki Burger\n");
              printf("c.Mushroom Veggie Cheese Burger\n");
              printf("d.Peanut Butter Sweet Patato Burger\n");
              
              printf("Enter your choice:\n");
              scanf(" %c",&ch);
          
            switch(ch)
            {
               case 'a':
                    printf("Veg=veggie Tikki Burger\n");
                    break;
                    
               case 'b':
                    printf("Veg=Aloo Tikki Burger\n");
                    break;
                    
              case 'c':
                   printf("Veg=Mushroom Veggie Cheese Burger\n");
                   break;
                   
              case 'd':
                   printf("Veg=Peanut Butter Sweet Patato Burger\n");
                   break;
                   
              default:
                   printf("No such items\n");
                   break;
               
            } 
            break;
          }  
          case 2:
          {
              char ch1;
              printf("a. Chicken Tikki Burger\n");
              printf("b. Chicken Aloo Tikki Burger\n");
              printf("c. Mushroom Chicken Cheese Burger\n");
              printf("d.Chicken Butter Sweet Patato Burger\n");
              
              printf("Enter your choice:\n");
              scanf(" %c",&ch1);
          
            switch(ch1)
            {
               case 'a':
                    printf("Non-veg=Chicken Tikki Burger\n");
                    break;
                    
               case 'b':
                    printf("Non-veg=Chicken Aloo Tikki Burger\n");
                    break;
                    
              case 'c':
                   printf("Non-veg=Mushroom Chicken Cheese Burger\n");
                   break;
                   
              case 'd':
                   printf("Non-veg=Chicken Peanut Butter Sweet Patato Burger\n");
                   break;
                   
              default:
                   printf("No such item\n");
                   break;
               
            } 
            break;
            
         }
         default:
                   printf("Enter from above option only\n");
                   break;
      }
      printf("Do you want to continue?\n");
      scanf(" %c",&ch3);
   }while(ch3=='y'||ch3=='Y');
   
   
   return 0;
}

/*
Welcome to burger king
1.Veg
2.Non-veg
Enter your choice:
1
a.veggie Tikki Burger
b.Aloo Tikki Burger
c.Mushroom Veggie Cheese Burger
d.Peanut Butter Sweet Patato Burger
Enter your choice:
a
Veg=veggie Tikki Burger
Do you want to continue?
y
Welcome to burger king
1.Veg
2.Non-veg
Enter your choice:
2
a. Chicken Tikki Burger
b. Chicken Aloo Tikki Burger
c. Mushroom Chicken Cheese Burger
d.Chicken Butter Sweet Patato Burger
Enter your choice:
b
Non-veg=Chicken Aloo Tikki Burger
Do you want to continue?
n


*/
