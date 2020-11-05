#include<stdio.h>

struct friend {

      char fname[20];
      char type[20];
      char status;
};

void main() {

     struct friend f1 = {"Aman", "Shant", 'N'};
     struct friend f2 = {"Amar", "Mastikhor", 'Y'};
     struct friend f3 = {"Jhon", "Mastikhor", 'Y'};
     
     struct friend arr[3] = {f1, f2, f3};
     
     printf("Output=\n");
     
     for(int i = 0; i < 3; i++) {
     
          printf("Friend name = %s\n",arr[i].fname);
          printf("Friend type = %s\n",arr[i].type);
          printf("Friend status = %c\n",arr[i].status);
          printf("\n");
     }
}

/*

Output=
Friend name = Aman
Friend type = Shant
Friend status = N

Friend name = Amar
Friend type = Mastikhor
Friend status = Y

Friend name = Jhon
Friend type = Mastikhor
Friend status = Y


*/
