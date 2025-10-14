// Experiment 4.3.13
/*
        5
      5 4 5
    5 4 3 4 5
  5 4 3 2 3 4 5
5 4 3 2 1 2 3 4 5
  5 4 3 2 3 4 5
    5 4 3 4 5
      5 4 5
        5
*/

#include<stdio.h>
int main()
{
  printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
  printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

  int i,j,n;
  printf("\nEnter the value:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("\n");

    for(j=1;j<=n-i;j++)
    {
      printf("  ");
    }
    for(j=n;j>n-i;j--)
    {
      printf(" %d",j);
    }
    for(j=n-i+2;j<n+1;j++)
    {
      printf(" %d",j);
    }
  }
  for(i=1;i<=n;i++)
  {
    printf("\n");

    for(j=1;j<=i;j++)
    {
      printf("  ");
    }
    for(j=n;j>i;j--)
    {
      printf(" %d",j);
    }
    for(j=i+2;j<=n;j++)
    {
      printf(" %d",j);
    }

  }
  return 0;
}
