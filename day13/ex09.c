
#include <stdio.h>
#include <string.h> //strlen() �Լ��� ���ǵǾ� �ִ� �������
int main(){

    //���ڿ� ���� ���ϱ�

    char *str1 = "Hello";
    char str2[10] = "goodbye";

    printf("%d\n", strlen(str1)); //5
    printf("%d\n", strlen(str2)); //5


    printf("%d\n", sizeof(str1)); //8
    printf("%d\n", sizeof(str2)); //10

    printf("--------------------------------------\n");

    printf("�� ���ڿ��� ������ ���ϱ�\n");

    //strcmp(���ڿ�1, ���ڿ�2);
    //�� ���ڿ��� ���̰� ������ 0 ��ȯ
    //���ڿ� 1�� ���ڿ� 2���� ũ�� 1 ��ȯ
    //���ڿ� 1�� ���ڿ� 2���� ������ -1 ��ȯ
    int result = strcmp(str1, str2);

    printf("result: %d \n", result);

    printf("--------------------------------------\n");

    printf("result: %d \n", strcmp("aaa","aaa")); //0
    printf("result: %d \n", strcmp("aaa","aab")); //-1
    printf("result: %d \n", strcmp("aab","aaa")); //1
    printf("result: %d \n", strcmp("aaa","aaA")); //1
    printf("result: %d \n", strcmp("aAa","aaA")); //-1

    return 0;
}
