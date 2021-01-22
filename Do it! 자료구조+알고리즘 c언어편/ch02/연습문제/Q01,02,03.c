///*키의 최솟값을 구하는 프로그램*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int minof(const int a[], int n);
//int maxof(const int a[], int n);
//int sumof(const int a[], int n);
//double aveof(const int a[], int n);
//
//int main(void) {
//	int i;
//	int number; //사람 수
//	int *height;
//
//	printf("사람 수 : "); scanf("%d", &number);
//
//	height = calloc(number, sizeof(int));
//
//	printf("%d 사람의 키를 입력하세요.\n", number);
//	for (i = 0; i < number; i++) {
//		printf("height[%d] : ", i); scanf("%d", &height[i]);
//	}
//
//	printf("최댓값은 %d입니다.\n", maxof(height, number));
//	printf("최솟값은 %d입니다.\n", minof(height, number));
//	printf("합계는 %d입니다.\n", sumof(height, number));
//	printf("평균은 %.2f입니다.\n", aveof(height, number));
//	
//	free(height);
//
//	return 0;
//}
//
//double aveof(const int a[], int n) {
//	double ave;
//
//	ave = (double)sumof(a, n) / n;
//
//	return ave;
//}
//
//int sumof(const int a[], int n) {
//	int i;
//	int sum = 0; //합계
//	
//	for (i = 0; i < n; i++) {
//		sum += a[i];
//	}
//
//	return sum;
//}
//
//int minof(const int a[], int n) {
//	int i;
//	int min; //최솟값
//	min = a[0];
//
//	for (i = 1; i < n; i++) {
//		if (min > a[i]) min = a[i];
//	}
//
//	return min;
//}
//
//int maxof(const int a[], int n) {
//	int i;
//	int max; //최댓값
//	max = a[0];
//
//	for (i = 1; i < n; i++) {
//		if (max > a[i]) max = a[i];
//	}
//
//	return max;
//}