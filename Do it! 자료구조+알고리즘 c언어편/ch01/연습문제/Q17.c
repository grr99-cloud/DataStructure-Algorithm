///*n���� �Ƕ�̵带 ����ϴ� �Լ�*/
//#include <stdio.h>
//
//void spira(int n) {
//	int i, j;
//	
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n-i; j++) {
//			putchar(' ');
//		}
//		for (j = 1; j <= ((i - 1) * 2 + 1); j++) {
//			putchar('*');
//		}
//		putchar('\n');
//	}
//}
//
//int main(void) {
//	int n;
//
//	puts("n�� �Ƕ�̵带 ����մϴ�.");
//	do {
//		printf("n : "); scanf("%d", &n);
//	} while (n <= 0);
//
//	spira(n);
//
//	return 0;
//}