///*요소의 개수가 n인 배열 a에서 key와 일치하는 모든 요소의 인덱스를 배열 idx에 순서대로 저장하고 일치한 요싀 개수 반환하는 함수*/
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
//	printf("요소 개수 : "); scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//
//	kyidx = calloc(nx ,sizeof(int));
//	printf("찾고자 하는 요소 : "); scanf("%d", &ky);
//
//	printf("찾고자 하는 요소는 %d개 입니다.\n", search_idx(x, nx, ky, kyidx));
//
//	free(x);
//	free(kyidx);
//
//	return 0;
//}
