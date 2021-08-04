
#include <stdio.h>

int main(){

    char *str1 = "hello";

    printf("문자열을 입력하세요 :");
    //scanf("%s", str1); //바로 대입할수 없다! ERROR

    printf("str1: %s \n", str1);

    str1 = "CLang";

    printf("--------------------------------------\n");

    char *str2 = malloc(sizeof(char) * 10);

    printf("문자열을 입력하세요 :");
    scanf("%s", str2);

    printf("str2: %s", str2);

    free(str2);


    printf("---------------문자열 여러개 입력 받기-----------------------\n");

    char str3[10];
    char str4[10];

    printf("문자열 두개를 입력하세요: ");
    scanf("%s %s", str3, str4);

    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);



    printf("---------------문자열 여러개 입력 받기-----------------------\n");
    char str5[10], str6[10], str7[10], str8[10], str9[10];

    printf("문자열 세개를 입력하세요: ");
    scanf("%s %s %s", str5, str6, str7);


    printf("str5: %s\n", str5);
    printf("str6: %s\n", str6);
    printf("str7: %s\n", str7);

    printf("문자열 다섯개를 입력하세요: ");
    scanf("%s %s %s %s %s", str5, str6, str7, str8, str9);


    printf("str5: %s\n", str5);
    printf("str6: %s\n", str6);
    printf("str7: %s\n", str7);
    printf("str8: %s\n", str8);
    printf("str9: %s\n", str9);




    return 0;
}
