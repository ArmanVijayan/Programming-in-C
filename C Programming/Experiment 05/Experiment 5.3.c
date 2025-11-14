//Experiment 5.3. Declare variables within different code blocks
//(enclosed by curly braces) and test their accessibility
//within and outside those blocks.

#include <stdio.h>

int main() {
    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


    int a = 10;
    printf("a = %d (accessible in main)\n", a);

    {
        int b = 20;
        printf("Inside Block 1: b = %d\n", b);
        printf("Inside Block 1: a = %d\n", a);
    }

    {
        // Block 2
        int c = 30;
        printf("Inside Block 2: c = %d\n", c);
        printf("Inside Block 2: a = %d\n", a);
    }

    return 0;
}
