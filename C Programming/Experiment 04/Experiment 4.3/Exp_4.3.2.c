/* Experiment 4.3.2 – Increasing Numbers in Each Row
1
12
123
1234
12345
*/

#include <stdio.h>
int main()
{

    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

int i, j;
for(i=1; i<=5; i++) {
for(j=1; j<=i; j++) {
printf("%d", j);
}
printf("\n");
}
return 0;
}
