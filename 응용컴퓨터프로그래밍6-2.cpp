#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int n;
	int dice_num = 0;
	int arr[2] = { 0, };
	srand(time(NULL));

	printf("�ֻ����� ��� �����ǰ���? : ");
	scanf("%d", &n);

	
	for (int i = 0; i < n; i++) {
		dice_num = rand() % 2 + 1;
		if (dice_num == 1)//�ո�
			arr[0]++;
		else
			arr[1]++;
	}

	printf("�ո� Ƚ�� : %d\n�޸� Ƚ�� : %d\n", arr[0], arr[1]);
	if (arr[0] > arr[1])
		printf("�ո��� �� ���� ���Խ��ϴ�.");
	else
		printf("�޸��� �� ���� ���Խ��ϴ�.");
}