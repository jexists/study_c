
#include <stdio.h>
#include <stdlib.h>
int main() {

    int *numP;

    numP = malloc(sizeof(int)); //

    *numP = 333; //�ּҿ� �ִ� ������ ������ ���� ����

    printf("*numP: %d\n", *numP);

    free(numP); //�޸� �ݳ�
    return 0;
}
