#include<stdio.h>
void square_area();
void circle_area();
void rectangle_area();
void triangle_area();

void main()  {

   char ch;

  do{  
    int radius,side1,width,height1,height, base,ch;
    
    void (*vptr1[2])(int) = {square_area, circle_area};
    void (*vptr2[2])(int, int) = {rectangle_area, triangle_area};
    
   /* void (*vptr1) (int);
    void (*vptr2) (int);
    void (*vptr3) (int, int);
    void (*vptr4) (int, int);*/
    
    printf("Enter choice=\n");
    printf("1.Area of square:\n");
    printf("2.Area of circle:\n");
    printf("3.Area of rectangle:\n");
    printf("4.Area of triangle:\n");
    
    scanf("%d",&ch);  
    
    
    printf("Enter radius:");
    scanf("%d",&radius);
    printf("\n");
    
    printf("Enter side for square:");
    scanf("%d",&side1);
    printf("\n");
    
    printf("Enter width for rectangle:");
    scanf("%d",&width);
    printf("\n");
    
    printf("Enter height for rectangle:");
    scanf("%d",&height1);
    printf("\n");
    
    printf("Enter height for triangle:");
    scanf("%d",&height);
    printf("\n");
    
    printf("Enter base for triagnle:");
    scanf("%d",&base);
    printf("\n");
    
    vptr1[0](side1);
    
    vptr1[1](radius);
 
    vptr2[0](width,height1);
  
    vptr2[1](height,base);
    
    switch(ch) {
    
        case 0: square_area();
                break;
                
        case 1: circle_area();
                break;
                
        case 2: rectangle_area();
                break;
                
        case 3: triangle_area();
                break;
                
        default : printf("Invalid choice.\n");
                  break;
        
    }
    
    printf("Do you want to continue?\n");
    scanf(" %c",ch1);
    
    }while(ch1 == 'y' || ch1 == 'Y');
    
}

void square_area(int s)  {

     int  area1 = s*s;
     printf("Area of square = %d\n",area1);
}

void circle_area(int r)  {

     int area2 = 3.14 * r * r;
     printf("Area of circle = %d\n",area2);
}

void rectangle_area(int w, int b)  {

     int area3 = w * b;
     printf("Area of rectangle = %d\n",area3);
}

void triangle_area(int b, int h)  {

     int area4 = 0.5 * b * h;
     printf("Area of triangle = %d\n",area4);
}

/*

Enter radius:3

Enter side for square:4

Enter width for rectangle:3

Enter height for rectangle:6

Enter height for triangle:8

Enter base for triagnle:3

Area of square = 16
Area of circle = 28
Area of rectangle = 18
Area of triangle = 12


*/
