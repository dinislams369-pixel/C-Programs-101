/* while loop syntax :
while (condition){
    statement
incremnt
} */
 // we use a while loop when we want to repeat a block of code  as long as a condition is true , and when the number of itterations
//is not known before hand


#include <stdio.h>
int main (){
  int i= 1;
  // while loop executes while condition is true 
       while(i<=5){
         printf("%d\n",i);
             i++; // increments
       }
return 0;
}
