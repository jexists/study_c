
#include <stdio.h>
#include <stdlib.h>

int main() {
    char s1[20];
    //sprintf() format을 지정해서 문자열을 생성

    sprintf(s1, "Hello, %s", "CLANG!!");

    printf("s1: %s\n", s1);
    printf("-----------------\n");

    char s2[30];
    sprintf(s2, "%c %d %f %e", 'a', 11, 22.45f, 1.123456e-21f);

    printf("s2: %s\n", s2);
    printf("-----------------\n");

    // char 20개 크기만큼 Heap 메모리 영역에 메모리 공간 확보
    // 포인터 변수 s3에 그 주소값을 저장(할당)함
    char *s3 = malloc(sizeof(char) * 30);

    sprintf(s3, "Hello, %s", "programming!!!");

    printf("s3: %s\n", s3);

    free(s3);

    printf("-----------------\n");

    char *s4 = malloc(sizeof(char) * 30);
    sprintf(s4, "%c %d %f %e", 'b', 22, 32.154, 1.23456e-21f);
    printf("s4: %s\n", s4);
    free(s4);

    printf("-----------------\n");

    char s5[20];
    sprintf(s5, "%s 제 %d 번", "교향곡", 2);

    printf("s5: %s\n", s5);

    printf("-----------------\n");

    char s6[30];
    sprintf(s6,"%d, %d, %d, %c, %s" , 11, 22, 33, 'g', "더좋은");

    printf("s6: %s\n", s6);
    return 0;
}
