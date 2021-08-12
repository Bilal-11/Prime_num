/*Program to print prime numbers between 1 and 100*/
/*Author: Bilal, Date: 12/08/2021*/
#include<stdio.h>
#include "elim.c"
int main()
{
  int i, j, d, num[100];

  /*Fill the array num with numbers from 1 to 100*/
  for(i=0 ;i<100; i++)
  {
    num[i] = i + 1;
  }

  /*Going to each non-zero entry and setting its multiples to zero*/
  for(i=1 ;i<100; i++)
  {
    d = num[i];
    if(d!=0)
    {
      /*Use elim function to eliminate multiples of d*/
      elim(d,num);
    }
  }  

  /*Printing the array after processing (in the format of a 10 by 10 grid on the screen)*/
  for(i=0,j=1 ;i<100; i++,j++)
  {
    printf("%d\t",num[i]);
    if(j == 10)
    {
      printf("\n");
      j = 0;
    }

  }

  return 0;
}
