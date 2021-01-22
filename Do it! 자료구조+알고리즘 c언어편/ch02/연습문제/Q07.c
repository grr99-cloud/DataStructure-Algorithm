///*기수 변환 과정을 상세히 출력하는 프로그램*/
//#include <stdio.h>
//
//#define swap(type, x, y) do {type t=x; x=y; y=t; } while(0)
//
//int card_conv(unsigned x, int n, char d[]) { //정수 값 x를 n진수로 변환하여 배열 d에 윗자리부터 저장
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0; //변환 후 자릿수
//	int i;
//
//	if (x == 0) {
//		d[digits++] = dchar[0]; //0이면 변환 후에도 0
//	}
//	else { //0이 아니면
//		while (x) {
//			printf("%2d |", n);
//			d[digits] = dchar[x%n]; //n으로 나눈 나머지를 저장
//			printf("%6u ... %2c\n", x, d[digits++]);
//			x /= n;
//			printf("  + ----------\n");
//		}
//		printf("%10c\n", dchar[0]);
//	}
//	for (i = 0; i < digits / 2; i++) {
//		swap(char, d[i], d[digits - i - 1]);
//	}
//
//	return digits;
//}
//
//int main(void) {
//	int i;
//	unsigned no; //변환하는 정수
//	int cd; //기수
//	int dno; //변환 후 자릿수->conv 사용
//	char cno[512]; //conv로 변환한 값의 각 자리의 숫자를 저장하는 문자 배열
//	int retry; //한 번 더?
//
//	do {
//		puts("10진수를 기수 변환합니다.");
//		printf("변환하는 음이 아닌 정수 : "); scanf("%u", &no);
//
//		do {
//			printf("어떤 진수로 변환할까요?(2-36) : "); scanf("%d", &cd);
//		} while (cd < 2 || cd > 36);
//		
//		dno = card_conv(no, cd, cno);
//		
//		printf("%d진수로는", cd);
//		for (i = 0; i < dno; i++) {
//			printf("%c", cno[i]);
//		}
//		printf("입니다.\n");
//
//		printf("한 번 더 할까요?(1 - 예 / 0 - 아니오) : "); scanf("%d", &retry);
//	} while (retry == 1);
//
//	return 0;
//}