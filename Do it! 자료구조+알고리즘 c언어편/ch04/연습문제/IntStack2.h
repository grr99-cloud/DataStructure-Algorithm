//#pragma once
///* int�� ���� IntStack(���) */
//#ifndef ___IntStack2
//#define ___IntStack2
//
///*--- ������ �����ϴ� ����ü ---*/
//typedef struct {
//	int max;		/* ���� �뷮 */
//	int ptr_A;		/* A ���� ������ */
//	int ptr_B;		/* B ���� ������ */
//	int *stk;		/* ������ ù ��ҿ� ���� ������ */
//} IntStack;
//
///*--- ���� �ʱ�ȭ ---*/
//int Initialize(IntStack *s, int max);
//
///*--- ���ÿ� �����͸� Ǫ��---*/
//int Push(IntStack *s, char stack, int x);
//
///*--- ���ÿ��� �����͸� �� ---*/
//int Pop(IntStack *s, char stack, int *x);
//
///*--- ���ÿ��� �����͸� ��ũ ---*/
//int Peek(const IntStack *s, char stack, int *x);
//
///*--- ���� ���� ---*/
//void Clear(IntStack *s, char stack);
//
///*--- ������ �ִ� �뷮 ---*/
//int Capacity(const IntStack *s);
//
///*--- ������ ������ ���� ---*/
//int Size(const IntStack *s, char stack);
//
///*--- ������ ��� �ֳ���? ---*/
//int IsEmpty(const IntStack *s, char stack);
//
///*--- ������ ���� á����? ---*/
//int IsFull(const IntStack *s);
//
///*--- ���ÿ��� �˻� ---*/
//int Search(const IntStack *s, char stack, int x);
//
///*--- ��� ������ ��� ---*/
//void Print(const IntStack *s, char stack);
//
///*--- ���� ���� ---*/
//void Terminate(IntStack *s);
//#endif
