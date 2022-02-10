/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1 , mark2 , total = 0  ; //declare variables

  printf( "Enter marks of 1st subject" ) ; //input marks of 1st subject
  scanf( "%d" , &mark1 ) ;

  printf( "Enter marks of 2nd subject" ) ;  //input marks of 2nd subject
  scanf( "%d" , &mark2 ) ;

  float avg = (mark1 + mark2)/2.0 ;   //calculating average

  printf( "Average mark is %.2f" , avg ) ;   //displaying average

  return 0;
}

