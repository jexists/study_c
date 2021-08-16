#include <stdio.h>

int main(){

    int number;
    int sum = 0;

    printf("5 자리 정수를 입력하세요 : ");
    scanf("%d",&number);

    while(number > 0){
      sum = sum + (number % 10);
      number = number / 10;
    }

    printf("sum : %d\n", sum);

    return 0;
}
