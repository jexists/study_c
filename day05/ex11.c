
#include <stdio.h>

int main() {
    int month;
    int date;

    printf("몇월달인지 입력하세요 (1~12) ");
    scanf("%d", &month);

    switch(month) {
        case 1:  case 3:  case 5:  case 7:
        case 8:  case 10:  case 12:
            date = 31;
            break;
        case 4:  case 6:  case 9:  case 11:
            date = 30;
            break;
        case 2:
            date = 28;
            break;
        default:
            printf("몇월달인지 정확하게 입력해주세요. \n");
    }

    printf("%d 달은 %d일까지 있습니다.\n",month, date);
    printf("프로그램 종료");
    return 0;
}
