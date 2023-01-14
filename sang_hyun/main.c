#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float price0, gram0,count,price1,gram1,mid_price0,mid_price1,final_price = 100000000000;
	
	scanf("%f %f", &price0, &gram0);
	scanf("%f\n", &count);

	mid_price0 = price0 / gram0;

	for (int i = 0; i < count; i++) {
		scanf("%f %f", &price1, &gram1);
		mid_price1 = price1 / gram1;
		if (mid_price0 > mid_price1) {
			if (final_price > mid_price1) {
				final_price = mid_price1;
			}
			else
				final_price = final_price;
		}
		else {
			if (final_price > mid_price0) {
				final_price = mid_price0;
			}
			else {
				final_price = final_price;
			}
		}
	}
	printf("%.2f",final_price * 1000);
	return 0;
}

<<<<<<< HEAD
//동건 피드백
//실수형변수는 float보다는 double을 사용하는게 좋아요. 이 문제에선 오차범위도 넉넉하고 입력범위도 크지않아서 통과되었지만
//오차범위가 조금 더 줄어들면 float으론 부정확한 결과가 나올 수 있습니다. 만능 double(%lf) 의 사용을 추천드립니다~ 
=======
//이것보다
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float price0, count,price1,a,b;

	scanf("%f %f", &a, &b);
	scanf("%f", &count);
	price0 = a / b * 1000;

	for (int i = 0; i < count; i++) {
		scanf("%f %f", &a, &b);
		price1 = a / b * 1000;
		if (price0>price1) {
			price0 = price1;
		}
		else {
			price0 = price0;
		}
	}
	printf("%.2f", price0);
}
//이 방법이 훨씬 깔끔한 듯
//2480 주사위 문제
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b==c) {
		printf("%d", 10000 + (a * 1000));
	}
	else if (a == b || b == c || a == c) {
		if (a != c) {
			printf("%d", 1000 + b * 100);
		}
		else if (b != c) {
			printf("%d", 1000 + a * 100);
		}
		else if (a != b) {
			printf("%d", 1000 + c * 100);
		}
	}
	else {
		if (a > b) {
			if (c > a) {
				printf("%d", 100 * c);
			}
			else {
				printf("%d", 100 * a);
			}
		}
		else {
			if (b < c) {
				printf("%d", 100 * c);
			}
			else {
				printf("%d", 100 * b);
			}
		}
	}
}
//무지성 나열형보다는 &&(and)와 ||(or)연산자를 이용한 요약 생각!!!

//별찍기 2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int b = a - i; b > 1; b--) { //범위로 한계를 정해줘야 함. 이때 _ 자리는 점점 줄어들어야 하니까
			printf(" ");  		  // --로 줄어들어야 함.
		}
		for (int c = a - i; c < a + 1; c++) {
			printf("*"); 
		}
		printf("\n");
	}
}
