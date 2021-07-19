#include <stdio.h>

int main() {

    char c1 = 'a';

    //c1에 저장된 data는 char type이나 char type보다 큰 자료형에 저장 할 수 있음.
    //=> char, unsigned char
    //=> short, unsigned short
    //=> int, unsigned int
    //=> long, unsigned long
    //=> long long, unsigned long long

    int num2 = c1; //92


    printf("%c\n", num2); //a

    return 0;
}
