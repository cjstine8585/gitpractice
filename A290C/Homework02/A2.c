/*Filename: A2.c*
 *Part of: HOMEWORK Progam 2*
 *Created by: Calvin Stineburg*
 *Created on: 09/14/2018*
 *Last Modified by: Calvin Stineburg*
 *Last Modified on: 09/20/2018*
 */

#include <stdio.h>
/*I decided to create an array sorter to use as a helper function
 *It sorts the arrays in ascending order
 */



void sortArray(int a[], int size)
{
    /*swap allows the program to swap the elements*/
    int i,j,swap;

    for (i = 0; i < size ; i++)
        {

            for (j = i + 1; j < size; j++)
            {

                if (a[j] < a[i])
                {

                    swap =  a[i];
                    a[i] = a[j];
                    a[j] = swap;

                }

            }
        }
}
/*removes all duplpicate elements*/
void removeDupilicates(int a[],int size){

/*just in case size of 0 or 1 given */
    if(size==0||size==1){
        printf(a[0]);
    }

    int uni[size];
    int i, j, count;
    count = 0;

    for(i=0;i<size-1;i++){
        if(a[i]!=a[i+1]){
            uni[count] = a[i];
            count++;
        }
    }

    for(i=0;i<count;i++)
        {
        printf("%d ",uni[i]);
    }
}
/*combines two arrays*/
void arrayCombo(int a[], int b[], int size){

int i, j;

int final[size+size];

    for(i=0;i<size;i++){
        final[i]=a[i];
        final[i+size-1]=b[i];
    }
sortArray(final,(size+size));
removeDupilicates(final,(size+size));

}



/*Here is the first function
 *It finds the intersection of the two arrays
 */



void intersect(int a[], int b[], int size)
{
  int n,m;
  int inter[100];
  int index=0;

  /*First for loop: picks the first index of the first array
   *Second loop: compares the first index with all elements in the second array
   *the process repeats until all intersecting elements are found
   */
    for(n=0;n<size;n++)
        {

        for(m=0;m<size;m++)
            {

            if(a[n]==b[m])
                {
                inter[index]=a[n];
                index=index+1;
                break;/*The break statement to make sure no elements are repeated*/

                }
            }
        }

 /*This loop is used to print the intersection of the two arrays*/

      int t;
      printf("The intersection of the two arrays is: ");

      for(t=0;t<index;t++)
        {
        printf("%d ", inter[t]);

        if(t==index-1) printf("\n");
        }
}



int main()
{

  /* size used to store the size of the array
   *i and j used later as iterators in the for loops
   */

  int size,i,j;
  int dsize;

  /*asking user for input and storing the input in size variable*/

  printf("Please enter the size of the arrays: ");
  scanf("%d", &size);

  /*declaring the two arrays and intitializing them based on the user input for size */

  int A1[size];
  int A2[size];



  /*asking the user for elements of the array
   *placing them in the arrays using a for loop
   */
  printf("Enter the elements of the first array: ");

  for(i=0; i<size; i++)
    {
      scanf("%d", &A1[i]);

    }

  /* for loop to make sure that elements were being placed in the array

  int a;
  for(a=0;a<size;a++)
    {
      printf("%d", A1[a]);
      printf(" ");
    }
  */
  printf("Enter the elements of the second array: ");

  for(j=0;j<size;j++)
    {
      scanf("%d",&A2[j]);
    }


    intersect(A1,A2,size);

    arrayCombo(A1,A2,size);

}

