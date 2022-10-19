#include <stdio.h>

int main()
{
  int n, i;
  float a, sum, Ave;

  printf("Average of of n numbers of integers\n");
  printf("How many integers? ");
  scanf("%d", &n);

  printf("\nInsert %d integers: ", n);
  for (i =  1; i <= n; ++i)
    {
      scanf("%f", &a);
      sum = sum + a;
    }
  Ave = sum/n;
  printf("Average is %f", Ave);
  return (0);
}