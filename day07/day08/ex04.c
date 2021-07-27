


#include <stdio.h>
#include <stdbool.h>

int main() {

    int num1 = 0;

    //외부 반복문을 빠져나올지 결정하는 변수

    bool flag = false;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if (num1 == 20) {
                flag = true;
                break;
            }
            num1++;
            printf("num1: %d\n", num1);
        }

        printf("---------------\n");
        if(flag == true) {
            break;
        }
    }
    printf("=================\n");
    printf("num1: %d\n", num1);



    return 0;
}
