#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[1000] = { 0 };	//n�� ������ 1000�̹Ƿ� 1000¥�� �迭 ����

int main() {
	int n, k, count = 0;	// ���ǿ� �־��� n,k ���° ���� �� count ����

	scanf("%d %d", &n, &k);

	printf("<");	// �������
	for (int i = 0; i < n; i++) {	//��ü�� n����ŭ �ݺ��ؼ� n�� ���
		for (int j = 0; j < k; j++) {	// k����ŭ count�� ����
			count++;	//k����ŭ ī��Ʈ�� ����
			if (count == n)count = 0;	//count�� n�� �Ǹ� 0���� �ʱ�ȭ
			else count %= n;	// count�� n���� Ŀ���� ���� �����ϱ� ���� n���� ���� ������ ������ ��� �ʱ�ȭ
			while (a[count] == 1) {		//�迭 a�� �ּҰ� count�� ���� ���� 1 �̸�, �߰��� count�� ������Ű��, %n����.
				count++;
				count %= n;
			}
		}
		if (a[count] == 1)count++; // �� �ڵ尡 �ѹ� ���� ���� ���� ���� �̹� �ѹ� ��� �� ���� ��츦 ����Ͽ� count�� ����
		if (count == 0)printf("%d", n); //��� % n�� ���־��� ������, ����� ���� n�϶��� 0�� ��� �ǹǷ�, 0 ��� n�� ���
		else printf("%d", count); //���� ���� ���
		if (i < n - 1) printf(", ");	//�������
		a[count]++; //����� count ���� �ش��ϴ� �迭 a�� ���� 1 ����
	}
	printf(">");	//�������
}