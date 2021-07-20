
#include <stdio.h>

int main() {
    int n1, n2;
    char op;
    int result;


    printf("정수 2개와 부호(+, -, x, /, %)를 입력하세요 :");
    scanf("%d %d %c", &n1, &n2, &op);


    result = (op == '+') ? (n1 + n2) : (op == '-') ? (n1 - n2) : (op == 'x') ? (n1 * n2) : (op == '/') ? (n1 / n2) : (op == '%') ? (n1 % n2) : printf("부호를 확인해주세요.\n");


    printf("결과 %d\n", result);

    printf("--------------------------------\n");



    return 0;
}


