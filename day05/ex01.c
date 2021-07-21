#include <stdio.h>

int main() {
    int num = 20;

    printf("%d\n", num >> 1); //10
    printf("%d\n", num >> 2); //5
    printf("%d\n", num >> 3); //2
    printf("%d\n", num); //20

	//num == 20
    printf("%d\n", num << 1); //40
    printf("%d\n", num << 2); //80
    printf("%d\n", num << 3); //160

    printf("-------------------------\n");
    printf("== 할당 연산 전 == \n");
    printf("%d\n", num); //20
    // 변수 공간에 할당(저장)된 값 자체를 변경하려면 할당 연산을 해야한다.

	//num = num + 1;
	//num += 1;

    printf("== 할당 연산 후 == \n");

	//오른쪽 왼쪽 변수가 같을경우에만 사용 가능
	//num = num << 1;
	num <<= 1;

    printf("%d\n", num); //40
    return 0;
}
