
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    //ȸ�� ���� �ƴ��� Ȯ�� (palindrome)

    //�ܾ �����ϴ� �迭 ����
    char word[30];

    //���ڿ��� ���� �����ϴ� ����

    int length;
    //ȸ������ �ƴ��� ����� (true/false)�� �����ϴ� ����

    bool isPalindrome = true;

    printf("�ܾ �Է��ϼ��� : ");
    scanf("%s", word);

    //�迭 word�� ����� ���ڿ��� ���� ���ϱ�

    length = strlen(word);

    //0���� ���ڿ� ������ ���� ��ŭ�� �ݺ��ϱ�
    //�ѱ��ڶ� ���� ������ ȸ���� �ƴ�
    for (int i = 0; i < length / 2; i++) {
        //���� ���ڿ��� ������ ���ڿ� ���Ͽ�
        //�ٸ� ��쿡�� ȸ���� �ƴϰ� , ������ ȸ����

        if(word[i]!= word[length-1 - i]) {
            //ȸ���� �ƴ� ���
            isPalindrome = false;
            break;
            //�ڽ��� �����ϰ� �ִ� {}�� �ϳ� ���
            //if�� {}�� ������
        }//if


    }//for


    if(isPalindrome) {
        printf("ȸ���Դϴ�\n ");
    } else {
        printf("ȸ���ƴմϴ�\n ");
    }
    printf("----------------------\n");


    return 0;
}
