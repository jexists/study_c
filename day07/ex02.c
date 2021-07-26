#include <stdio.h>

int main() {

    int i = 0;
    int j = 0;
    //외부 for 문: outer for loop
    for(i = 2; i <= 9; i++) {
        printf("\n----------%d단---------\n\n", i);
        //내부 for 문: inner for loop
        for(j = 1; j <= 9; j++) {
            printf("%d X %d = %d\n",  i, j, i * j);
        }
        //printf("-----------------------\n\n");
    }
    printf("\n이중 for 문이 끝난 후 i와 j의 값\n");
    printf("i: %d, j: %d\n", i, j);

    return 0;
}
