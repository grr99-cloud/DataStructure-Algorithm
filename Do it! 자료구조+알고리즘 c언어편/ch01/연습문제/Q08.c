///*���콺�� ������ �̿��� 1���� n������ ���� ���ϴ� ���α׷�*/
//#include <stdio.h>
//
//int main(void) {
//	int i, n;
//	int sum = 0;
//
//	puts("1���� n������ ���� ���մϴ�.");
//	printf("n �� : "); scanf("%d", &n);
//
//	sum = (1 + n)*(n / 2) + (n % 2 == 1 ? (n + 1) / 2 : 0);
//	/*if (n % 2 == 0) {
//		sum = (1 + n)*(n / 2);
//	}
//	else {
//		sum = (1 + n)*(n / 2) + (1 + n) / 2;
//	}*/
//
//	for (i = 1; i < n; i++) {
//		printf("%d + ", i);
//	}
//	printf("%d = %d\n", n, sum);
//
//	return 0;
//}