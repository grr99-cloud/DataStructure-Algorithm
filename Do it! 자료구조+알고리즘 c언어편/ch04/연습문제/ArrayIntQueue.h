#pragma once
#ifndef  __ArrayIntQueue
#define __ArrayIntQueue

typedef struct {
	int max; //ť�� �뷮
	int num; //���� ������ ��
	int *que; //ť�� ù ��ҿ� ���� ������
} ArrayIntQueue;

//ť �ʱ�ȭ
int Initialize(ArrayIntQueue *q, int max);

//ť�� �����͸� ��ť
int Enque(ArrayIntQueue *q, int x);

//ť���� �����͸� ��ť
int Deque(ArrayIntQueue *q, int *x);

//ť���� �����͸� ��ũ
int Peek(const ArrayIntQueue *q, int *x);

//��� ������ ���
void Print(const ArrayIntQueue *q);

//ť���� �����͸� �˻�
int Search(const ArrayIntQueue *q, int x);

//ť�� �ʱ�ȭ
void Clear(ArrayIntQueue *q);

//�� �������� Ȯ��
int IsEmpty(const ArrayIntQueue *q);

//���� �� �������� Ȯ��
int IsFull(const ArrayIntQueue *q);

//ť ����
void Terminate(ArrayIntQueue *q);

//ť�� �׿��ִ� ������ �� ���ϱ�
int Size(const ArrayIntQueue * q);

//ť �뷮 ���ϱ�
int Capacity(const ArrayIntQueue *q);

#endif // ! __ArrayIntQueue
