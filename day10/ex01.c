#include <stdio.h>

int main() {

    int *numberPointer; //주소를 저장하는 공간 확보 (주소만 대입가능)
    int number = 11; //데이터를 저장할 공간 확보

    //number라는 이름표(변수)가 붙은 (메모리 공간의 주소를
    //numberPointer에 저장
    numberPointer = &number;

    printf("number의 주소값: %u\n", numberPointer); //number의 주소값: 6422036

    printf("22하기 전\n");
    printf("number: %d\n", number); //number: 11


    //numberPointer 저장하고 있는 주소지에 가서 그 공간에 22를 저장함 (역참조)
    *numberPointer = 22; //(앞에 변수타입이 없을 경우 => 값 대입가능)
    //number = 22; (위에랑 같은 결과 나옴)

	printf("22하기 후\n");
	//number라는 변수가 붙은 공간의 값을 출력함
    printf("number: %d\n", number); // number: 22

	//numberPointer가 저장하고 있는 주소지에 가서 그 공간에 있는 값 출력
	printf("number: %d\n", *numberPointer); // number: 22

    return 0;
}
