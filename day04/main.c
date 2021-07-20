#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1 = 5;
    int n2 = 2;

    if (0 < n1 && n1 < 10) { //true true -> true
        printf("0 < n1 <10\n");
    }

    if (n1 < 0 || n2 == 2) { //false true -> true
        printf("n1이 0보다 작거나, n2는 2입니다.\n");
    }

    if (!(n1 > n2)) { //false
        printf("n1이 n2보다 크지 않습니다.\n n1이 n2보다 작거나 같습니다.\n");
    }


    return 0;
}
