///*�迭�� ��� ����� ������ �ڼ��� shuffle �Լ�*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)
//
//void shuffle(int a[], int n) {
//	int i;
//	
//	srand(time(NULL));
//	for (i = n - 1; i > 0; i--) {
//		int j = rand() % (i + 1);
//		if (i != j) swap(int, a[i], a[j]);
//	}
//}
//
//int main(void) {
//	int i;
//	int *x; //�迭 ù��° ��� ������
//	int nx; //�迭 x�� ��� ����
//
//	printf("��� ���� : "); scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));
//
//	printf("%d���� ������ �Է��ϼ���.\n", nx);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//
//	shuffle(x, nx);
//
//	printf("�迭 ����� ������ �����߽��ϴ�.\n");
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : %d\n", i, x[i]);
//	}
//
//	free(x);
//
//	return 0;
//}