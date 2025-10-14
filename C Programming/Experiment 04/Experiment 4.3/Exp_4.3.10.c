//Experiment 4.3.10
/*
5
45
345
2345
12345
*/
#include<stdio.h>
int main()
{
    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

int i,j,n;
printf("\nEnter the value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n");
for(j=n-i;j<=n;j++)
{
printf("%d",j);
}
}
return 0;
}
