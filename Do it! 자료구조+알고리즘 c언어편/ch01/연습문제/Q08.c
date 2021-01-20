///*가우스의 덧셈을 이용한 1부터 n까지의 합을 구하는 프로그램*/
//#include <stdio.h>
//
//int main(void) {
//	int i, n;
//	int sum = 0;
//
//	puts("1부터 n까지의 합을 구합니다.");
//	printf("n 값 : "); scanf("%d", &n);
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