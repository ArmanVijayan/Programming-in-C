//Experiment 2.1:WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.

#include <stdio.h>

int main() {
    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


    int l, w, a, peri;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &w);

    a = l * w;
    peri = 2 * (l + w);

    printf("\nThe area of the rectangle is: %d\n", a);
    printf("The perimeter of the rectangle is: %d\n", peri);

    return 0;

}