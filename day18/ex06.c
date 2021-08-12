

#include <stdio.h>
#include <string.h>

struct Person{
    char name[30];
    int age;
    char addr[100];
};

void displayPersonInfo(struct Person p) {
    printf("이름: %s\n", p.name);
    printf("나이: %d\n", p.age);
    printf("주소: %s\n", p.addr);
}

void displayPersonInfo2(struct Person *p) {
    printf("이름: %s\n", p->name);
    printf("나이: %d\n", p->age);
    printf("주소: %s\n", p->addr);
}

void setPerson(struct Person *p1) {

    strcpy(p1 -> name, "강승윤");
    p1-> age = 27;
    strcpy(p1 -> addr, "강북");



}




int main() {

    struct Person p1;
    struct Person p2;

    strcpy(p1.name, "유승호");
    p1.age = 28;
    strcpy(p1.addr, "서울시 신촌");

    displayPersonInfo(p1);

    printf("------------\n");

    displayPersonInfo((struct Person){"김수현", 32,"수원"});

    printf("------------\n");

    displayPersonInfo((struct Person){.name="여진구", .age=19, .addr="강남"});

    printf("------------\n");

    setPerson(&p2);

    displayPersonInfo2(&p2);


    printf("------------\n");

    displayPersonInfo(p2);

    return 0;
}
