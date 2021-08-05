

#include <stdio.h>
#include <string.h>

//���ڿ� �ȿ� �ִ� ���� �˻��ϱ�: strchr()
//strchr(���ڿ�, �˻��� ����)
//string.h ���� ���ǵǾ�����
//���ڸ� ã�� ��쿡�� �ش� ���ڷ� �����ϴ� ���ڿ��� �����͸� ��ȯ��
//ã������ ��쿡�� null ��ȯ
int main() {

    //ũ�Ⱑ 30�� char type�� �迭 ���� �� ���ڿ� �Ҵ�
    char s1[30] = "Tjoeun Academy";

    strchr(s1,'a');

    char *pointer1 = strchr(s1, 'eA');

    //�˻��ϴ� ���ڰ� ���� ������ �ݺ�
    while (pointer1 != NULL) {
        printf("pointer1: %s\n", pointer1);
        pointer1 = strchr(pointer1 + 1, 'a');
    }
    printf("-----------------\n");

    //strrchr (right ���ڿ� ��(������)�������� �˻�);

    char s2[30] = "A java javascript";


    char *pointer2 = strrchr(s2, 'a');

    printf("pointer2: %s\n", pointer2);

    printf("-----------------\n");

    //���ڿ� �ȿ� �ִ� ���ڿ��� �˻���
    //strstr(���ڿ�, ���ڿ�) �Լ�

    char s3[30] = "A java javascript";

    char *pointer3 = strstr(s3, "vas");

    printf("pointer3: %s\n", pointer3);


    printf("-----------------\n");



    char s4[100] = "A java javascript A java javascript A java javascript";

    char *pointer4 = strstr(s4, "vas");

    //printf("pointer4: %s\n", pointer4);

    //�˻��ϴ� ���ڰ� ���� ������ �ݺ�
    while (pointer4 != NULL) {
        printf("pointer4: %s\n", pointer4);
        pointer4 = strstr(pointer4 + 1, "vas");
    }



    printf("-----------------\n");

    char s5[30]="Alice in Wonderland";

    char *pointer5 = strchr(s5, 'n');
    printf("%s\n",pointer5);
     while (pointer5 != NULL) {
        printf("pointer5: %s\n", pointer5);
        pointer5 = strchr(pointer5 + 1, 'n');
    }



    return 0;
}
