


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    //���ڿ� �ڸ���
    //token ������ �ڸ�
    //strtok(����ڿ�, ���ع���)

    char s1[30] = "Tjoeun it Academy";


    char *pointer1 = strtok(s1, " ");

    //�߶� ���ڿ��� ������ ���� ������ �ݺ�
    // => �߶� ���ڿ��� ���� ���ȿ��� �ݺ�
    while(pointer1 != NULL) {
        //�߶� ���ڿ� ����ϱ�
        printf("pointer1: %s\n", pointer1);
        //���� ���ڿ��� �߶� �����͸� ��ȯ��
        //NULL������ �����ϸ� �ٷ� ������ strtok �Լ����� ó���ߴ�
        //���ڿ����� �߸� ���ڿ� ��ŭ ���� ���ڷ� �̵��� �� ���� ���ڿ��� �ڸ��� ��
        pointer1 = strtok(NULL, " ");
    }

    printf("-----------------\n");

    /*
    char *s2 = "Tjoeun it Academy";

    char *pointer2 = strtok(s2, " "); //ERROR

    while(pointer2 != NULL) {
        printf("pointer2: %s\n", pointer2);
        pointer2 = strtok(NULL, " ");
    }
    */

    printf("-----------------\n");

    char *s3 = malloc(sizeof(char) * 30);

    strcpy(s3, "Tjoeun it Academy");

    char *pointer3 = strtok(s3, " ");

    while(pointer3 != NULL) {
        printf("pointer3: %s\n", pointer3);
        pointer3 = strtok(NULL, " ");

    }

    free(s3);

    printf("-----------------\n");

    // ��¥�� �ð� �� �ڸ���

    char s4[30] = "2021-08-05T20:51:22";

    char *pointer4 = strtok(s4, "-T:");

    while(pointer4 != NULL) {
        printf("pointer4: %s\n", pointer4);
        pointer4 = strtok(NULL, "-T:");
    }

     printf("-----------------\n");

    // ��¥�� �ð� �� �ڸ���

    char s5[30] = "Tjoeun it Academy";

    //������ �迭: ������(����)���� �����ϴ� �迭
    char *pointerArray[10] = {NULL, };

    int i = 0;

    char *pointer5 = strtok(s5, " ");


    while(pointer5 != NULL) {
        pointerArray[i] = pointer5;
        i++;

        //printf("pointer5: %s\n", pointer5);
        // ���� ���ڿ��� �߶� ������ ��ȯ
        pointer5 = strtok(NULL, " ");
    }

    for (int j = 0; j < 10; j++) {
        if(pointerArray[j] != NULL){
            printf("%s\n", pointerArray[j]);
        }
    }


    return 0;
}
