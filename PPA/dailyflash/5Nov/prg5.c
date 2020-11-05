#include<stdio.h>

struct customer{

     int accno;
     char cusname[20];
     float balance;
};

void main()  {

      struct customer c1 = {1234567, "Amar", 1600.00};
      struct customer c2 = {6542322, "Aman", 1000.00};
      struct customer c3 = {9624357, "John", 2000.00};
      struct customer c4 = {9272423, "Suzen", 1400.00};
      
      struct customer array[4] = {c1, c2, c3, c4};
      
      printf("Details=\n");
      
      for(int i = 0; i < 4 ; i++) {
      
           if((array[i].balance) < 1500)  {
           
                  printf("Account number = %d  Cutomer name = %s    Balance = %f\n",array[i].accno, array[i].cusname, array[i].balance);
           }
      }
}

/*

Details=
Account number = 6542322  Cutomer name = Aman    Balance = 1000.000000
Account number = 9272423  Cutomer name = Suzen    Balance = 1400.000000


*/
