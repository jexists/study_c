


#include <stdio.h>

int main() {


    int sum = 0;
    int i;

    for (i = 1; i <= 10; i++ ) {
        sum = sum + i;
        printf("1���� %d������ ��: %d\n", i, sum);
    }

    printf("====================\n");

    printf("1���� %d������ ��: %d\n", i, sum);
    //1���� 11������ ��: 55

    printf("====================\n");

    printf("1���� %d������ ��: %d\n", i-1, sum);
    //1���� 10������ ��: 55

    return 0;
}

/*


#include <stdio.h>

int main() {


    int sum = 0;

    for (int i = 1; i <= 10; i++ ) {
       sum = sum + i;
        printf("1���� %d������ ��: %d\n", i, sum);
    }
    //("1���� %d������ ��: %d\n", i, sum); ERROR

    return 0;
}
*/
