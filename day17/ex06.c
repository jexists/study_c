



#include <stdio.h>
#include <string.h> //memset()
#include <stdlib.h> //malloc(), free()


void helloNumber(int number1) {

    printf("Hello, %d\n", number1);
}

int add (int n1, int n2) {
    int result = n1 + n2;

    return result;
}

int subtract (int n1, int n2) {
    int result = n1 - n2;

    return result;
}

int multiply (int n1, int n2) {
    int result = n1 * n2;

    return result;
}

int divide (int n1, int n2) {
    int result = n1 / n2;

    return result;
}

int mod (int n1, int n2) {
    int result = n1 % n2;

    return result;
}

int main() {

    helloNumber(10);
    helloNumber(20);
    helloNumber(30);


    add(11, 22);

    int resultNumber = add(11, 22);

    printf("resultNumber: %d\n", resultNumber);



    resultNumber = subtract(10, 8);

    printf("resultNumber: %d\n", resultNumber);



    resultNumber = multiply(10, 8);

    printf("resultNumber: %d\n", resultNumber);



    resultNumber = divide(10, 8);

    printf("resultNumber: %d\n", resultNumber);


    resultNumber = mod(10, 8);

    printf("resultNumber: %d\n", resultNumber);

    printf("add(11, 22): %d\n", add(11, 22));

    printf("subtract(11, 22): %d\n", subtract(11, 22));

    printf("multiply(11, 22): %d\n", multiply(11, 22));

    printf("divide(11, 22): %d\n", divide(11, 22));

    return 0;
}
