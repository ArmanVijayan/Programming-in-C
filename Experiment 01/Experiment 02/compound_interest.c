//Experiment 2.3: Write a program to calculate Compound Interest.

#include <stdio.h>
#include <math.h>

int main() {
    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    float p, r, t, a, ci;

    printf("Enter the Principal amount: ");
    scanf("%f", &p);

    printf("Enter the Rate of Interest (in %%): ");
    scanf("%f", &r);

    printf("Enter the Time (in years): ");
    scanf("%f", &t);


    a = p * pow((1 + r / 100), t);

    ci = a - p;

    printf("\nFinal Amount (A) = %.2f\n", a);
    printf("Compound Interest (CI) = %.2f\n", ci);

    return 0;
}
