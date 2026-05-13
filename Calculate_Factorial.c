#include <stdio.h>
#include <stdlib.h>

int main() {

   int i,Factorial,Number;
   
   Factorial=1;
   Number=0;



   printf("Wellcome!\nPlease enter the number to learn its factorial\n");
   scanf("%d",&Number);



   for (i=1;i<=Number;i++) {

    Factorial *= i;

   }

   printf("\n(%d!=%d)\n",Number,Factorial);
 
    return 0 ;
}

