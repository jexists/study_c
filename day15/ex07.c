
#include <stdio.h>
#include <string.h>


//이름이 없는 구조체 : 익명 구조체 : anonymous structure

typedef struct {
    char name[30];
    int age;
    char addr[100];

} Person; //별명/별칭: alias

int main() {

    Person p1 = {
        .name = "김수현",
        .age = 34,
        .addr = "서울"
    };



    printf("이름:%s\n", p1.name);
    printf("나이:%d\n", p1.age);
    printf("주소:%s\n", p1.addr);

    printf("----------------------\n");



    return 0;
}


