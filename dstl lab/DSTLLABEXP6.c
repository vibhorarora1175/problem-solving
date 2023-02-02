// write a program to  print the truth table
#include <stdio.h>
int main()
{
  int n, i, j;
  printf("Enter value 1 ,2 ,3\n where 1 is for AND gate \n 2 is for OR gate\n 3 is for NOT gate  ");
  scanf("%d", &n);
  switch (n)
  {
  case 1:
    printf("The truth table for AND gate is :\n");
    for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 2; j++)
      {
        int c = i & j;
        printf("%d %d  %d\n", i, j, c);
      }
    }
    break;
  case 2:
    printf("The truth table for OR gate is :\n");
    for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 2; j++)
      {

        int c = i | j;
        printf("%d %d  %d\n", i, j, c);
      }
    }
    break;
  case 3:
    printf("The truth table for NOT gate is :\n");
    for (i = 0; i < 2; i++)
    {
      int c = !i;
      printf("%d  %d\n", i, c);
    }
  default:
    break;
  }
  return 0;
}