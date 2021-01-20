///*직각 이등변 삼각형을 출력하는 함수*/
//#include <stdio.h>
//
//void triangleLB(int n) { //왼쪽 아래가 직각
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
//void triangleLU(int n) { //왼쪽 위가 직각
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
//void triangleRU(int n) { //오른쪽 위가 직각
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
//void triangleRB(int n) { //오른쪽 아래가 직각
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
//		printf("몇 단 삼각형입니까? "); scanf("%d", &n);
//	} while (n <= 0);
//
//	triangleLB(n);
//	triangleLU(n);
//	triangleRB(n);
//	triangleRU(n);
//	
//	return 0;
//}