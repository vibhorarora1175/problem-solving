#include <stdio.h>
void cartesian(int a[], int b[], int n1, int n2)
{
  int i, j;
  printf("Cartesian product of set A and set B is:\n ");
  for (i = 0; i < n1; i++)
  {
    for (j = 0; j < n2; j++)
    {
      printf("(%d,%d),", a[i], b[j]);
    }
  }
}
int main()
{
  int n1, n2, a[10], b[10], i, j;
  printf("Enter the number of elements of set A and set B");
  scanf("%d %d", &n1, &n2);
  printf("Enter the set A");
  for (i = 0; i < n1; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter the set B");
  for (i = 0; i < n2; i++)
  {
    scanf("%d", &b[i]);
  }
  cartesian(a, b, n1, n2);
  return 0;
}