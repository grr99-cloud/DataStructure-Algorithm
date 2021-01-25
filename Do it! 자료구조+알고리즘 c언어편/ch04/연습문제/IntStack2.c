/* int형 스택 IntStack (소스) */
#include <stdio.h>
#include <stdlib.h>
#include "IntStack2.h"

/*--- 스택 초기화 ---*/
int Initialize(IntStack *s, int max)
{
	s->ptr_A = 0;
	if ((s->stk = calloc(max, sizeof(int))) == NULL) {
		s->max = 0;								/* 배열의 생성에 실패 */
		return -1;
	}
	s->max = max;
	s->ptr_B = s->max;
	return 0;
}

/*--- 스택에 데이터를 푸시---*/
int Push(IntStack *s, char stack, int x)
{
	if (s->ptr_A >= s->ptr_B)						/* 스택이 가득 참 */
		return -1;

	if (stack == 'A') {
		s->stk[s->ptr_A++] = x;
		return 0;
	}
	else if (stack == 'B') {
		s->stk[s->ptr_B--] = x;
		return 0;
	}
	
}

/*--- 스택에서 데이터를 팝 ---*/
int Pop(IntStack *s, char stack, int *x)
{
	if (stack == 'A') {
		if (s->ptr_A <= 0)							/* 스택이 비어 있음 */
			return -1;
		*x = s->stk[--s->ptr_A];
		return 0;
	}
	else if (stack == 'B') {
		if (s->ptr_B >= s->max)							/* 스택이 비어 있음 */
			return -1;
		*x = s->stk[++s->ptr_B];
		return 0;
	}
}

/*--- 스택에서 데이터를 피크 ---*/
int Peek(const IntStack *s, char stack, int *x)
{
	if (stack == 'A') {
		if (s->ptr_A <= 0)							/* 스택이 비어 있음 */
			return -1;
		*x = s->stk[s->ptr_A - 1];
		return 0;
	}
	else if (stack == 'B') {
		if (s->ptr_B <= 0)							/* 스택이 비어 있음 */
			return -1;
		*x = s->stk[s->ptr_B + 1];
		return 0;
	}
	
}

/*--- 스택 비우기 ---*/
void Clear(IntStack *s, char stack)
{
	if (stack == 'A') {
		s->ptr_A = 0;
	}
	else if (stack == 'B') {
		s->ptr_B = s->max;
	}
}

/*--- 스택 용량 ---*/
int Capacity(const IntStack *s)
{
	return s->max;
}

/*--- 스택에 쌓여 있는 데이터 수 ---*/
int Size(const IntStack *s, char stack)
{
	if (stack == 'A') {
		return s->ptr_A;
	}
	else if (stack == 'B') {
		return s->max - s->ptr_B;
	}
}

/*--- 스택이 비어 있는가? ---*/
int IsEmpty(const IntStack *s, char stack)
{
	if (stack = 'A') {
		return s->ptr_A <= 0;
	}
	else if (stack = 'B') {
		return s->ptr_B >= s->max;
	}
}

/*--- 스택은 가득 찼는가? ---*/
int IsFull(const IntStack *s)
{
	return s->ptr_A >= s->ptr_B;
}

/*--- 스택에서 검색 ---*/
int Search(const IntStack *s, char stack, int x)
{
	int i;

	if (stack = 'A') {
		for (i = s->ptr_A - 1; i >= 0; i--)	/* 꼭대기(top) → 바닥(bottom)으로 선형 검색 */
			if (s->stk[i] == x)
				return i;		/* 검색 성공 */
		return -1;				/* 검색 실패 */
	}
	else if (stack = 'B') {
		for (i = s->ptr_B + 1; i <= s->max; i++)	/* 꼭대기(top) → 바닥(bottom)으로 선형 검색 */
			if (s->stk[i] == x)
				return i;		/* 검색 성공 */
		return -1;				/* 검색 실패 */
	}
}

/*--- 모든 데이터 표시 ---*/
void Print(const IntStack *s, char stack)
{
	int i;
	
	if (stack == 'A') {
		for (i = 0; i < s->ptr_A; i++)		/* 바닥(bottom) → 꼭대기(top)로 스캔 */
			printf("%d ", s->stk[i]);
		putchar('\n');
	}
	else if (stack == 'B') {
		for (i = s->max; i > s->ptr_B; i--)		/* 바닥(bottom) → 꼭대기(top)로 스캔 */
			printf("%d ", s->stk[i]);
		putchar('\n');
	}
}

/*--- 스택 종료 ---*/
void Terminate(IntStack *s)
{
	if (s->stk != NULL)
		free(s->stk);		/* 배열을 삭제 */
	s->max = s->ptr_A = 0;
}
