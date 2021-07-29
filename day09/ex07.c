#include <stdio.h>

int main(){

  // number 에 저장된 숫자가
  // 거꾸로 읽어도 앞으로 읽는 것과 같은 숫자인지
  // 알아보기     ㄴ 회문(palindrome)

    int number = 12321;
    int temp = number;
    int reverseNum  = 0;

                           //   0  *  10           12321 % 10
    reverseNum = reverseNum * 10 +  temp % 10;   // :  1
    temp = temp / 10;    // 1232

                         //     1 * 10                 1232 % 10 (2)
    reverseNum = reverseNum * 10 +  temp % 10;  //  :  12
    temp = temp / 10;  // 1232 / 10 <-- 123

                          //         12 * 10           123 % 10 (3)
    reverseNum = reverseNum * 10 +  temp % 10;  // :  123
    temp = temp / 10;   // 12

                        //      123 * 10            12 % 10 (2)
    reverseNum = reverseNum * 10 +  temp % 10;   // :   1232
    temp = temp / 10;   // 1

                         //        1232 * 10           1 % 10 (1)
    reverseNum = reverseNum * 10 +  temp % 10;   // :   12321
    temp = temp / 10;  // 0


    printf("number(%d) - reverseNum(%d)\n", number, reverseNum);

    if(number == reverseNum){
        printf("%d 는 회문수입니다\n", number);
    }else{
        printf("%d 는 회문수가 아닙니다\n", number);
    }

    return 0;
}





/*
int main() {
    //회문: palindrome (거꾸로 읽어도 앞으로 읽어도 같은 숫자)

    int number = 12321;
    int temp = number;
    int reverseNum = 0;


    reverseNum = reverseNum * 10 + temp % 10;
    temp = temp / 10;

    reverseNum = reverseNum * 10 + temp % 10;
    temp = temp / 10;

    reverseNum = reverseNum * 10 + temp % 10;
    temp = temp / 10;

    reverseNum = reverseNum * 10 + temp % 10;
    temp = temp / 10;

    reverseNum = reverseNum * 10 + temp % 10;
    temp = temp / 10;



    if (number == reverseNum) {
        printf("%d 는 회문수 입니다.\n", number);
    } else {
        printf("%d 는 회문수가 아닙니다.\n", number);
    }
    return 0;
}
*/
