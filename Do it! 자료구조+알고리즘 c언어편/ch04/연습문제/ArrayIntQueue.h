#pragma once
#ifndef  __ArrayIntQueue
#define __ArrayIntQueue

typedef struct {
	int max; //큐의 용량
	int num; //현재 데이터 수
	int *que; //큐의 첫 요소에 대한 포인터
} ArrayIntQueue;

//큐 초기화
int Initialize(ArrayIntQueue *q, int max);

//큐에 데이터를 인큐
int Enque(ArrayIntQueue *q, int x);

//큐에서 데이터를 디큐
int Deque(ArrayIntQueue *q, int *x);

//큐에서 데이터를 피크
int Peek(const ArrayIntQueue *q, int *x);

//모든 데이터 출력
void Print(const ArrayIntQueue *q);

//큐에서 데이터를 검색
int Search(const ArrayIntQueue *q, int x);

//큐를 초기화
void Clear(ArrayIntQueue *q);

//빈 상태인지 확인
int IsEmpty(const ArrayIntQueue *q);

//가득 찬 상태인지 확인
int IsFull(const ArrayIntQueue *q);

//큐 종료
void Terminate(ArrayIntQueue *q);

//큐에 쌓여있는 데이터 수 구하기
int Size(const ArrayIntQueue * q);

//큐 용량 구하기
int Capacity(const ArrayIntQueue *q);

#endif // ! __ArrayIntQueue
