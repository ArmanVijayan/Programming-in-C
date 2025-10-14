//Experiment 4.3.11
/*
12345
2345
345
45
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
        for(j=i;j<=n;j++)
        {
            printf("%d",j);
        }
    }
    return 0;
}
