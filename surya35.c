#include<stdio.h>

  int main()
  {
    int i = 1;
    int fact = 1;

    while(i<=5)
{
    fact = fact * i;
    i = i + 1;

}
     printf("%d\n",fact);
     
     return 0;

  }