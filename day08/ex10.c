#include <stdio.h>
int main() {

   int sum = 0;

   for (int i=1; i<=20; i++) {
		//2�� ����� �ƴϰ� 3�� ����� �ƴ� ��
        if(i % 2 != 0 && i % 3 != 0) {
            //printf("%d\n", i);
            sum += i;
            printf("number %d\n", i);
        }
   }
   printf("=============\n");
   printf("�հ�: %d\n", sum);

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
    printf("�հ�: %d\n", sum);

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
    printf("�հ�: %d\n", sum);

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
    printf("�հ�: %d\n", sum);
    printf("���α׷� ����\n");
    return 0;
}
