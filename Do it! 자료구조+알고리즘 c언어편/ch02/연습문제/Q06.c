///*�迭�� �� ���ʿ� �Ʒ��ڸ� / ���ڸ��� �����ϴ� �Լ�*/
//#include <stdio.h>
//
//#define swap(type, x, y) do {type t=x; x=y; y=t; } while(0)
//
//int card_convr(unsigned x, int n, char d[]) { //���� �� x�� n������ ��ȯ�Ͽ� �迭 d�� �Ʒ��ڸ����� ����
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0; //��ȯ �� �ڸ���
//
//	if (x == 0) d[digits++] = dchar[0]; //0�̸� ��ȯ �Ŀ��� 0
//	else { //0�� �ƴϸ�
//		while (x) {
//			d[digits++] = dchar[x%n]; //n���� ���� �������� ����
//			x /= n;
//		}
//	}
//
//	return digits;
//}
//
//int card_conv(unsigned x, int n, char d[]) { //���� �� x�� n������ ��ȯ�Ͽ� �迭 d�� ���ڸ����� ����
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0; //��ȯ �� �ڸ���
//	int i;
//
//	if (x == 0) d[digits++] = dchar[0]; //0�̸� ��ȯ �Ŀ��� 0
//	else { //0�� �ƴϸ�
//		while (x) {
//			d[digits++] = dchar[x%n]; //n���� ���� �������� ����
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
//	unsigned no; //��ȯ�ϴ� ����
//	int cd; //���
//	int dno_convr; //��ȯ �� �ڸ���->convr ���
//	int dno_conv; //��ȯ �� �ڸ���->conv ���
//	char cno_convr[512]; //convr�� ��ȯ�� ���� �� �ڸ��� ���ڸ� �����ϴ� ���� �迭
//	char cno_conv[512]; //conv�� ��ȯ�� ���� �� �ڸ��� ���ڸ� �����ϴ� ���� �迭
//	int retry; //�� �� ��?
//
//	do {
//		puts("10������ ��� ��ȯ�մϴ�.");
//		printf("��ȯ�ϴ� ���� �ƴ� ���� : "); scanf("%u", &no);
//
//		do {
//			printf("� ������ ��ȯ�ұ��?(2-36) : "); scanf("%d", &cd);
//		} while (cd < 2 || cd > 36);
//		
//		dno_convr = card_convr(no, cd, cno_convr);
//		dno_conv = card_conv(no, cd, cno_conv);
//		
//		printf("%d�����δ�", cd);
//		for (i = dno_convr - 1; i >= 0; i--) {
//			printf("%c", cno_convr[i]);
//		}
//		printf("�Դϴ�.\n");
//
//		printf("%d�����δ�", cd);
//		for (i = 0; i < dno_conv; i++) {
//			printf("%c", cno_conv[i]);
//		}
//		printf("�Դϴ�.\n");
//
//		printf("�� �� �� �ұ��?(1 - �� / 0 - �ƴϿ�) : "); scanf("%d", &retry);
//	} while (retry == 1);
//
//	return 0;
//}