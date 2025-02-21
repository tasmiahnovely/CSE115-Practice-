#include <stdio.h>

int main() {
 
 int n;
 printf ("Give a Number:  \n");
 scanf ("%d", &n); 
 
 while (n>0){
     if ( n%2==0) {
              printf ("%d is an Even Number\n", n);
              
    
         
     }
     n--; 
     
     

 }

    return 0;
}
