///* ���� �˻��� ��ĳ�� ������ ���� ǥ���ϴ� ���α׷� */
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//
///*--- ����� ���� n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�(���ʹ�) ---*/
//int search(int a[], int n, int key)
//{
//	int j;
//	int i = 0;
//	a[n] = key;						/* ���ʸ� �߰� */
//
//	printf("   |");
//	for (i = 0; i < n; i++) {
//		printf("%2d", i);
//	}
//	putchar('\n');
//	puts("---+----------------------------");
//
//	while (1) {
//		printf("   |");
//		for (j = 0; j < i; j++) {
//			printf("  ");
//		}
//		printf(" *\n");
//		printf("%3d|", i);
//		for (j = 0; j < n; j++) {
//			printf("%2d", a[j]);
//		}
//		putchar('\n');
//		if (a[i] == key)
//			break;					/* ���ϴ� Ű ���� ã�� ��� */
//		i++;
//	}
//
//	return i == n ? -1 : i;
//}
//
//int main(void)
//{
//	int i, nx, ky, idx;
//	int *x;									/* �迭�� ù ��° ��ҿ� ���� ������ */
//
//	puts("���� �˻�(���ʹ�)");
//	printf("����� ���� : ");
//	scanf("%d", &nx);
//	x = calloc(nx + 1, sizeof(int));		/* ����� ����(nx + 1)�� int�� �迭�� ���� */
//
//	for (i = 0; i < nx; i++) {				/* ���� : ���� �о� ���� �� nx �� */
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	printf("�˻� �� : ");
//	scanf("%d", &ky);
//
//	idx = search(x, nx, ky);				/* �迭 x���� ���� ky�� ��Ҹ� ���� �˻� */
//
//	if (idx == -1)
//		puts("�˻��� �����߽��ϴ�.");
//	else
//		printf("%d(��)�� x[%d]�� �����մϴ�.\n", ky, idx);
//
//	free(x);								/* �迭�� ���� */
//
//	return 0;
//}