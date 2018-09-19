#include <stdio.h>

void sortArray(int number[])
{
    int i,j,a;
    int n = 5;

    for (i = 0; i < n; i++)
        {

            for (j = i + 1; j < n; j++)
            {

                if (number[j] < number[i])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }
        }
}




int main(){
int test[3];
int i;

test[0]=5;
test[1]=10;
test[2]=7;

printf("array size: %d\n",sizeof(test));

sortArray(test);

for(i=0;i<sizeof(test);i++)
{
    printf(" %d ", test[i]);

}
    printf("\n");
}

