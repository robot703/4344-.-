#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int main() {

	int h, w, n = 1, number = 0;;
	int cnt = 0;
	int num = 101;
	int a = 0;

	scanf("%d", &cnt);

	while (a<cnt) {


		for (int i = 0; i < cnt; i++) {


			scanf("%d %d %d", &h, &w, &number);

			int** arr = malloc(sizeof(int*) * h);   // ���� �����Ϳ� (int ������ ũ�� * row)��ŭ
													 // ���� �޸� �Ҵ�. �迭�� ����

			for (int i = 0; i < h; i++)            // ���� ũ�⸸ŭ �ݺ�
			{
				arr[i] = malloc(sizeof(int) * w);    // (int�� ũ�� * col)��ŭ ���� �޸� �Ҵ�. �迭�� ����
			}


			for (int i = h - 1; i >= 0; i--) {

				for (int j = 0; j < w; j++) {

					arr[i][j] = num;
					num++;
				}
				num = num - w;
				num += 100;
			}

			bool exitOuterLoop = false;
			for (int i = 0; i < w; i++) {

				for (int j = h - 1; j >= 0; j--) {


					if (n == number) {
						exitOuterLoop = true;
						printf("%d\n", arr[j][i]);
						num = 101;
						n = 1;
						break;

					}
					n++;

				}
				if (exitOuterLoop == true)
					break;
			}


			for (int i = 0; i < h; i++) {
				free(arr[i]);
			}
			free(arr);


			
		}
		return 0;
	}
	a++;
	
}