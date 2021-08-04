
#include <stdio.h>
#include <string.h>

int main(){
    char str1[10] = "Hello";
    char str2[10];

    strcpy(str2, str1);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    printf("--------------------------------------\n");

    char *str3 = "jexist";
    //char *str4 = "";
    //ERROR 문자열이 저장되어 있는 메모리 공간은 data를 변경해서 저장할 수 없음 (읽기 전용 메모리 공간)
    char *str4;

    strcpy(str4, str3);

    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);



    printf("--------------------------------------\n");
    char *str5 = "jexsits";
    char *str6 = malloc(sizeof(char) * 10);

    strcpy(str6, str5);


    printf("str5: %s\n", str5); //str5: jexsits
    printf("str6: %s\n", str6); //str6: jexsits

    free(str6);

    printf("--------------------------------------\n");
    char str7[10] = "computer";
    char str8[20] = "mac ";

    strcat(str8, str7);


    printf("str7: %s\n", str7); //str7: computer
    printf("str8: %s\n", str8); //str8: mac computer

    free(str6);



    printf("--------------------------------------\n");
    char *str9 = "computer";
    char *str10 = "mac ";


    //strcat(str10, str9); //ERROR

    printf("str9: %s\n", str9);
    printf("str10: %s\n", str10);

    printf("--------------------------------------\n");
    char *str11 = "jexsits";
    char *str12 = malloc(sizeof(char) * 10);

    strcpy(str12, "hello ");
    strcat(str12, str11);


    printf("str11: %s\n", str11); //str11: jexsits
    printf("str12: %s\n", str12); //str12: hello jexsits

    free(str12);

    return 0;
}
