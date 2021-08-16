#include <stdio.h>
/*
        라이트 쉐프트 연산자
        원래의 수(변수) / 2**n 의 정수부분만 리턴함

                   1 0 1 0 0           20
        >> 1       1 0 1 0 0       10
        >> 2         1 0 1 0 0       5
        >> 3           1 0 1 0 0     2


        레프트 쉐프트 연산자
        원래의 수(변수) X 2**n 의 정수부분만 리턴함

                 1 0 1 0 0
              1 0 1 0 0 0          << 1
           1 0 1 0 0 0 0          << 2
        1 0 1 0 0 0 0 0          << 3
*/
int main()
{
    int num = 20;

     // num <-- 20
     printf("%d\n", num >> 1);  // 10
     printf("%d\n", num >> 2);  //  5
     printf("%d\n", num >> 3);  //  2

     // num <-- 20
     printf("%d\n", num << 1);  //   40
     printf("%d\n", num << 2);  //   80
     printf("%d\n", num << 3);  // 160
     printf("-------------------------------\n");

     printf("-- 할당 연산 전 --\n");
     printf("num : %d\n", num);
     //  변수 공간에 할당(저장)된 값 자체를 변경하려면
     //  할당연산을 해야만 함
     // num = num << 1;
     num <<= 1;

     // num = num + 1;
     // num += 1;
     // num++
     // ++num
     // num = num + 2;
     // num += 2;
     // num = num + 5;
     // num += 5;

     printf("-- 할당 연산 후 --\n");
     printf("num : %d\n", num);

    return 0;
}







