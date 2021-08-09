

#include <stdio.h>
#include <string.h>


//구조체: structure;
//(서로 관계있는) 변수들을 모아서 한꺼번에 관리함

struct Student {
    char name[20]; //이름 구조체 변수[1]
    int age; //나이
    char addr[100]; //주소

};


struct Person {

    char name[20]; //이름 구조체 멤버/변수[1]
    int age; //나이 구조체 멤버/변수[2]
    int height; //키 구조체 멤버/변수[3]
    int weight; //몸무게 구조체 멤버/변수[4]
    char addr[100]; //주소 구조체 멤버/변수[5]

} person1;

int main() {


    //구조체 변수 선언
    //name, age, addr 이 3개의 변수들을 한꺼번에 묶어서 메모리에 올렸을때
    //그 주소값을 저장하는 변수

    struct Student std1;
    struct Student std2;

    // . : 접근연산자 - access operator

    strcpy(std1.name, "유승호");
    std1.age = 30;
    strcpy(std1.addr, "서울시 마포구 창천동");

    printf("=== 학생 1의 정보 === \n");
    printf("이름:%s\n", std1.name);
    printf("나이:%d\n", std1.age);
    printf("주소:%s\n", std1.addr);


    printf("----------------------\n");

    strcpy(std2.name, "김수현");
    std2.age = 32;
    strcpy(std2.addr, "서울시 용산구 한남동");

    printf("=== 학생 2의 정보 === \n");
    printf("이름:%s\n", std2.name);
    printf("나이:%d\n", std2.age);
    printf("주소:%s\n", std2.addr);



    printf("----------------------\n");

    strcpy(person1.name, "아이유");
    person1.age = 29;
    person1.height = 163;
    person1.weight = 45;
    strcpy(person1.addr, "서울시 서대문구 신천로");

    printf("=== 사람 1의 정보 === \n");
    printf("이름:%s\n", person1.name);
    printf("나이:%d\n", person1.age);
    printf("키:%d\n", person1.height);
    printf("몸무게:%d\n", person1.weight);
    printf("주소:%s\n", person1.addr);













    printf("----------------------\n");



    char name1[20] = "유승호"; //이름
    int age1 = 28; //나이
    char addr1[100] ="서울시 마포구 창천동"; //주소

    char name2[20]; //이름
    int age2; //나이
    char addr2[100]; //주소

    char name3[20]; //이름
    int age3; //나이
    char addr3[100]; //주소


    printf("----------------------\n");


    return 0;
}

