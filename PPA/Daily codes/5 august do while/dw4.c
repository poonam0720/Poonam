#include<stdio.h>
void main()
{
     char agree='y';
     do
     {
         int ch=0;
         printf("Welcome to star mall\n");
         printf("1.Shopping\n");
         printf("2.PVR\n");
         printf("3.Playstation\n");
         printf("4.food court\n");
         
         printf("Enter value:\n");
         scanf("%d",&ch);
         
         switch(ch)
         {
             case 1:
                 printf("Shoes\n");
                 break;
                 
             case 2:
                 printf("Panipat\n");
                 break;
                 
             case 3:
                 printf("Bowling\n");
                 break;
                 
             case 4:
                 printf("Biryani\n");
                 break;
                 
             default:
                 printf("Wrong choice\n");
                 break;                 
         }
         printf("Do you want to continue?:\n");
         scanf(" %c",&agree);
     }while(agree=='y'||agree=='Y');
}
/*
Welcome to star mall
1.Shopping
2.PVR
3.Playstation
4.food court
Enter value:
1
Shoes
Do you want to continue?:
y
Welcome
1.Shopping
2.PVR
3.Playstation
4.food court
Enter value:
2
Panipat
Do you want to continue?:
y
Welcome
1.Shopping
2.PVR
3.Playstation
4.food court
Enter value:
3
Bowling
Do you want to continue?:
Y
Welcome
1.Shopping
2.PVR
3.Playstation
4.food court
Enter value:
4
Biryani
Do you want to continue?:
n
*/
