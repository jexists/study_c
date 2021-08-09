

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

    strcpy(p1.name, "유승호");
    p1.age = 28;
    p1.height = 180;
    strcpy(p1.address,"서대문구");



    printf("이름:%s\n", p1.name);
    printf("나이:%d\n", p1.age);
    printf("키:%d\n", p1.height);
    printf("주소:%s\n", p1.address);

    printf("----------------------\n");



    return 0;
}


