
#include <stdio.h>
#include <stdlib.h> //malloc, free
#include <string.h> //memset (memory set)

int main() {

    long long *numP = malloc(sizeof(long long)); //8byte

    //numP �ּ����� 8����Ʈ ũ�⸸ŭ ������ Ȯ���ؼ� 0x27�� ����
    memset(numP, 0x27, 8); //16���� 27�� 8�� ����

    printf("0x%20x\n", *numP); //16���� �ޱ�

    free(numP); //�޸� �ݳ�
    return 0;
}
