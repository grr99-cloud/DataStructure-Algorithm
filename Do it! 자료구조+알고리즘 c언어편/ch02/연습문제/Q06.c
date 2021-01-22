///*배열의 맨 앞쪽에 아랫자리 / 윗자리를 저장하는 함수*/
//#include <stdio.h>
//
//#define swap(type, x, y) do {type t=x; x=y; y=t; } while(0)
//
//int card_convr(unsigned x, int n, char d[]) { //정수 값 x를 n진수로 변환하여 배열 d에 아랫자리부터 저장
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0; //변환 후 자릿수
//
//	if (x == 0) d[digits++] = dchar[0]; //0이면 변환 후에도 0
//	else { //0이 아니면
//		while (x) {
//			d[digits++] = dchar[x%n]; //n으로 나눈 나머지를 저장
//			x /= n;
//		}
//	}
//
//	return digits;
//}
//
//int card_conv(unsigned x, int n, char d[]) { //정수 값 x를 n진수로 변환하여 배열 d에 윗자리부터 저장
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0; //변환 후 자릿수
//	int i;
//
//	if (x == 0) d[digits++] = dchar[0]; //0이면 변환 후에도 0
//	else { //0이 아니면
//		while (x) {
//			d[digits++] = dchar[x%n]; //n으로 나눈 나머지를 저장
//			x /= n;
//		}
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
//	int dno_convr; //변환 후 자릿수->convr 사용
//	int dno_conv; //변환 후 자릿수->conv 사용
//	char cno_convr[512]; //convr로 변환한 값의 각 자리의 숫자를 저장하는 문자 배열
//	char cno_conv[512]; //conv로 변환한 값의 각 자리의 숫자를 저장하는 문자 배열
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
//		dno_convr = card_convr(no, cd, cno_convr);
//		dno_conv = card_conv(no, cd, cno_conv);
//		
//		printf("%d진수로는", cd);
//		for (i = dno_convr - 1; i >= 0; i--) {
//			printf("%c", cno_convr[i]);
//		}
//		printf("입니다.\n");
//
//		printf("%d진수로는", cd);
//		for (i = 0; i < dno_conv; i++) {
//			printf("%c", cno_conv[i]);
//		}
//		printf("입니다.\n");
//
//		printf("한 번 더 할까요?(1 - 예 / 0 - 아니오) : "); scanf("%d", &retry);
//	} while (retry == 1);
//
//	return 0;
//}