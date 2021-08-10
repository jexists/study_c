


#include <stdio.h>
#include <string.h>


struct Person {
    char name[20];
    int age;
    char addr[100];

};

//구조체 Person을 반환하는 함수
struct Person getPerson() {
    struct Person p;

    strcpy(p.name, "유승호");
    p.age = 28;
    strcpy(p.addr, "서울시 마포구");

    return p;
};

int main() {

    struct Person p1;
    p1 = getPerson();


    printf("이름: %s\n", p1.name);
    printf("나이: %d\n", p1.age);
    printf("주소: %s\n", p1.addr);


    return 0;
}

