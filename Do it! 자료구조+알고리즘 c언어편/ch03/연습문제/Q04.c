///*���� �˻� ������ �ڼ��� ����ϴ� ���α׷�*/
//#include <stdio.h>
//#include <stdlib.h>
//
///*��� n���� �迭 a���� key�� ��ġ�ϴ� ��� ���� �˻�*/
//int bin_search(const int a[], int n, int key) {
//	int pl = 0;
//	int pr = n - 1;
//	int pc;
//	int i;
//
//	printf("   |");
//	for (i = 0; i < n; i++) {
//		printf("%3d", i);
//	}
//	putchar('\n');
//	puts("---+-------------------------------");
//	
//	do {
//		pc = (pl + pr) / 2;
//		printf("   |");
//		for (i = 0; i < pl; i++) {
//			printf(" ");
//		}
//		printf(" <-");
//		for (i = pl; i < pc; i++) {
//			printf("  ");
//		}
//		printf("+");
//		for(i = pc; i < pr; i++) {
//			printf("  ");
//		}
//		printf("->\n");
//		printf("%3d|", pc);
//		for (i = 0; i < n; i++) {
//			printf("%3d", a[i]);
//		}
//		putchar('\n');
//		if (a[pc] == key) return pc;
//		else if (a[pc] < key) pl = pc + 1;
//		else pr = pc - 1;
//	} while (pl <= pr);
//
//	return -1;
//}
//
//int main(void) {
//	int i, nx, ky, idx;
//	int *x;
//
//	puts("���� �˻�");
//	printf("��� ���� : "); scanf("%d", &nx);
//
//	x = calloc(nx, sizeof(int));
//
//	printf("������������ �Է��ϼ���.\n");
//	printf("x[0] : "); scanf("%d", &x[0]);
//	for (i = 1; i < nx; i++) {
//		do {
//			printf("x[%d] : ", i); scanf("%d", &x[i]);
//		} while (x[i] < x[i - 1]);
//	}
//
//	printf("�˻� �� : "); scanf("%d", &ky);
//
//	idx = bin_search(x, nx, ky);
//	putchar('\n');
//
//	if (idx == -1) printf("�˻��� �����߽��ϴ�.");
//	else printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, idx);
//
//	free(x);
//
//	return 0;
//}