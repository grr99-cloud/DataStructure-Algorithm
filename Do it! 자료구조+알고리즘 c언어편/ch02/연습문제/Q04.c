///*
//	사람 수와 키를 난수로 생성한 후 최댓값을 구하는 프로그램
//	5<=사람수&&사람수<=20
//	100<=키&&키<=189
//*/
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//int maxof(const int a[], int n) {
//	int i;
//	int max = a[0]; //최댓값
//	
//	for (i = 1; i < n; i++) {
//		if (a[i] > max) max = a[i];
//	}
//
//	return max;
//}
//
//int main(void) {
//	int i;
//	int *height;
//	int number;
//
//	srand(time(NULL));
//	number = 5 + rand() % 16;
//	height = calloc(number, sizeof(int));
//	for (i = 0; i < number; i++) {
//		height[i] = 100 + rand() % 90;
//		printf("height[%d] = %d\n", i, height[i]);
//	}
//	
//	free(height);
//
//	return 0;
//}