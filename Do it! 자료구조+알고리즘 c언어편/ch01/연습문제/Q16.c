///*���� �̵ �ﰢ���� ����ϴ� �Լ�*/
//#include <stdio.h>
//
//void triangleLB(int n) { //���� �Ʒ��� ����
//	int i, j;
//	
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			putchar('*');
//		}
//		putchar('\n');
//	}
//}
//
//void triangleLU(int n) { //���� ���� ����
//	int i, j;
//
//	for (i = n; i >= 1; i--) {
//		for (j = 1; j <= i; j++) {
//			putchar('*');
//		}
//		putchar('\n');
//	}
//}
//
//void triangleRU(int n) { //������ ���� ����
//	int i, j;
//
//	for (i = n; i >= 1; i--) {
//		for (j = 1; j <= i - 1; j++) {
//			putchar(' ');
//		}
//		for (j = 1; j <= n - i + 1; j++) {
//			putchar('*');
//		}
//		putchar('\n');
//	}
//}
//
//void triangleRB(int n) { //������ �Ʒ��� ����
//	int i, j;
//
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i - 1; j++) {
//			putchar(' ');
//		}
//		for (j = 1; j <= n - i + 1; j++) {
//			putchar('*');
//		}
//		putchar('\n');
//	}
//}
//
//int main(void) {
//	int n;
//
//	do {
//		printf("�� �� �ﰢ���Դϱ�? "); scanf("%d", &n);
//	} while (n <= 0);
//
//	triangleLB(n);
//	triangleLU(n);
//	triangleRB(n);
//	triangleRU(n);
//	
//	return 0;
//}