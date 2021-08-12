




#include <stdio.h>

// ±¸Á¶Ã¼

struct Calc{
    int(*pointer)(int, int);
};


int add(int n1, int n2) {
    return n1 + n2;
}

int sub(int n1, int n2) {
    return n1 - n2;
}

int mul(int n1, int n2) {
    return n1 * n2;
}

int div(int n1, int n2) {
    return n1 / n2;
}

int main() {


    struct Calc c;

    c.pointer = add;

    printf("add  %d\n", c.pointer(11,22));

    c.pointer = sub;

    printf("sub  %d\n", c.pointer(33,22));



    printf("------------\n");


    return 0;
}

