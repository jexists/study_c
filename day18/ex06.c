

#include <stdio.h>
#include <string.h>

struct Person{
    char name[30];
    int age;
    char addr[100];
};

void displayPersonInfo(struct Person p) {
    printf("�̸�: %s\n", p.name);
    printf("����: %d\n", p.age);
    printf("�ּ�: %s\n", p.addr);
}

void displayPersonInfo2(struct Person *p) {
    printf("�̸�: %s\n", p->name);
    printf("����: %d\n", p->age);
    printf("�ּ�: %s\n", p->addr);
}

void setPerson(struct Person *p1) {

    strcpy(p1 -> name, "������");
    p1-> age = 27;
    strcpy(p1 -> addr, "����");



}




int main() {

    struct Person p1;
    struct Person p2;

    strcpy(p1.name, "����ȣ");
    p1.age = 28;
    strcpy(p1.addr, "����� ����");

    displayPersonInfo(p1);

    printf("------------\n");

    displayPersonInfo((struct Person){"�����", 32,"����"});

    printf("------------\n");

    displayPersonInfo((struct Person){.name="������", .age=19, .addr="����"});

    printf("------------\n");

    setPerson(&p2);

    displayPersonInfo2(&p2);


    printf("------------\n");

    displayPersonInfo(p2);

    return 0;
}
