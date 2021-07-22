#include <stdio.h>

int main() {
    int year;
    int month;
    int date;

    printf("년도와 월을 입력하세요 ");
    scanf("%d %d", &year, &month);

    switch(month) {
        case 1:  case 3:  case 5:  case 7:
        case 8:  case 10:  case 12:
            date = 31;
            break;
        case 4:  case 6:  case 9:  case 11:
            date = 30;
            break;
        case 2:
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                date= 29;
            } else {
                date = 28;
            }
            break;
        default:
            printf("몇월달인지 정확하게 입력해주세요. \n");
    }

    printf("%d년도 %d월 %d일까지 있습니다.\n",year ,month, date);
    printf("프로그램 종료");
    return 0;
}
