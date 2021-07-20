
#include <stdio.h>

int main() {
    int number = 5;


    printf("%s\n", number ==11 ? "11입니다." : "11이 아닙니다.");

    printf("--------------------------------\n");

    int num, abs;

    printf("정수를 입력하세요 :");
    scanf("%d", &num);

    abs = num > 0 ? num : -num;

    printf("num의 절댓값 %d\n", abs);


    printf("--------------------------------\n");

    int n1;
    int n2;
    int n3;
    int max;

    printf("정수 3개를 입력하세요 :");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1> n3) {
        max = n1;
    } else if(n2 > n3) {
        max = n2;
    } else {
        max = n3;
    }

    printf("3 수 중 더 큰 수는 %d 입니다.\n", max);


    max = (n1 > n2 && n1> n3) ? n1 : (n2 > n3) ? n2 : n3;

    printf("3 수 중 더 큰 수는 %d 입니다.\n", max);



    return 0;
}

