//Experiment 4.3.6
/*
54321
4321
321
21
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
        for(j=a-i+1;j>0;j--)
        {
            printf("%d",j);
        }
    }
    return 0;
}
