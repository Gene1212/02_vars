#include <stdio.h>
int main() {


   //testing regular chars and double

   char a = 'c';
   char q = 126;
   char outofbounds = 151;   
   double x = 1213.20412;
   printf("Test: %c %c %c %lf \n", a, q, outofbounds, x);   //out of bounds character is just an empty space, no issues compiling/running it seems
   


   //finds size of char and double
   printf("Size of char and double is %lu and %lu \n", sizeof(a), sizeof(x));


   //testing unsigned char

    unsigned short int as = 42222; 
    unsigned char ui = 244; 
    printf("unsigned char: %c %hu \n", ui, as); 
  

   return 0;
}