///*선형 검색(보초법)*/
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//
///*요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색(보초법)*/
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
//	int *x;									/* 배열의 첫 번째 요소에 대한 포인터 */
//
//	puts("선형 검색(보초법)");
//	printf("요소의 개수 : "); scanf("%d", &nx);
//	x = calloc(nx + 1, sizeof(int));		/* 요소의 개수(nx + 1)인 int형 배열을 생성 */
//
//	for (i = 0; i < nx; i++) {				/* 주의 : 값을 읽어 들인 것 nx 개 */
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//
//	printf("검색 값 : "); scanf("%d", &ky);
//	widx = search_while(x, nx, ky);				//while문 함수 이용
//	fidx = search_for(x, nx, ky);				//for문 함수 이용
//
//	if (widx == -1)
//		puts("while문 이용 : 검색에 실패했습니다.");
//	else
//		printf("while문 이용 : %d(은)는 x[%d]에 있습니다.\n", ky, widx);
//
//	puts("--------------------------------------------------");
//
//	if (fidx == -1)
//		puts("for문 이용 : 검색에 실패했습니다.");
//	else
//		printf("for문 이용 : %d(은)는 x[%d]에 있습니다.\n", ky, widx);
//
//	puts("--------------------------------------------------");
//
//	free(x);								/* 배열을 해제 */
//
//	return 0;
//}