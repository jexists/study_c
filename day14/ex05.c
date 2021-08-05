

#include <stdio.h>

int main() {

    //정수를 문자열로 변환하기
    //sprintf(결과를 저장할 문자열, 변환문자, 정수);

    char s1[10];
    int number = 132;

    sprintf(s1, "%d", number);

    printf("s1: %s\n",s1);

    printf("-----------------\n");

    char s2[10];
    int number2 = 132;

    sprintf(s2, "0x%x", number2);
    printf("s2: %s\n",s2);


    printf("-----------------\n");

    char s3[10];
    float fNumber = 13.24323f;

    sprintf(s3, "%f", fNumber);
    printf("s3: %s\n",s3);



    printf("-----------------\n");

    char s4[10];
    float fNumber2 = 13.24323f;

    sprintf(s4, "%e", fNumber2);
    printf("s4: %s\n",s4);


    return 0;
}
