


#include <stdio.h>
#include <stdlib.h>

//char type pointer => ���ڿ��� ���� �� �ִ�.
//���ڿ��� ��� *�ʿ���� ���´�.
void helloString(char *s1) {
    printf("Hello, %s\n", s1);
}


void helloString2(char s[]) {
    printf("Hello, %s\n", s);
}

int main() {

    helloString("C���");

    printf("---------------------------\n");

    char s2[10] = "program";

    helloString2(s2);

    helloString2("algorithm");

    return 0;
}
