//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//float get_MAX_MIN(float num1, float num2, float num3);
//
//float min;
//float big;
//
//int main() {
//	float a, b, c;
//	
//	printf("ù ��° �� :");
//	scanf("%f", &a);
//
//	printf("�� ��° �� : ");
//	scanf("%f", &b);
//
//	printf("�� ��° �� : ");
//	scanf("%f", &c);
//
//
//	printf("���� ū���� �������� ���� : %.1f ", get_MAX_MIN(a, b, c));
//
//	return 0;
//}
//
//float get_MAX_MIN(float num1, float num2, float num3) {
//
//	
//	if (num2 < min)
//		min = num2;
//	if (num3 < min)
//		min = num3;
//
//	if (num2 > big)
//		big = num2;
//	if (num3 > big)
//		big = num3;
//
//	float result = big - min;
//
//	return result;
//
//}