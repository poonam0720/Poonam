#include<stdio.h>

struct book {

       char bname[20];
       char bauthor[20];
       int noOfPages;
       float price;
};

void main() {

      struct book b1 = {"C", "Brian", 200, 265.00};
      struct book b2 = {"Java", "Bruce", 600, 3705.00};
      struct book b3 = {"AdvacedJava", "Joshua", 300, 974.00};
      
      printf("Book name = %s    Book author = %s   Number of pages = %d    Price = %f\n", b1.bname,b1.bauthor,b1.noOfPages,b1.price);
      printf("Book name = %s    Book author = %s   Number of pages = %d    Price = %f\n", b2.bname,b2.bauthor,b2.noOfPages,b2.price);
      printf("Book name = %s    Book author = %s   Number of pages = %d    Price = %f\n", b3.bname,b3.bauthor,b3.noOfPages,b3.price);
      
}

/*

Book name = C    Book author = Brian   Number of pages = 200    Price = 265.000000
Book name = Java    Book author = Bruce   Number of pages = 600    Price = 3705.000000
Book name = AdvacedJava    Book author = Joshua   Number of pages = 300    Price = 974.000000


*/
