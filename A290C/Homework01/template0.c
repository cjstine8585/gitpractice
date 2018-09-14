/*Filename: A1harmonic.c*
 *Part of: Assignment 1*
 *Created by: Calvin Stineburg*
 *Created on: 09/10/2018*
 *Last Modified by: Calvin Stineburg*
 *Last Modified on: 09/10/2018*
 */

#include <stdio.h>

int main()
{

  /* body*/  
  double n; 

  printf("Hello! Welcome to the Harmonics Program!\nPlease enter a number to calculate the value of the harmonic series: ");
  scanf("%lf", &n);

  int checker=0;
  while(checker == 0){
    if(n<=0){
      printf("Please enter a positive number.\n");
    }
    else{
      checker = 1;
    }


  int i = 2;
  int harmonic = 1;

  for(i; i <= n; i++){
   
    harmonic = harmonic + 1/i;

  }

  print("The value of this series is %.6lf\n", harmonic);

  return (0);

}
