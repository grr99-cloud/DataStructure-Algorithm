/*�ϳ��� �迭�� �����Ͽ� 2���� ������ �����ϴ� ���� ���α׷�*/
#include <stdio.h>
#include "IntStack2.h"

int main(void) {
	IntStack s;
	if (Initialize(&s, 64) == -1) {
		puts("���� ������ �����Ͽ����ϴ�.");
		return 1;
	}

	while (1) {
		int menu, x;
		int idx;
		printf("���� ������ �� : A : %d, B : %d / %d\n", Size(&s, 'A'), Size(&s, 'B'), Capacity(&s));
		printf("(1)A�� Ǫ�� (2)A���� �� (3)A���� ��ũ (4)A ��� (5)A���� �˻� (6)A �ʱ�ȭ \n(7)B�� Ǫ�� (8)B���� �� (9)B���� ��ũ (10)B ��� (11)B���� �˻� (12)B �ʱ�ȭ (13)�� ���� / ���� �� ���� (0)���᣺"); scanf("%d", &menu);

		if (menu == 0) break;

		switch (menu) {
		case 1 : //AǪ��
			printf("������ : "); scanf("%d", &x);
			if (Push(&s, 'A', x) == -1) 
				puts("\a���� : Ǫ�ÿ� �����Ͽ����ϴ�.");
			break;

		case 2 : //A��
			if (Pop(&s, 'A', &x) == -1)
				puts("\a���� : �˿� �����Ͽ����ϴ�.");
			else
				printf("�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3 : //A��ũ
			if (Peek(&s, 'A', &x) == -1)
				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
			else
				printf("��ũ �����ʹ� %d�Դϴ�.\n", x);

		case 4 : //A���
			Print(&s, 'A');
			break;

		case 5 : //A�˻�
			if (idx = Search(&s, 'A', x) == -1)
				puts("\a���� : �˻��� �����Ͽ����ϴ�.");
			else
				printf("�˻� �����ʹ� �ε��� %d ��ġ�� �ֽ��ϴ�.\n", idx);

		case 6 : //A�ʱ�ȭ
			Clear(&s, 'A');
			puts("������ �ʱ�ȭ�Ͽ����ϴ�.");

		case 7: //BǪ��
			printf("������ : "); scanf("%d", &x);
			if (Push(&s, 'B', x) == -1)
				puts("\a���� : Ǫ�ÿ� �����Ͽ����ϴ�.");
			break;

		case 8: //B��
			if (Pop(&s, 'B', &x) == -1)
				puts("\a���� : �˿� �����Ͽ����ϴ�.");
			else
				printf("�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 9: //B��ũ
			if (Peek(&s, 'B', &x) == -1)
				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
			else
				printf("��ũ �����ʹ� %d�Դϴ�.\n", x);

		case 10: //B���
			Print(&s, 'B');
			break;

		case 11: //B�˻�
			if (idx = Search(&s, 'B', x) == -1)
				puts("\a���� : �˻��� �����Ͽ����ϴ�.");
			else
				printf("�˻� �����ʹ� �ε��� %d ��ġ�� �ֽ��ϴ�.\n", idx);

		case 12: //B�ʱ�ȭ
			Clear(&s, 'B');
			puts("������ �ʱ�ȭ�Ͽ����ϴ�.");

		case 13 : //�� ���� / ���� �� ����
			printf("������ ��� %s.\n", IsEmpty(&s, 'A') ? "�ֽ��ϴ�." : "���� �ʽ��ϴ�.");
			printf("������ ��� %s.\n", IsEmpty(&s, 'B') ? "�ֽ��ϴ�." : "���� �ʽ��ϴ�.");
			printf("������ ���� %s.\n", IsFull(&s) ?  "á���ϴ�." : "���� �ʾҽ��ϴ�.");
			break;
		}
	}

	Terminate(&s);

	return 0;
}



