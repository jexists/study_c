
#include <stdio.h>
#include <string.h> //strcpy()
#include <stdlib.h> //malloc(), free()

typedef struct _Person {
    char name[20];
    int age;
    char addr[100];
} Person;

int main() {
    Person *p1 = malloc(sizeof(Person));

    strcpy(p1 -> name, "����ȣ");

    p1 -> age = 22;
    strcpy(p1 -> addr, "����� ��걸");

    printf("�̸�: %s\n", p1 -> name);
    printf("����: %d\n", p1 -> age);
    printf("�ּ�: %s\n", p1 -> addr);

    free(p1);
    return 0;
}
