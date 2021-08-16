#include <stdio.h>
#include <string.h>  // strcpy()
#include <stdlib.h>  // malloc(), free()

/*
 구조체를 포인터로 선언할 수 있음
 malloc 함수로 동적 메모리를 할당함

*/
struct Person{
  char name[20];
  int age;
  char addr[100];
};


int main(){
  struct Person *pt1 = malloc(sizeof(struct Person));

  // 화살표 연산자로 구조체 멤버에 접근해서 값을 할당함
  strcpy(pt1 -> name, "이순신");
  pt1 -> age = 48;
  strcpy(pt1 -> addr, "서울시 서대문구");

  printf("이름 : %s\n", pt1 -> name);
  printf("나이 : %d\n", pt1 -> age);
  printf("주소 : %s\n", pt1 -> addr);

  free(pt1);

  return 0;
}



