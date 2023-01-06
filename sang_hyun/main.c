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