/*Function to eliminate the multiples of d (a number) from an array of 100 numbers*/
/*Author: Bilal, Date: 12/08/2021*/
void elim(int,int *);

void elim(int d, int *num)
{
  int i;
  /*Eliminating all multiples of d from num, except d itself*/
  for(i=1 ;i<100; i++)
  {
    if(num[i]%d == 0 && num[i]!=d)
    {
      num[i] = 0;
    }
  }
}
