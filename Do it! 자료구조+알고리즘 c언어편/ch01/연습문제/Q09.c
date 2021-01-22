///*정수 a,b를 포함하여 그 사이의 모든 정수의 합을 구하는 함수*/
//#include <stdio.h>
//
//int sumof(int a, int b) {
//	int i, min, max;
//	int sum = 0;
//
//	if (a < b) {
//		min = a;
//		max = b;
//	}
//	else {
//		min = b;
//		max = a;
//	}
//	for (i = min; i <= max; i++) {
//		sum += i;
//	}
//
//	return sum;
//}
//
//int main(void) {
//	int a, b;
//
//	puts("a부터 b까지의 합을 구합니다.");
//	printf("a 값 : "); scanf("%d", &a);
//	printf("b 값 : "); scanf("%d", &b);
//
//	printf("a부터 b까지의 합 : %d", sumof(a, b));
//
//	return 0;
//}