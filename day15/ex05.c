

#include <stdio.h>
#include <string.h>


struct Person {
    char name[20]; //�̸� ����ü ����[1]
    int age; //����
    char address[100]; //�ּ�

};

int main() {

    //����ü ���� ����� ����ü �ʱ�ȭ ���ÿ� �ϱ�
    //����ü �̸� =  type

    // strict ����ü�̸� ������

    struct Person person1 = {.name = "����ȣ", .age = 28, .address="����� ���빮�� ��õ��"};

    printf("=== ��� 1�� ���� === \n");
    printf("�̸�:%s\n", person1.name);
    printf("����:%d\n", person1.age);
    printf("�ּ�:%s\n", person1.address);

    printf("----------------------\n");


    struct Person person2 = {.name = "�����", .age = 32, .address="����� ��걸"};

    printf("=== ��� 2�� ���� === \n");
    printf("�̸�:%s\n", person2.name);
    printf("����:%d\n", person2.age);
    printf("�ּ�:%s\n", person2.address);



    return 0;
}


