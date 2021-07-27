

#include <stdio.h>

int main() {

   int num1 = 0;

   for (int i=0; i<=100; i++) {

        if(i % 3 == 0 && i % 5 == 0) {
            printf("더조은 아카데미\n");
        } else if (i % 3 == 0) {
            printf("더조은\n");
        } else if (i % 5 == 0) {
            printf("아카데미\n");
        } else {
            printf("%d\n", num1);
        }
        num1++;

   }


        printf("프로그램 종료\n");
    return 0;
}
