///*양의 정수를 입력받아 자릿수를 출력하는 프로그램*/
//#include <stdio.h>
//
//int main(void) {
//	int n;
//	int count = 1;
//
//	puts("양의 정수 n의 자릿수를 구합니다.");
//	do {
//		printf("양의 정수 n : "); scanf("%d", &n);
//	} while (n <= 0);
//
//	while (n / 10 != 0) {
//		n /= 10;
//		count++;
//	}
//
//	printf("n은 %d자리입니다.\n",count);
//
//	return 0;
//}