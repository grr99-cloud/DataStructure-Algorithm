///*bsearch 함수 이용 : 요소의 값이 오름차순으로 정렬된 long형 배열 검색 프로그램*/
//#include <stdio.h>
//#include <stdlib.h>
//
///*정수 비교 함수(오름차순)*/
//int int_cmp(const int *a, const int *b) {
//	/*if (*a < *b) return -1;
//	else if (*a > *b) return 1;
//	else return 0;*/
//	return *a<*b ? -1 : *a>*b ? 1 : 0;
//}
//
///*long형 비교 함수(오름차순)*/
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
//	puts("bsearch 함수를 사용하여 검색");
//	printf("요소 개수 : "); scanf("%d", &nxl);
//	//x = calloc(nx, sizeof(int));
//	xl = calloc(nxl, sizeof(long) + 1);
//
//	printf("오름차순으로 입력하세요.\n");
//	for (i = 0; i < nxl; i++) {
//		do {
//			printf("x[%d] : ", i); scanf("%ld", &xl[i]);
//		} while(xl[i] < xl[i - 1]);
//	}
//
//	printf("검색값 : "); scanf("%d", &kyl);
//	pl = bsearch(
//		&kyl,
//		xl,
//		nxl,
//		sizeof(int),
//		(int(*)(const void *, const void *)) long_cmp
//	);
//
//	if (pl == NULL) puts("검색에 실패했습니다.");
//	else printf("%d은(는) x[%d]에 있습니다.\n", kyl, (int)(pl - xl));
//
//	free(xl);
//
//	return 0;
//}