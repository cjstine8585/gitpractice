/*Filename: callingfunc.c*
 *Part of: HOMEWORK Progam 2*
 *Created by: Calvin Stineburg*
 *Created on: 09/14/2018*
 *Last Modified by: Calvin Stineburg*
 *Last Modified on: 09/14/2018*
 */

#include <stdio.h>

int main()
{

  /* Here is the example switch case from in class */

  int grade;
  printf("Enter grade: \n");
  scanf("%d", &grade);

  switch (grade) {
  case 1:
    printf("Fail\n");break;
  case 2: 
    printf("Not good (D)\n");break;
  case 3: 
    printf("Good (C)\n"); break;
  case 4: 
    printf("Very Good (B)\n");break;
  case 5:
    printf("Excelent (A)\n");break;
  default:
    printf("You have not entered a valid grade value.\n");
    break;

    /* I did not include Hoover's code in this file because I thought it would look messy and his code can all be found in the book */

   

  return (0);
}

  /*here I will be creating the "loops" function*/

  void loops()
  {
    int i,x;
    x=0;

    printf("For loop example:\n");

    /*This for loop will 
    for(i=0, i<4; i++)
      {

      }

  }
