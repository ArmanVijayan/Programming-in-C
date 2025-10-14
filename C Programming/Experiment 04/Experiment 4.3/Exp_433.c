//Experiment 4.3.3 – Continuous Increasing Numbers
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15


#include <stdio.h>
int main() {
    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int i, j, num = 1;
    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}
