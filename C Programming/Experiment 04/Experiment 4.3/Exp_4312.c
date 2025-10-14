//Expmeriment  4.3.12
/*
54321
5432
543
54
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
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=n;j>=i;j--)
        {
            printf("%d",j);
        }
    }
    return 0;
}