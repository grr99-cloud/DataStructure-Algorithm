///*���� �˻�(���ʹ�)*/
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//
///*����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�(���ʹ�)*/
//int search_while(int a[], int n, int key) {
//	int i = 0;
//	a[n] = key;
//
//	while (1) {
//		if (a[i] == key) break;
//		i++;
//	}
//
//	return i == n ? -1 : i;
//}
//
//int search_for(int a[], int n, int key) {
//	int i = 0;
//	a[n] = key;
//	
//	for (i = 0; i <= n; i++) {
//		if (a[i] == key) break;
//	}
//
//	return i == n ? -1 : i;
//}
//
//int main(void)
//{
//	int i, nx, ky;
//	int widx, fidx;
//	int *x;									/* �迭�� ù ��° ��ҿ� ���� ������ */
//
//	puts("���� �˻�(���ʹ�)");
//	printf("����� ���� : "); scanf("%d", &nx);
//	x = calloc(nx + 1, sizeof(int));		/* ����� ����(nx + 1)�� int�� �迭�� ���� */
//
//	for (i = 0; i < nx; i++) {				/* ���� : ���� �о� ���� �� nx �� */
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//
//	printf("�˻� �� : "); scanf("%d", &ky);
//	widx = search_while(x, nx, ky);				//while�� �Լ� �̿�
//	fidx = search_for(x, nx, ky);				//for�� �Լ� �̿�
//
//	if (widx == -1)
//		puts("while�� �̿� : �˻��� �����߽��ϴ�.");
//	else
//		printf("while�� �̿� : %d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, widx);
//
//	puts("--------------------------------------------------");
//
//	if (fidx == -1)
//		puts("for�� �̿� : �˻��� �����߽��ϴ�.");
//	else
//		printf("for�� �̿� : %d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, widx);
//
//	puts("--------------------------------------------------");
//
//	free(x);								/* �迭�� ���� */
//
//	return 0;
//}