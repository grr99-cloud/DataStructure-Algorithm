///*����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��� ����� �ε����� �迭 idx�� ������� �����ϰ� ��ġ�� ��� ���� ��ȯ�ϴ� �Լ�*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int search_idx(const int a[], int n, int key, int idx[]) {
//	int i;
//	int count = 0;
//	
//	for (i = 0; i < n; i++) {
//		if (a[i] == key) idx[count++] = i;
//	}
//
//	return count;
//}
//
//int main(void) {
//	int i;
//	int *x;
//	int nx, ky;
//	int *kyidx;
//
//	printf("��� ���� : "); scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//
//	kyidx = calloc(nx ,sizeof(int));
//	printf("ã���� �ϴ� ��� : "); scanf("%d", &ky);
//
//	printf("ã���� �ϴ� ��Ҵ� %d�� �Դϴ�.\n", search_idx(x, nx, ky, kyidx));
//
//	free(x);
//	free(kyidx);
//
//	return 0;
//}
