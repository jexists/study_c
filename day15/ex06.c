

#include <stdio.h>
#include <string.h>


typedef struct Person2 {
    char name[20];
    int age;
    int height;
    char address[100];

} Person;

int main() {

    Person p1;

    strcpy(p1.name, "����ȣ");
    p1.age = 28;
    p1.height = 180;
    strcpy(p1.address,"���빮��");



    printf("�̸�:%s\n", p1.name);
    printf("����:%d\n", p1.age);
    printf("Ű:%d\n", p1.height);
    printf("�ּ�:%s\n", p1.address);

    printf("----------------------\n");



    return 0;
}


