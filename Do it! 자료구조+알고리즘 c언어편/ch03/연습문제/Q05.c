///*���� �˻� �� ���� �� �� �� ���� ��Ҹ� ã�� �Լ�*/
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
//	do {
//		pc = (pl + pr) / 2;
//
//		if (a[pc] == key) return pc;
//		else if (a[pc] < key) pl = pc + 1;
//		else pr = pc - 1;
//	} while (pl <= pr);
//
//	return -1;
//}
//
//int bin_search2(const int a[], int n, int key) {
//	int pl = 0;
//	int pr = n - 1;
//	int pc;
//	int i;
//
//	do {
//		pc = (pl + pr) / 2;
//
//		if (a[pc] == key) {
//			while (pc > pl && a[pc] == a[pc - 1]) {
//				pc--;
//			}
//			return pc;
//		}
//		else if (a[pc] < key) pl = pc + 1;
//		else pr = pc - 1;
//	} while (pl <= pr);
//
//	return -1;
//}
//
//int main(void) {
//	int i, nx, ky, idx, idx2;
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
//	idx2 = bin_search2(x, nx, ky);
//
//	if (idx == -1) printf("search�Լ� : �˻��� �����߽��ϴ�.");
//	else printf("search�Լ� : %d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, idx);
//	puts("-----------------------------------------------");
//	if (idx == -1) printf("search2�Լ� : �˻��� �����߽��ϴ�.");
//	else printf("search2�Լ� : %d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, idx2);
//
//	free(x);
//
//	return 0;
//}