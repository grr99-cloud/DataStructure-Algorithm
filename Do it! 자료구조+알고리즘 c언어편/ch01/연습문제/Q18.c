/*�Ʒ��� ���� n���� ���� �Ƕ�̵� ����ϴ� �Լ�*/
#include <stdio.h>

void nrpira(int n) {
	int i, j;

	for (i = n; i >= 1; i--) {
		for (j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <= ((i - 1) * 2 + 1); j++) {
			printf("%d", n - i + 1);
		}
		putchar('\n');
	}
}

int main(void) {
	int n;

	puts("n�� �Ƕ�̵带 ����մϴ�.");
	do {
		printf("n : "); scanf("%d", &n);
	} while (n <= 0);

	nrpira(n);

	return 0;
}