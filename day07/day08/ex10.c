#include <stdio.h>
int main() {

   int sum = 0;

   for (int i=1; i<=20; i++) {
		//2의 배수도 아니고 3의 배수도 아닌 수
        if(i % 2 != 0 && i % 3 != 0) {
            //printf("%d\n", i);
            sum += i;
            printf("number %d\n", i);
        }
   }
   printf("=============\n");
   printf("합계: %d\n", sum);

   printf("-----------------------\n");

   sum = 0;
   for (int i=1; i<=20; i++) {
        if(!(i % 2 == 0 || i % 3 == 0)) {
            //printf("%d\n", i);
            sum += i;
            printf("number %d\n", i);
        }
    }
    printf("=============\n");
    printf("합계: %d\n", sum);

    printf("-----------------------\n");

	sum = 0;
    for (int i=1; i<=20; i++) {
        if(i % 2 != 0 || i % 3 != 0) {
            //printf("%d\n", i);
            sum += i;
            printf("number %d\n", i);
        }
    }
    printf("=============\n");
    printf("합계: %d\n", sum);

    printf("-----------------------\n");

	sum = 0;
    for (int i=1; i<=20; i++) {
        if(!(i % 2 == 0 && i % 3 == 0)) {
            //printf("%d\n", i);
            sum += i;
            printf("number %d\n", i);
        }
    }
    printf("=============\n");
    printf("합계: %d\n", sum);
    printf("프로그램 종료\n");
    return 0;
}
