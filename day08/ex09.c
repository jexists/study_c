

#include <stdio.h>

int main() {

   int num1 = 0;

   for (int i=0; i<=100; i++) {

        if(i % 3 == 0 && i % 5 == 0) {
            printf("������ ��ī����\n");
        } else if (i % 3 == 0) {
            printf("������\n");
        } else if (i % 5 == 0) {
            printf("��ī����\n");
        } else {
            printf("%d\n", num1);
        }
        num1++;

   }


        printf("���α׷� ����\n");
    return 0;
}
