///*1, 2, ..., n 의 합을 구하는 프로그램(while문)*/
//#include <stdio.h>
//
//int main(void) {
//	int i = 1; 
//	int n; 
//	int sum = 0;
//
//	puts("1부터 n까지의 합을 구합니다.");
//	printf("n의 값 : "); scanf("%d", &n);
//
//	while (i <= n) {
//		sum += i;
//		i++;
//	}
//
//	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
//	printf("변수 i의 값은 %d이고 n+1 과 %s\n", i, (i == n + 1) ? "같습니다." : "같지 않습니다.");
//
//	return 0;
//}