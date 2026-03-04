 /* ifelse statement syntax:
 if(condition)
   statement 1
     else 
      statement 2 */

#include <stdio.h> 
int main (){
  int n ; // variable to store input number
        printf (" Enter the Number = ");
        scanf("%d",&n);
 if (n % 2 == 0); // check number is divisible by 2
        printf(" Number  is Even ");
 else 
        printf(" Number is ODD ");
return 0 ;
}
