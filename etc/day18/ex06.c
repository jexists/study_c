#include <stdio.h>
#include <string.h>

struct Person{
  char name[30];
  int age;
  char addr[100];
};
void displayPersonInfo(struct Person p){
  printf("이름 : %s\n", p.name);
  printf("나이 : %d\n", p.age);
  printf("주소 : %s\n", p.addr);
}
void displayPersonInfo2(struct Person *p){
  printf("이름 : %s\n", p -> name);
  printf("나이 : %d\n", p -> age);
  printf("주소 : %s\n", p -> addr);
}
void setPerson(struct Person *p1){
  strcpy(p1 -> name, "더조은 학원");
  p1 -> age = 10;
  strcpy(p1 -> addr, "서울시 마포");
}
int main(){
  struct Person p1;
  struct Person p2;

  strcpy(p1.name, "더조은");
  p1.age = 20;
  strcpy(p1.addr, "서울시 신촌");

  displayPersonInfo(p1);

  printf("---------------------------\n");

  displayPersonInfo((struct Person){"학원", 30, "인천"});
  printf("---------------------------\n");

  displayPersonInfo((struct Person){.name="이순신", .age=48, .addr="서울"});
  printf("---------------------------\n");

  setPerson(&p2);
  displayPersonInfo2(&p2);
  printf("---------------------------\n");

  return 0;
}


