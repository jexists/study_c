#include <stdio.h>

int main() {

    int i = 0;
    int j = 0;
    //�ܺ� for ��: outer for loop
    for(i = 2; i <= 9; i++) {
        printf("\n----------%d��---------\n\n", i);
        //���� for ��: inner for loop
        for(j = 1; j <= 9; j++) {
            printf("%d X %d = %d\n",  i, j, i * j);
        }
        //printf("-----------------------\n\n");
    }
    printf("\n���� for ���� ���� �� i�� j�� ��\n");
    printf("i: %d, j: %d\n", i, j);

    return 0;
}
