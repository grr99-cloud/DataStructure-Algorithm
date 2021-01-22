///*날짜를 나타내는 구조체*/
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
///*각 달의 날 수*/
//int mdays[2][12] = { 
//	{31,28,31,30,31,30,31,31,30,31,30,31},
//	{31,29,31,30,31,30,31,31,30,31,30,31}
//};
//
///*year년이 윤년인가?*/
//int isleap(int year) {
//	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//}
//
///*날짜 구조체를 반환하는 함수*/
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
///*날짜 x의 n일 뒤의 날짜를 반환하는 함수*/
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
///*날짜 출력 함수*/
//void print(Date x) {
//	int y = x.y;
//	int m = x.m;
//	int d = x.d;
//
//	printf("%04d년 %02d월 %02d일", x.y, x.m, x.d);
//}
//
//int main(void) {
//	int n;
//	int y, m, d;
//	Date x;
//
//	printf("날짜를 입력하세요.\n");
//	printf("년 : "); scanf("%d", &y);
//	printf("월 : "); scanf("%d", &m);
//	printf("일 : "); scanf("%d", &d);
//
//	x = Dateof(y, m, d);
//
//	printf("며칠 앞/뒤의 날짜를 구할까요 ? "); scanf("%d", &n);
//
//	printf("%d일 뒤의 날짜 : ", n); print(After(x, n)); putchar('\n');
//	printf("%d일 앞의 날짜 : ", n); print(Before(x, n)); putchar('\n');
//
//	return 0;
//}