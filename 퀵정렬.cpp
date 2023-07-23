#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int number = 10;
int data[] = { 1,10,5,8,7,6,4,3,2,9 };

void quicksort(int *data, int start, int end) {
	if (start >= end) {//���Ұ� 1���� ��� �״�� �α�
		return;
	}

	int pivot = start;//�Ǻ��� ù��° ����
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) {//������ ������ �ݺ�
		while (i <= end && data[i] <= data[pivot]) {
			//�Ǻ����� ū���� ���� ������
			i++;
		}
		while (j > start && data[j] >= data[pivot]) {
			//�Ǻ����� ���� ���� ���� ������
			j--;
		}
		if (i > j) {//���� ������ ���¸� �Ǻ��� ��ü
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		}
		else {//�������� �ʾҴٸ� i�� j�� ��ü
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	
	quicksort(data, start, j - 1);
	quicksort(data, j + 1, end);
}

int main() {
	quicksort(data, 0, number - 1);
	for (int i = 0; i < number; i++) {
		printf("%d ", data[i]);
	}
	return 0;
}