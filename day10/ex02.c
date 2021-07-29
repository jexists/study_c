
#include <stdio.h>

int main() {

    long long *num1P;
    float *num2P;
    char *chP;

    long long num1 = 10;
    float num2 = 3.14F;
    char ch = 'a';

    num1P = &num1;
    num2P = &num2;
    chP = &ch;


    printf("--데이터가 저장된 지점의 주소값 -- \n");
    printf("num1P : %u\n", num1P);
    printf("num2P : %u\n", num2P);
    printf("chP : %u\n", chP);


    printf("--------------------\n");

    printf("--실제 데이터값 -- \n");
    printf("num1P : %d\n", num1);
    printf("num2P : %.2f\n", num2);
    printf("chP : %c\n", ch);

    printf("--------------------\n");

    printf("--실제 데이터값(포인터 사용) -- \n");
    printf("*num1P : %d\n", *num1P);
    printf("*num2P :%.2f\n", *num2P);
    printf("*chP : %c\n", *chP);

    *num1P = 1111;
    *num2P = 2324.6F;
    *chP = 'A';


    printf("--------------------\n");

    printf("--실제 데이터값(포인터 사용) -- \n");
    printf("*num1P : %d\n", *num1P);
    printf("*num2P :%.2f\n", *num2P);
    printf("*chP : %c\n", *chP);


    return 0;
}
