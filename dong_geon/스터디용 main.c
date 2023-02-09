#include <stdio.h> 
#include <stdlib.h>
#define min(a,b) (a<b?a:b) 
typedef struct RGB {
	int r;
	int g;
	int b;
}R;

int main(void)
{
	long long dp[1001][3];
	int n, sum = 0;
	R* rgb;
	scanf("%d", &n);
	rgb = (R*)malloc(sizeof(R) * n);
	for (int i = 0; i < n; i++)
		scanf("%d %d %d", &rgb[i].r, &rgb[i].g, &rgb[i].b);
	
	dp[0][0] = rgb[0].r;
	dp[0][1] = rgb[0].g;
	dp[0][2] = rgb[0].b;
	for (int i = 1; i < n; i++)
	{
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + rgb[i].r;
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + rgb[i].g;
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + rgb[i].b;
	}
	printf("%lld", min(min(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]));
}
