


#include <stdio.h>

int main() {


    int sum = 0;
    int i;

    for (i = 1; i <= 10; i++ ) {
        sum = sum + i;
        printf("1부터 %d까지의 합: %d\n", i, sum);
    }

    printf("====================\n");

    printf("1부터 %d까지의 합: %d\n", i, sum);
    //1부터 11까지의 합: 55

    printf("====================\n");

    printf("1부터 %d까지의 합: %d\n", i-1, sum);
    //1부터 10까지의 합: 55

    return 0;
}

/*


#include <stdio.h>

int main() {


    int sum = 0;

    for (int i = 1; i <= 10; i++ ) {
       sum = sum + i;
        printf("1부터 %d까지의 합: %d\n", i, sum);
    }
    //("1부터 %d까지의 합: %d\n", i, sum); ERROR

    return 0;
}
*/
