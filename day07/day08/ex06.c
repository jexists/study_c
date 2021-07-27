

#include <stdio.h>

int main() {

    int gender; // 성별: 남자-1, 여자-1
    int age; //나이
    int isStudent; //학생이면-1, 아니면-0

    printf("성별, 나이, 학생 여부를 입력하세요 :");
    scanf("%d %d %d", &gender, &age, &isStudent);

    printf("안녕하세요\n");
    printf("문을 엽니다\n");

    if(gender == 2) { //여자인경우
        printf("문을 닫습니다.\n");
        return 0;
    }

    if(age < 30) { //30세 미만인 경우
        printf("문을 닫습니다.\n");
        return 0;
    }

    if(isStudent == 0) { //g학생이 아닌 경우
        printf("문을 닫습니다.\n");
        return 0;
    }

    printf("프로그램 종료\n");
    return 0;
}
