#include <stdio.h>

int main() {
    int num = 20;
    //1 0 1 0 0

    printf("%d\n", num >> 1); //10
    //0 1 0 1 0
    printf("%d\n", num >> 2); //5
    //0 0 1 0 1
    printf("%d\n", num >> 3); //2
    //0 0 0 1 0
    return 0;
}
