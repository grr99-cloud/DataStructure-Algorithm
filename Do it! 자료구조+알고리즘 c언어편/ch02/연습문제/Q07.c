///*��� ��ȯ ������ ���� ����ϴ� ���α׷�*/
//#include <stdio.h>
//
//#define swap(type, x, y) do {type t=x; x=y; y=t; } while(0)
//
//int card_conv(unsigned x, int n, char d[]) { //���� �� x�� n������ ��ȯ�Ͽ� �迭 d�� ���ڸ����� ����
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0; //��ȯ �� �ڸ���
//	int i;
//
//	if (x == 0) {
//		d[digits++] = dchar[0]; //0�̸� ��ȯ �Ŀ��� 0
//	}
//	else { //0�� �ƴϸ�
//		while (x) {
//			printf("%2d |", n);
//			d[digits] = dchar[x%n]; //n���� ���� �������� ����
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
//	unsigned no; //��ȯ�ϴ� ����
//	int cd; //���
//	int dno; //��ȯ �� �ڸ���->conv ���
//	char cno[512]; //conv�� ��ȯ�� ���� �� �ڸ��� ���ڸ� �����ϴ� ���� �迭
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
//		dno = card_conv(no, cd, cno);
//		
//		printf("%d�����δ�", cd);
//		for (i = 0; i < dno; i++) {
//			printf("%c", cno[i]);
//		}
//		printf("�Դϴ�.\n");
//
//		printf("�� �� �� �ұ��?(1 - �� / 0 - �ƴϿ�) : "); scanf("%d", &retry);
//	} while (retry == 1);
//
//	return 0;
//}