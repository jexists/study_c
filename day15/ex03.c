
#include <stdio.h>
#include <string.h>

int main() {

    //���ڿ��� �ϳ��� �̵��ϸ鼭 2���ھ� ���

    char text[30]="hello";
    int length;

    length = strlen(text);

    //2���ھ� ����ϹǷ�
    //���ڿ��� ������ �ѱ��� �ձ����� �ݺ���

    for(int i = 0; i < length -1; i++) {


        printf("%c%c\n", text[i], text[i+1]);
    }


    printf("----------------------\n");


    for(int i = 0; i < length -2; i++) {


        printf("%c%c%c\n", text[i], text[i+1], text[i+2]);
    }

    printf("----------------------\n");


    return 0;
}

