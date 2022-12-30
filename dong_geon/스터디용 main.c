#include <stdio.h>

//2980 도로와 신호등, 쉬운 실버문제지만 생각보다 어려운 문제. 조건 하나하나 생각하면서 잘 설정해주어야함
//핵심은 17~26번째 줄을 구현해내는 것. 나누기 연산자 활용!

int main(void)
{
	int i, n, l, d[101]={0}, r[101], g[101],time, x = 0, t = 0; //x는 거리 t는 시간
	scanf("%d %d", &n, &l);
	for (i = 0; i < n; i++) 
		scanf("%d %d %d", &d[i], &r[i], &g[i]); //인덱스는 i 번째 신호등

	for (i = 0; i < n; i++)  //도로 시작부터 마지막 신호등까지
	{
		time = r[i] + g[i];
		while (x != l) {  //신호등을 만나기위한 대충 조건.
			x++;
			t++;
			if (x == d[i])  //현재 거리와 신호등과 만났을 때
			{
				if(t%time>=r[i]) 
					break;
				else
				{
					t += r[i] - (t % time);
					break;
				}
			}
		}
	} 

	while (1) // 마지막 신호등 끝나고부터 도로끝까지의 거리 추가
	{
		x++;
		t++;
		if (x == l) 
			break;
	}

	printf("%d", t);
}