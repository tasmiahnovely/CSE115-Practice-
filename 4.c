#include <stdio.h>
#include <stdbool.h>

int main() {
 
    int n;
    int num1 = 0;
    int num2 = 1;
    int next_number = num2;  
    int count = 1;
    
    printf ("Enter n-th fibonacci number: \n");
    scanf ("%d", &n);
    
 
 while (count <= n){
         printf ("The next Number is : ");
         count++;
        printf("%d \n",num1);
        num1 = num2;
        num2 = next_number;
        next_number = num1 + num2;
        

     

 }

    return 0;
}