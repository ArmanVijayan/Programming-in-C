//Experiment 3.1: Write a C-program to check whether a number is even or odd.
#include <stdio.h>
int main() {

    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    if (a%2==0) {
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }
    return 0;
}