#include <stdio.h>

long long DP[101] = { 0 };
void dp(void) {
	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 1;
	DP[4] = 2;
	for (int i = 5; i <= 100; i++)
		DP[i] = DP[i - 2] + DP[i - 3];
}

int main()
{
	int t, n, i;
	scanf("%d", &t);
	dp();
	while (t--) {
		scanf("%d", &n);
		printf("%lld\n", DP[n]);
	}
}