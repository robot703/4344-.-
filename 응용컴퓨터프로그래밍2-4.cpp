#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int main() {
	float v,sum=0,sum1=0;
	float avg=0, dev=0;
	float arr[10] = { 0, };
	int i,j;
	
	for (i = 0; i < 10; i++) {
		printf("���� %d : ", i + 1);
		scanf("%f", &v);

		if (v < 0) {
			break;
		}
		else {
			arr[i] = v;
			sum += v;
		}
	}
	avg = sum / i;//��ձ��ϱ�

	for (j = 0; j < i; j++) {//�л걸�ϱ�
		arr[j] -= avg;
		sum1 += pow(arr[j],2.0);
	}
	dev = sqrt(sum1 / i);//ǥ���������ϱ�

	printf("��� : %.2lf\n", avg);
	printf("ǥ������ : %.2lf", dev);
}