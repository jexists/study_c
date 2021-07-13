#include <stdio.h>
#define SIZE 20


int main() {

    char name[SIZE];
    int age;
    double weight;

    //문자열 복사 (string copy)
    strcpy(name, "이 름 좌");
    age = 21;
    weight = 40.5;

    printf("%s의 나이: %d살 \n", name, age);
    printf("몸무게: %.fkg\n", weight);

    return 0;
}
