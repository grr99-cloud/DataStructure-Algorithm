///*배열 b의 모든 요소를 배열 a에 복사하는 함수*/
//#include <stdio.h>
//#include <stdlib.h>
//
//void ary_copy(int a[], const int b[], int n) {
//	int i;
//
//	for (i = 0; i < n; i++) {
//		a[i] = b[i];
//	}
//}
//
//int main(void) {
//	int i;
//	int *x, *y;
//	int n;
//
//	printf("요소 개수 : "); scanf("%d", &n);
//	
//	x = calloc(n, sizeof(int));
//	y = calloc(n, sizeof(int));
//
//	printf("%d개의 정수를 입력하세요.\n", n);
//	for (i = 0; i < n; i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//
//	ary_copy(y, x, n); //배열 x의 요소를 배열 y에 복사
//	
//	printf("배열 x의 모든 요소를 배열 y로 복사했습니다.\n");
//	for (i = 0; i < n; i++) {
//		printf("y[%d] : %d\n", i, y[i]);
//	}
//
//	free(x);
//	free(y);
//
//	return 0;
//}