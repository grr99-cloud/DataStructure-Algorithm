///*bsearch �Լ� �̿� : ����� ���� ������������ ���ĵ� long�� �迭 �˻� ���α׷�*/
//#include <stdio.h>
//#include <stdlib.h>
//
///*���� �� �Լ�(��������)*/
//int int_cmp(const int *a, const int *b) {
//	/*if (*a < *b) return -1;
//	else if (*a > *b) return 1;
//	else return 0;*/
//	return *a<*b ? -1 : *a>*b ? 1 : 0;
//}
//
///*long�� �� �Լ�(��������)*/
//int long_cmp(const long *a, const long *b) {
//	return *a<*b ? -1 : *a>*b ? 1 : 0;
//}
//
//int main(void) {
//	/*int i, nx, ky;
//	int *x;
//	int *p;*/
//	int i, nxl, kyl;
//	long *xl;
//	long *pl;
//
//	puts("bsearch �Լ��� ����Ͽ� �˻�");
//	printf("��� ���� : "); scanf("%d", &nxl);
//	//x = calloc(nx, sizeof(int));
//	xl = calloc(nxl, sizeof(long) + 1);
//
//	printf("������������ �Է��ϼ���.\n");
//	for (i = 0; i < nxl; i++) {
//		do {
//			printf("x[%d] : ", i); scanf("%ld", &xl[i]);
//		} while(xl[i] < xl[i - 1]);
//	}
//
//	printf("�˻��� : "); scanf("%d", &kyl);
//	pl = bsearch(
//		&kyl,
//		xl,
//		nxl,
//		sizeof(int),
//		(int(*)(const void *, const void *)) long_cmp
//	);
//
//	if (pl == NULL) puts("�˻��� �����߽��ϴ�.");
//	else printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", kyl, (int)(pl - xl));
//
//	free(xl);
//
//	return 0;
//}