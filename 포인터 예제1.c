#include<stdio.h>

int main() {
	int arr[100];
	int(*ptr)[]=arr;
	int n;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);//���ϴ� ��ŭ ���� �Է¹ޱ�
	for (int i = 0; i < n; i++)
		(*ptr)[n] = arr[i];//arr�迭�� �����Ϳ� �Է�

	for (int i = 0; i < n; i++) {
		if ((i + 1) % 2 == 0)
			printf("%d ", (*ptr)[i]);
	}printf("\n");
	for (int i = 0; i < n; i++) {
		if ((i + 1) % 2 == 1)
			printf("%d ", (*ptr)[i]);
	}
	printf("\n");
	array();
}

int array() {
	int n, m,sum=0;
	int arr[10][10];

	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			scanf_s("%d", &arr[i][j]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sum += arr[i][j];
			
		}
		printf("%d\n", sum);
		sum = 0;
	}
}