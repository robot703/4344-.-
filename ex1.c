#include<stdio.h>

int main() {
	int a = 20;

	int* ptr_a=&a;

	

	printf("a�� �� : %d\n", a);
	printf("a�� �ּҰ� : %d\n", &a);
	printf("ptr_a�� ����� �� : %d\n", ptr_a); 
	printf("ptr_a�� ����Ű�� �����ǰ� : %d\n", *ptr_a);
}