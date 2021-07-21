
#include <stdio.h>

int main() {

/*
switch(변수/수식) {
	case 값1:
		실행문/수행문...;
		break;
	case 값3:
		실행문/수행문...;
		break;
	case 값3:
		실행문/수행문...;
		break;
	default:
		실행문/수행문...;
}
*/

    int num1;

    printf("정수를 입력하세요: ");
    scanf("%d", &num1);

    switch(num1) {
        case 1:
            printf("입력하신 숫자는 1입니다. \n");
            break;
        case 2:
            printf("입력하신 숫자는 2입니다. \n");
            if (1) { //true
                break;
            }
        case 3:
            printf("입력하신 숫자는 3입니다. \n");
            break;
        default:
            printf("입력하신 숫자는 1,2,3 중에 없습니다. \n");
    }

    printf("프로그램 종료");
    /*
    if (num1 == 1) {
        printf("입력하신 숫자는 1입니다. \n");
    } else if (num1 == 2) {
        printf("입력하신 숫자는 2입니다. \n");
    } else if (num1 == 3) {
        printf("입력하신 숫자는 3입니다. \n");
    } else {
        printf("입력하신 숫자는 1,2,3 중에 없습니다. \n");
    }
    */
    return 0;
}
