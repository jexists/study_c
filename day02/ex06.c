#include <stdio.h>

int main() {

    char ch;
    ch = 'A';
    printf("ch: %c\n", ch);
    printf("ch: %d\n", ch); //ASCII CODE

    ch = 'a';
    printf("ch: %c\n", ch);
    printf("ch: %d\n", ch);

    ch = '0';
    printf("ch: %c\n", ch);
    printf("ch: %d\n", ch);


    // �ҹ��� -> �빮�� ����
    ch = 'a';
    printf("ch: %c\n", ch);
    ch = ch - ('a'-'A');
    printf("ch: %c\n", ch);
    printf("ch: %d\n", ch);

    // �빮�� -> �ҹ��� ����
    ch = 'G';
    printf("ch: %c\n", ch);
    ch = ch + ('a'-'A');
    printf("ch: %c\n", ch);
    printf("ch: %d\n", ch);

    //���� ����� ������ ����
    char number1;
    char number2;
    char result;

    number1 = '7';
    number2 = '2';
    result = number1 - number2;
    printf("result: %d\n", result);

    result = '9' - '3';
    printf("result: %d\n", result);



    return 0;

}
