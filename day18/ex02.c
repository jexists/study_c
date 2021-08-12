


#include <stdio.h>
#include <stdlib.h>

//char type pointer => 문자열을 받을 수 있다.
//문자열일 경우 *필요없이 나온다.
void helloString(char *s1) {
    printf("Hello, %s\n", s1);
}


void helloString2(char s[]) {
    printf("Hello, %s\n", s);
}

int main() {

    helloString("C언어");

    printf("---------------------------\n");

    char s2[10] = "program";

    helloString2(s2);

    helloString2("algorithm");

    return 0;
}
