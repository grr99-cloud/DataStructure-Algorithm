///*배열의 모든 요소의 순서를 뒤섞는 shuffle 함수*/
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
//	int *x; //배열 첫번째 요소 포인터
//	int nx; //배열 x의 요소 개수
//
//	printf("요소 개수 : "); scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));
//
//	printf("%d개의 정수를 입력하세요.\n", nx);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//
//	shuffle(x, nx);
//
//	printf("배열 요소의 순서를 셔플했습니다.\n");
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : %d\n", i, x[i]);
//	}
//
//	free(x);
//
//	return 0;
//}