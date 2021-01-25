#include <stdio.h>
#include <stdlib.h>
#include "ArrayIntQueue.h"

/*큐 초기화*/
int Initialize(ArrayIntQueue *q, int max) {
	q->num = 0;
	if ((q->que = calloc(max, sizeof(int))) == NULL) {
		q->max = 0; //배열 생성 실패
		return -1;
	}
	q->max = max;
	return 0;
}

/*큐에 데이터 인큐*/
int Enque(ArrayIntQueue *q, int x) {
	if (q->num >= q->max) return -1; //큐가 가득 참
	q->que[q->num++] = x;
	return 0;
}

/*큐에서 데이터 디큐*/
int Deque(ArrayIntQueue *q, int *x) {
	int i;
	int j = 0;
	if (q->num <= 0) return -1; //큐가 비어있음
	*x = q->que[0];
	q->num--;
	for (i = q->num; i >= 0; i--) {
		q->que[j] = q->que[j + 1];
		j++;
	}
	return 0;
}

/*큐에서 데이터 피크*/
int Peek(ArrayIntQueue *q, int *x) {
	if (q->num <= 0) return -1;
	*x = q->que[0];
	return 0;
}

/*큐 출력*/
void Print(const ArrayIntQueue *q) {
	int i;

	for (i = 0; i < q->num; i++) {
		printf("%d ", q->que[i]);
	}
	putchar('\n');
}

/*큐에서 검색*/
int Search(const ArrayIntQueue *q, int x) {
	int i;

	for (i = 0; i < q->num; i++) {
		if (q->que[i] == x) return i;
	}
	return -1;
}

/*큐 초기화*/
void Clear(ArrayIntQueue *q) {
	q->num = 0;
}

/*큐 빈 상태인지 판별*/
int IsEmpty(const ArrayIntQueue *q) {
	return q->num <= 0;
}

/*큐 가득 찬 상태인지 판별*/
int IsFull(const ArrayIntQueue * q) {
	return q->num >= q->max;
}

/*큐 종료*/
void Terminate(ArrayIntQueue *q) {
	if (q->que != NULL) free(q->que);
	q->max = q->num = 0;
}

/*큐의 데이터 수 구하기*/
int Size(const ArrayIntQueue *q) {
	return q->num;
}

/*큐의 용량 구하기*/
int Capacity(const ArrayIntQueue *q) {
	return q->max;
}