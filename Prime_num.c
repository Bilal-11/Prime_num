/*Program to print prime numbers between 1 and 100*/
/*Author: Bilal, Date: 12/08/2021*/
#include<stdio.h>

int main()
{
  int i, num[100];

  /*Fill the array num with numbers from 1 to 100*/
  for(i=0 ;i<100; i++)
  {
    num[i] = i + 1;
  }

  for(i=0 ;i<100; i++)
  {
    prinf("%d\n",num[i]);
  }

  return 0;
}
