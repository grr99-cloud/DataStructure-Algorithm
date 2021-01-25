///* int�� ���� IntStack (�ҽ�) */
//#include <stdio.h>
//#include <stdlib.h>
//#include "IntStack2.h"
//
///*--- ���� �ʱ�ȭ ---*/
//int Initialize(IntStack *s, int max)
//{
//	s->ptr_A = 0;
//	if ((s->stk = calloc(max, sizeof(int))) == NULL) {
//		s->max = 0;								/* �迭�� ������ ���� */
//		return -1;
//	}
//	s->max = max;
//	s->ptr_B = s->max;
//	return 0;
//}
//
///*--- ���ÿ� �����͸� Ǫ��---*/
//int Push(IntStack *s, char stack, int x)
//{
//	if (s->ptr_A >= s->ptr_B)						/* ������ ���� �� */
//		return -1;
//
//	if (stack == 'A') {
//		s->stk[s->ptr_A++] = x;
//		return 0;
//	}
//	else if (stack == 'B') {
//		s->stk[s->ptr_B--] = x;
//		return 0;
//	}
//	
//}
//
///*--- ���ÿ��� �����͸� �� ---*/
//int Pop(IntStack *s, char stack, int *x)
//{
//	if (stack == 'A') {
//		if (s->ptr_A <= 0)							/* ������ ��� ���� */
//			return -1;
//		*x = s->stk[--s->ptr_A];
//		return 0;
//	}
//	else if (stack == 'B') {
//		if (s->ptr_B >= s->max)							/* ������ ��� ���� */
//			return -1;
//		*x = s->stk[++s->ptr_B];
//		return 0;
//	}
//}
//
///*--- ���ÿ��� �����͸� ��ũ ---*/
//int Peek(const IntStack *s, char stack, int *x)
//{
//	if (stack == 'A') {
//		if (s->ptr_A <= 0)							/* ������ ��� ���� */
//			return -1;
//		*x = s->stk[s->ptr_A - 1];
//		return 0;
//	}
//	else if (stack == 'B') {
//		if (s->ptr_B <= 0)							/* ������ ��� ���� */
//			return -1;
//		*x = s->stk[s->ptr_B + 1];
//		return 0;
//	}
//	
//}
//
///*--- ���� ���� ---*/
//void Clear(IntStack *s, char stack)
//{
//	if (stack == 'A') {
//		s->ptr_A = 0;
//	}
//	else if (stack == 'B') {
//		s->ptr_B = s->max;
//	}
//}
//
///*--- ���� �뷮 ---*/
//int Capacity(const IntStack *s)
//{
//	return s->max;
//}
//
///*--- ���ÿ� �׿� �ִ� ������ �� ---*/
//int Size(const IntStack *s, char stack)
//{
//	if (stack == 'A') {
//		return s->ptr_A;
//	}
//	else if (stack == 'B') {
//		return s->max - s->ptr_B;
//	}
//}
//
///*--- ������ ��� �ִ°�? ---*/
//int IsEmpty(const IntStack *s, char stack)
//{
//	if (stack = 'A') {
//		return s->ptr_A <= 0;
//	}
//	else if (stack = 'B') {
//		return s->ptr_B >= s->max;
//	}
//}
//
///*--- ������ ���� á�°�? ---*/
//int IsFull(const IntStack *s)
//{
//	return s->ptr_A >= s->ptr_B;
//}
//
///*--- ���ÿ��� �˻� ---*/
//int Search(const IntStack *s, char stack, int x)
//{
//	int i;
//
//	if (stack = 'A') {
//		for (i = s->ptr_A - 1; i >= 0; i--)	/* �����(top) �� �ٴ�(bottom)���� ���� �˻� */
//			if (s->stk[i] == x)
//				return i;		/* �˻� ���� */
//		return -1;				/* �˻� ���� */
//	}
//	else if (stack = 'B') {
//		for (i = s->ptr_B + 1; i <= s->max; i++)	/* �����(top) �� �ٴ�(bottom)���� ���� �˻� */
//			if (s->stk[i] == x)
//				return i;		/* �˻� ���� */
//		return -1;				/* �˻� ���� */
//	}
//}
//
///*--- ��� ������ ǥ�� ---*/
//void Print(const IntStack *s, char stack)
//{
//	int i;
//	
//	if (stack == 'A') {
//		for (i = 0; i < s->ptr_A; i++)		/* �ٴ�(bottom) �� �����(top)�� ��ĵ */
//			printf("%d ", s->stk[i]);
//		putchar('\n');
//	}
//	else if (stack == 'B') {
//		for (i = s->max; i > s->ptr_B; i--)		/* �ٴ�(bottom) �� �����(top)�� ��ĵ */
//			printf("%d ", s->stk[i]);
//		putchar('\n');
//	}
//}
//
///*--- ���� ���� ---*/
//void Terminate(IntStack *s)
//{
//	if (s->stk != NULL)
//		free(s->stk);		/* �迭�� ���� */
//	s->max = s->ptr_A = 0;
//}
