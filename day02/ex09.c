#include <stdio.h>
#define SIZE 20


int main() {

    char name[SIZE];
    int age;
    double weight;

    //���ڿ� ���� (string copy)
    strcpy(name, "�� �� ��");
    age = 21;
    weight = 40.5;

    printf("%s�� ����: %d�� \n", name, age);
    printf("������: %.fkg\n", weight);

    return 0;
}
