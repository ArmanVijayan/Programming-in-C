/*
Experiment 4.3.4
1
21
321
4321
54321
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
            printf("%d",(i-j+1));
        }
    }
    return 0;
}
