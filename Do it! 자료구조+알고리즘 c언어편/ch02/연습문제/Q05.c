///*�迭�� ��Ҹ� �������� �����ϴ� ������ ����ϴ� ���α׷�*/
//#include <stdio.h>
//#include <stdlib.h>
//
//#define swap(type, x, y) do{type t=x; x=y; y=t;} while(0)
//
//void ary_reverse(int a[], int n) {
//	int i, j;
//	
//	for (i = 0; i < n / 2; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%3d", a[j]);
//		}
//		putchar('\n');
//		printf("%d��° ���ҿ� %d��° ���Ҹ� ��ȯ�մϴ�\n",i,n-i-1);
//		swap(int, a[i], a[n - i - 1]);
//	}
//	puts("���� ������ �����մϴ�.");
//}
//int main(void) {
//	int i;
//	int *x;
//	int nx;
//
//	printf("��� ���� : "); scanf("%d", &nx);
//	
//	x = calloc(nx, sizeof(int));
//
//	printf("%d���� ������ �Է��ϼ���\n", nx);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//	
//	puts("���� ������ �����մϴ�.");
//	ary_reverse(x, nx);
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : %d\n", i, x[i]);
//	}
//
//	free(x);
//	
//	return 0;
//}