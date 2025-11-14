//Experiment 5.2. Declare a local variable inside a function and try to access it outside the function.
//Compare this with accessing the global variable from within the function.
int globalVar = 10;

void testFunction() {

    int localVar = 20;

    printf("Inside function:\n");
    printf("Global variable = %d\n", globalVar);
    printf("Local variable = %d\n", localVar);
}

int main() {
    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


    testFunction();

    printf("\nOutside function:\n");
    printf("Global variable = %d\n", globalVar);

    return 0;
}
