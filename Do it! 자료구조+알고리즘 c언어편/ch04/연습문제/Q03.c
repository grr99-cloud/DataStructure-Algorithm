/*ť�� �����ϴ� ���α׷�*/
#include <stdio.h>
#include "ArrayIntQueue.h"

int main(void) {
	ArrayIntQueue q;
	if (Initialize(&q, 64) == -1) {
		puts("ť ������ �����Ͽ����ϴ�.");
		return 1;
	}

	while (1) {
		int menu, x;
		int idx;
		printf("���� ������ �� : %d / %d\n", Size(&q), Capacity(&q));
		printf("(1)��ť (2)��ť (3) ��ũ (4)��� (5)�˻� (6)�ʱ�ȭ (7)�� ���� / ���� �� ���� (0)���᣺"); scanf("%d", &menu);

		if (menu == 0) break;

		switch (menu) {
		case 1 : //��ť
			printf("������ : "); scanf("%d", &x);
			if (Enque(&q, x) == -1) 
				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
			break;

		case 2 : //��ť
			if (Deque(&q, &x) == -1)
				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
			else
				printf("��ť �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3 : //��ũ
			if (Peek(&q, &x) == -1)
				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
			else
				printf("��ũ �����ʹ� %d�Դϴ�.\n", x);

		case 4 : //���
			Print(&q);
			break;

		case 5 : //�˻�
			if (idx = Search(&q, x) == -1)
				puts("\a���� : �˻��� �����Ͽ����ϴ�.");
			else
				printf("�˻� �����ʹ� �ε��� %d ��ġ�� �ֽ��ϴ�.\n", idx);

		case 6 : //�ʱ�ȭ
			Clear(&q);
			puts("ť�� �ʱ�ȭ�Ͽ����ϴ�.");

		case 7 : //�� ���� / ���� �� ����
			printf("ť�� ��� %s.\n", IsEmpty(&q) ? "�ֽ��ϴ�." : "���� �ʽ��ϴ�.");
			printf("ť�� ���� %s.\n", IsEmpty(&q) ? "á���ϴ�." : "���� �ʾҽ��ϴ�.");
			break;
		}
	}

	Terminate(&q);

	return 0;
}



