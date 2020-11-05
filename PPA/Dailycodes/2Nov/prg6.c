#include<stdio.h>

struct library {

      char Book_name[30];
      char Book_author[30];
      float Book_Price;
      
};

void main() {

     struct library l1 = {"C", "Brian", 265.00};
     struct library l2 = {"Java", "Bruce", 3705.00};
     struct library l3 = {"advancedjava", "Joshua", 974.00};
     struct library l4 = {"Python", "Nageshwar", 661.00};
     struct library l5 = {"c++", "Rajesh", 399.00};
     
     
     struct library book[5] = {l1, l2, l3, l4, l5};
     
     printf("Details of books=\n");
     
     for(int i = 0; i < 5; i++) {
     
          printf("Book name = %s\n",book[i].Book_name);
          printf("Book author = %s\n",book[i].Book_author);
          printf("Book Price = %f\n",book[i].Book_Price);
          printf("\n");
     }
}

/*

Details of books=
Book name = C
Book author = Brian
Book Price = 265.000000

Book name = Java
Book author = Bruce
Book Price = 3705.000000

Book name = advancedjava
Book author = Joshua
Book Price = 974.000000

Book name = Python
Book author = Nageshwar
Book Price = 661.000000

Book name = c++
Book author = Rajesh
Book Price = 399.000000


*/
