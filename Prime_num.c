/*Program to print prime numbers between 1 and 100*/
/*Author: Bilal, Date: 12/08/2021*/
#include<stdio.h>

int main()
{
  int i, j, d, num[100];

  /*Fill the array num with numbers from 1 to 100*/
  for(i=0 ;i<100; i++)
  {
    num[i] = i + 1;
  }

  /*Setting d to 2*/
  d = num[1];

  for(i=1 ;i<100; i++)
  {
    if(num[i]%d == 0 && num[i]!=d)
    {
      num[i] = 0;
    }
  }

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
