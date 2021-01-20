///*배열의 요소를 역순으로 정렬하는 과정을 출력하는 프로그램*/
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
//		printf("%d번째 원소와 %d번째 원소를 교환합니다\n",i,n-i-1);
//		swap(int, a[i], a[n - i - 1]);
//	}
//	puts("역순 정렬을 종료합니다.");
//}
//int main(void) {
//	int i;
//	int *x;
//	int nx;
//
//	printf("요소 개수 : "); scanf("%d", &nx);
//	
//	x = calloc(nx, sizeof(int));
//
//	printf("%d개의 정수를 입력하세요\n", nx);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//	
//	puts("역순 정렬을 시작합니다.");
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