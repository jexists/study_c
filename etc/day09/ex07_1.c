#include <stdio.h>

int main(){

  // number 에 저장된 숫자가
  // 거꾸로 읽어도 앞으로 읽는 것과 같은 숫자인지
  // 알아보기     ㄴ 회문(palindrome)

    int number = 12321;

    printf("회문수로 검사할 숫자를 입력해 보세요 : ");
    scanf("%d", &number);

    int temp = number;
    int reverseNum  = 0;

    while(temp != 0){
        reverseNum = reverseNum * 10 +  temp % 10;
        temp = temp / 10;
    }

    printf("number(%d) - reverseNum(%d)\n", number, reverseNum);

    if(number == reverseNum){
        printf("%d 는 회문수입니다\n", number);
    }else{
        printf("%d 는 회문수가 아닙니다\n", number);
    }

    return 0;
}




