#include<stdio.h>
#pragma pack(1)

typedef struct Book {

      char bname[20];
      char author[20];
      int pages;
      float price;
}book;

void main() {

      book cpp = {"Thinking in c++", "Bruce Eckel",920,650.00};
      
      //printf("%ld\n",sizeof(cpp));  //48
      
      book java = {"Black book", "Nageshwar rao", 660, 450.00};
      
      printf("%c\n",cpp.bname);
      printf("%c\n",cpp.author);
      printf("%d\n",cpp.pages);
      printf("%f\n",cpp.price);
      printf("\n");
      
      printf("%c\n",java.bname);
      printf("%c\n",java.author);
      printf("%d\n",java.pages);
      printf("%f\n",java.price);
      printf("\n");
  
}

//incomplete code
