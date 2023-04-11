#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct {
	int front;
	int rear;
	int capacity;
	element *data;
}Queue;

void init_queue(Queue* q,int N) {
	q->front = 0;
	q->rear = 0;
	q->capacity = N;
	q->data = (element*)malloc((q->capacity) * sizeof(element));
}

int is_full(Queue* q) {
	return (q->rear == q->capacity - 1);
}

void push(Queue* q, int item) {
	if (is_full(q))
	{
		q->capacity *= 2;
		q->data = (element*)realloc(q->data, q->capacity * sizeof(element));

	}
	q->data[(q->rear)++] = item;
}

int pop(Queue* q) {
	return q->data[(q->front)++];
}

int main() {
	Queue *que;
	int N, K,i=0;
	scanf("%d %d", &N, &K);
	que = (Queue*)malloc(sizeof(Queue));
	init_queue(que, N);
	printf("<");
	for (int i = 0; i < N; i++)
	{
		push(que, i + 1);
	}
	while (i != N) {
		for (int i = 0; i < K-1; i++)
		{
			int tmp = pop(que);
			push(que, tmp);
		}
		printf("%d", pop(que));
		i++;
		if (i != N)
		{
			printf(", ");
		}
	}
	printf(">");
}