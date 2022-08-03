/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int subject1, subject2, sum=0;
  float avg=0;

  printf("Enter marks of first subject: ");
  scanf("%d", &subject1);

  printf("Enter marks of second subject: ");
  scanf("%d", &subject2);

  sum = subject1 + subject2;
  avg = (float)sum/2;

  printf("Average of the two marks is: %.2f", avg);
  
  return 0;
}

