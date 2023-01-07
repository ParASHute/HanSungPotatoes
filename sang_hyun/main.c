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
