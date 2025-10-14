// Experiment 4.3.7
/*
12345
1234
123
12
1
*/

#include<stdio.h>
int main()
{
    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int i,j,a;
    printf("\nEnter the value:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(a-i+1);j++)
        {
            printf("%d",j);
        }
    }
    return 0;
}
