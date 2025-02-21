#include <stdio.h>
#include <stdbool.h>

int main() {
 
 int n, sum = 0;
 bool check = true;
 
 while (check == true){
         printf ("Give a Number:  \n");
         scanf ("%d", &n);
         sum = sum + n;

     if ( n > 0) {
              printf ("%d is positive number\n", n);
              printf ("Sum is : %d\n", sum);
              check = false; 
              break;
         
     } else {
         
     }

     

 }

    return 0;
}

