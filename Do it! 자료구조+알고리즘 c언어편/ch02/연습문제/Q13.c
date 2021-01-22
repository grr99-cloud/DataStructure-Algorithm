///*��¥�� ��Ÿ���� ����ü*/
//#include <stdio.h>
//
//typedef struct {
//	int y;
//	int m;
//	int d;
//} Date;
//
//Date After(Date x, int n);
//Date Before(Date x, int n);
//
///*�� ���� �� ��*/
//int mdays[2][12] = { 
//	{31,28,31,30,31,30,31,31,30,31,30,31},
//	{31,29,31,30,31,30,31,31,30,31,30,31}
//};
//
///*year���� �����ΰ�?*/
//int isleap(int year) {
//	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//}
//
///*��¥ ����ü�� ��ȯ�ϴ� �Լ�*/
//Date Dateof(int y, int m, int d) {
//	Date tmp;
//
//	tmp.y = y;
//	tmp.m = m;
//	tmp.d = d;
//
//	return tmp;
//}
//
///*��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�*/
//Date After(Date x, int n) {
//	Date tmp;
//
//	if (n < 0) return Before(x, n);
//
//	x.d += n;
//
//	while (x.d > mdays[isleap(x.y)][x.m - 1]) {
//		x.d -= mdays[isleap(x.y)][x.m - 1];
//		if (++x.m > 12) {
//			x.y++;
//			x.m = 1;
//		}
//	}
//
//	return x;
//}
//
//Date Before(Date x, int n) {
//	Date tmp;
//
//	if (n < 0) return After(x, n);
//
//	x.d -= n;
//
//	while (x.d < 1) {
//		if (--x.m < 1) {
//			x.y--;
//			x.m = 12;
//		}
//		x.d += mdays[isleap(x.y)][x.m - 1];
//	}
//
//	return x;
//}
//
///*��¥ ��� �Լ�*/
//void print(Date x) {
//	int y = x.y;
//	int m = x.m;
//	int d = x.d;
//
//	printf("%04d�� %02d�� %02d��", x.y, x.m, x.d);
//}
//
//int main(void) {
//	int n;
//	int y, m, d;
//	Date x;
//
//	printf("��¥�� �Է��ϼ���.\n");
//	printf("�� : "); scanf("%d", &y);
//	printf("�� : "); scanf("%d", &m);
//	printf("�� : "); scanf("%d", &d);
//
//	x = Dateof(y, m, d);
//
//	printf("��ĥ ��/���� ��¥�� ���ұ�� ? "); scanf("%d", &n);
//
//	printf("%d�� ���� ��¥ : ", n); print(After(x, n)); putchar('\n');
//	printf("%d�� ���� ��¥ : ", n); print(Before(x, n)); putchar('\n');
//
//	return 0;
//}