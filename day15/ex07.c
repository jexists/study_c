
#include <stdio.h>
#include <string.h>


//�̸��� ���� ����ü : �͸� ����ü : anonymous structure

typedef struct {
    char name[30];
    int age;
    char addr[100];

} Person; //����/��Ī: alias

int main() {

    Person p1 = {
        .name = "�����",
        .age = 34,
        .addr = "����"
    };



    printf("�̸�:%s\n", p1.name);
    printf("����:%d\n", p1.age);
    printf("�ּ�:%s\n", p1.addr);

    printf("----------------------\n");



    return 0;
}


