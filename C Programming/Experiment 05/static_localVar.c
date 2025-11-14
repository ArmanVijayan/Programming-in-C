//Experiment 5.4. Declare a static local variable inside a function.
//Observe how its value persists across function calls.

#include <stdio.h>

void demo() {
    static int count = 0;
    int normal = 0;

    count++;
    normal++;

    printf("count (static) = %d, normal = %d\n", count, normal);
}

int main() {
    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    demo();
    demo();
    demo();

    return 0;
}
