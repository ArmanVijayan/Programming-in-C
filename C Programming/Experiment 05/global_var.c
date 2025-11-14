//Experiment 5.1: Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>

int count = 0;

void increment();
void display();

int main() {

    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Initial value of count = %d\n", count);
    increment();
    display();
    increment();
    display();
    return 0;
}
void increment() {
    count++;
    printf("Count incremented to %d\n", count);
}
void display() {
    printf("Current value of count = %d\n", count);
}
