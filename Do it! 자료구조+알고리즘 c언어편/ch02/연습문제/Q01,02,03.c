///*Ű�� �ּڰ��� ���ϴ� ���α׷�*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int minof(const int a[], int n);
//int maxof(const int a[], int n);
//int sumof(const int a[], int n);
//double aveof(const int a[], int n);
//
//int main(void) {
//	int i;
//	int number; //��� ��
//	int *height;
//
//	printf("��� �� : "); scanf("%d", &number);
//
//	height = calloc(number, sizeof(int));
//
//	printf("%d ����� Ű�� �Է��ϼ���.\n", number);
//	for (i = 0; i < number; i++) {
//		printf("height[%d] : ", i); scanf("%d", &height[i]);
//	}
//
//	printf("�ִ��� %d�Դϴ�.\n", maxof(height, number));
//	printf("�ּڰ��� %d�Դϴ�.\n", minof(height, number));
//	printf("�հ�� %d�Դϴ�.\n", sumof(height, number));
//	printf("����� %.2f�Դϴ�.\n", aveof(height, number));
//	
//	free(height);
//
//	return 0;
//}
//
//double aveof(const int a[], int n) {
//	double ave;
//
//	ave = (double)sumof(a, n) / n;
//
//	return ave;
//}
//
//int sumof(const int a[], int n) {
//	int i;
//	int sum = 0; //�հ�
//	
//	for (i = 0; i < n; i++) {
//		sum += a[i];
//	}
//
//	return sum;
//}
//
//int minof(const int a[], int n) {
//	int i;
//	int min; //�ּڰ�
//	min = a[0];
//
//	for (i = 1; i < n; i++) {
//		if (min > a[i]) min = a[i];
//	}
//
//	return min;
//}
//
//int maxof(const int a[], int n) {
//	int i;
//	int max; //�ִ�
//	max = a[0];
//
//	for (i = 1; i < n; i++) {
//		if (max > a[i]) max = a[i];
//	}
//
//	return max;
//}