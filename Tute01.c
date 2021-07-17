/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1,mark2;
 float average;

 printf("Enter your mark1:");
 scanf("%d",&mark1);
printf("Enter your mark2:");
 scanf("%d",&mark2);
 
 average=(float)(mark1+mark2)/2;

 printf("Average is:%.2f",average);
  
  return 0;
}

