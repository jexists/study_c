

#include <stdio.h>
#include <string.h>


struct Person {
    char name[20]; //이름 구조체 변수[1]
    int age; //나이
    char address[100]; //주소

};

int main() {

    //구조체 변수 선언과 구조체 초기화 동시에 하기
    //구조체 이름 =  type

    // strict 구조체이름 변수명

    struct Person person1 = {.name = "유승호", .age = 28, .address="서울시 서대문구 신천로"};

    printf("=== 사람 1의 정보 === \n");
    printf("이름:%s\n", person1.name);
    printf("나이:%d\n", person1.age);
    printf("주소:%s\n", person1.address);

    printf("----------------------\n");


    struct Person person2 = {.name = "김수현", .age = 32, .address="서울시 용산구"};

    printf("=== 사람 2의 정보 === \n");
    printf("이름:%s\n", person2.name);
    printf("나이:%d\n", person2.age);
    printf("주소:%s\n", person2.address);



    return 0;
}


