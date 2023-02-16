#include <stdio.h>
#include <string.h>

int stack[10001] = { 0 };
int idx = 0;

void push(int n) {
	stack[idx] = n;
	idx++;
}
void pop(void) {
	if (idx == 0)
		printf("-1\n");
	else if (idx > 0) {
		idx--;
		printf("%d\n", stack[idx]);
		stack[idx] = 0;
	}
}
void size(void) {
	printf("%d\n", idx);
}
void empty(void) {
	if (idx == 0)
		printf("1\n");
	else
		printf("0\n");
}
void top(void) {
	if (idx == 0)
		printf("-1\n");
	else
		printf("%d\n", stack[idx - 1]);
}


int main()
{
	int n, i, num;
	char s[10];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", s);
		if (strcmp(s, "push") == 0) {
			scanf("%d", &num);
			push(num);
		}
		if (strcmp(s, "pop") == 0) {
			pop();
		}
		if (strcmp(s, "size") == 0) {
			size();
		}
		if (strcmp(s, "empty") == 0) {
			empty();
		}
		if (strcmp(s, "top") == 0) {
			top();
		}
	}
}