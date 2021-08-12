


#include <stdio.h>


int add(int n1, int n2) {
    return n1 + n2;
}

int multiply(int n1, int n2) {
    return n1 * n2;
}

void greeting() {
    printf("Hello, \n");
}

void numberToString(int n, char *s1){
    sprintf(s1, "%d", n);
}

int main() {

    char s[20];


    void(*pointer)();
    void(*pointer2)(int, char *);


    pointer = greeting;

    pointer2 = numberToString;

    pointer();

    pointer2(100, s);


    printf("\n s: %s\n", s);





    printf("------------\n");




    int(*pointer1)(int, int);

    pointer1 = add;

    printf("add: %d\n", pointer1(2,3));


    printf("------------\n");

    pointer1 = multiply;


    printf("multiply: %d\n", pointer1(2,3));



    return 0;
}
