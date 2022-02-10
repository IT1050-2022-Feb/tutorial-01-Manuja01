/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int n , sum = 0 ;   //declare variables
  
  printf( "Enter number" ) ;  //taking user input
  scanf( "%d" , &n ) ;

  for(int i = 0 ; i < n+1 ; i++)  //using for loop to get summation
  {
    sum = sum + i ; 
  }

  printf( "Sum is %d" , sum ) ;  //diaplying summation

  return 0;
}

