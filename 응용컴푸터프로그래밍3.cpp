#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#include <stdio.h>

int main()
{
    int n=2;
    while (n>1) {
        printf("���� �Է�(1���� �Է��ϸ� ����) : ");
        scanf("%d", &n);
        if (n == 2) {
            printf("%d�� �Ҽ��Դϴ�.\n",n);
     
        }
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
                break;
            }
            else {
                printf("%d�� �Ҽ��Դϴ�.\n", n);
                break;
            }
        }
    }
    return 0;
}