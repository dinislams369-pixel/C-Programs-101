/* syntax of do-while loop:
 do {
statement 
  increament
 } while (condition) */
// we use  a do_while loop when a block of code must execute at least once, regardless of the condition 



#include <stdio.h>
int main () {
   int i= 1;
         // do-while loop executes at least once
        do{
           print("%d\n",i);
              i++;
          }while (i<=5);
return 0;
}
