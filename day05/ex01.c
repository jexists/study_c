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
    printf("== �Ҵ� ���� �� == \n");
    printf("%d\n", num); //20
    // ���� ������ �Ҵ�(����)�� �� ��ü�� �����Ϸ��� �Ҵ� ������ �ؾ��Ѵ�.

	//num = num + 1;
	//num += 1;

    printf("== �Ҵ� ���� �� == \n");

	//������ ���� ������ ������쿡�� ��� ����
	//num = num << 1;
	num <<= 1;

    printf("%d\n", num); //40
    return 0;
}
