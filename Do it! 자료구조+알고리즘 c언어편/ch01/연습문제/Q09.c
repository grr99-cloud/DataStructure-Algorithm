///*���� a,b�� �����Ͽ� �� ������ ��� ������ ���� ���ϴ� �Լ�*/
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
//	puts("a���� b������ ���� ���մϴ�.");
//	printf("a �� : "); scanf("%d", &a);
//	printf("b �� : "); scanf("%d", &b);
//
//	printf("a���� b������ �� : %d", sumof(a, b));
//
//	return 0;
//}