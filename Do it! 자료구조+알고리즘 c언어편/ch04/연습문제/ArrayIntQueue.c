#include <stdio.h>
#include <stdlib.h>
#include "ArrayIntQueue.h"

/*ť �ʱ�ȭ*/
int Initialize(ArrayIntQueue *q, int max) {
	q->num = 0;
	if ((q->que = calloc(max, sizeof(int))) == NULL) {
		q->max = 0; //�迭 ���� ����
		return -1;
	}
	q->max = max;
	return 0;
}

/*ť�� ������ ��ť*/
int Enque(ArrayIntQueue *q, int x) {
	if (q->num >= q->max) return -1; //ť�� ���� ��
	q->que[q->num++] = x;
	return 0;
}

/*ť���� ������ ��ť*/
int Deque(ArrayIntQueue *q, int *x) {
	int i;
	int j = 0;
	if (q->num <= 0) return -1; //ť�� �������
	*x = q->que[0];
	q->num--;
	for (i = q->num; i >= 0; i--) {
		q->que[j] = q->que[j + 1];
		j++;
	}
	return 0;
}

/*ť���� ������ ��ũ*/
int Peek(ArrayIntQueue *q, int *x) {
	if (q->num <= 0) return -1;
	*x = q->que[0];
	return 0;
}

/*ť ���*/
void Print(const ArrayIntQueue *q) {
	int i;

	for (i = 0; i < q->num; i++) {
		printf("%d ", q->que[i]);
	}
	putchar('\n');
}

/*ť���� �˻�*/
int Search(const ArrayIntQueue *q, int x) {
	int i;

	for (i = 0; i < q->num; i++) {
		if (q->que[i] == x) return i;
	}
	return -1;
}

/*ť �ʱ�ȭ*/
void Clear(ArrayIntQueue *q) {
	q->num = 0;
}

/*ť �� �������� �Ǻ�*/
int IsEmpty(const ArrayIntQueue *q) {
	return q->num <= 0;
}

/*ť ���� �� �������� �Ǻ�*/
int IsFull(const ArrayIntQueue * q) {
	return q->num >= q->max;
}

/*ť ����*/
void Terminate(ArrayIntQueue *q) {
	if (q->que != NULL) free(q->que);
	q->max = q->num = 0;
}

/*ť�� ������ �� ���ϱ�*/
int Size(const ArrayIntQueue *q) {
	return q->num;
}

/*ť�� �뷮 ���ϱ�*/
int Capacity(const ArrayIntQueue *q) {
	return q->max;
}