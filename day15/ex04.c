

#include <stdio.h>
#include <string.h>


//����ü: structure;
//(���� �����ִ�) �������� ��Ƽ� �Ѳ����� ������

struct Student {
    char name[20]; //�̸� ����ü ����[1]
    int age; //����
    char addr[100]; //�ּ�

};


struct Person {

    char name[20]; //�̸� ����ü ���/����[1]
    int age; //���� ����ü ���/����[2]
    int height; //Ű ����ü ���/����[3]
    int weight; //������ ����ü ���/����[4]
    char addr[100]; //�ּ� ����ü ���/����[5]

} person1;

int main() {


    //����ü ���� ����
    //name, age, addr �� 3���� �������� �Ѳ����� ��� �޸𸮿� �÷�����
    //�� �ּҰ��� �����ϴ� ����

    struct Student std1;
    struct Student std2;

    // . : ���ٿ����� - access operator

    strcpy(std1.name, "����ȣ");
    std1.age = 30;
    strcpy(std1.addr, "����� ������ âõ��");

    printf("=== �л� 1�� ���� === \n");
    printf("�̸�:%s\n", std1.name);
    printf("����:%d\n", std1.age);
    printf("�ּ�:%s\n", std1.addr);


    printf("----------------------\n");

    strcpy(std2.name, "�����");
    std2.age = 32;
    strcpy(std2.addr, "����� ��걸 �ѳ���");

    printf("=== �л� 2�� ���� === \n");
    printf("�̸�:%s\n", std2.name);
    printf("����:%d\n", std2.age);
    printf("�ּ�:%s\n", std2.addr);



    printf("----------------------\n");

    strcpy(person1.name, "������");
    person1.age = 29;
    person1.height = 163;
    person1.weight = 45;
    strcpy(person1.addr, "����� ���빮�� ��õ��");

    printf("=== ��� 1�� ���� === \n");
    printf("�̸�:%s\n", person1.name);
    printf("����:%d\n", person1.age);
    printf("Ű:%d\n", person1.height);
    printf("������:%d\n", person1.weight);
    printf("�ּ�:%s\n", person1.addr);













    printf("----------------------\n");



    char name1[20] = "����ȣ"; //�̸�
    int age1 = 28; //����
    char addr1[100] ="����� ������ âõ��"; //�ּ�

    char name2[20]; //�̸�
    int age2; //����
    char addr2[100]; //�ּ�

    char name3[20]; //�̸�
    int age3; //����
    char addr3[100]; //�ּ�


    printf("----------------------\n");


    return 0;
}

